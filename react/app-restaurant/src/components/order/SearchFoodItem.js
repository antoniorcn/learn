import React, { useState, useEffect } from 'react';
import { ENDPOINTS, createAPIEndpoint } from 'api';
import { firebaseDataToList } from 'api/util';
import { IconButton, InputBase, List, ListItem, ListItemSecondaryAction, ListItemText, Paper } from '@mui/material';
import { makeStyles } from '@mui/styles';
import { SearchTwoTone, PlusOne, ArrowForwardIos} from '@mui/icons-material';

const useStyles = makeStyles(theme => ({
    searchPaper: { 
        padding: '2px 4px',
        display: 'flex',
        alignItems: 'center',
    },
    searchInput: {
        marginLeft: theme.spacing(1.5),
        flex: 1,
    },
    listRoot: {
        marginTop: theme.spacing(1),
        maxHeight: 450,
        overflow: 'auto',
        '& li:hover': {
            cursor: 'pointer',
            backgroundColor: '#E3E3E3'
        },
        '& li:hover .MuiButtonBase-root': {
            display: 'block',
            color: '#000'
        },
        '& .MuiButtonBase-root': {
            display: 'none',
        },
        '& .MuiButtonBase-root:hover': {
            backgroundColor: 'transparent',
        }
    }
}))

export default function SearchFoodItem( props ) { 

    const {addFoodItem} = props;
    const [foodItems, setFoodItems] = useState([]);
    const [searchList, setSearchList] = useState([]);
    const [searchKey, setSearchKey] = useState("");
    const classes = useStyles();

    useEffect( () => {
        createAPIEndpoint(ENDPOINTS.FOODITEM).fetchAll()
        .then((response)=>{
            const tempFoodItem = firebaseDataToList( response.data, (chave, obj)=> (
                {id: chave, ...obj}
            ));
            setFoodItems([ ...tempFoodItem]);
        })
        .catch((err)=>{ alert("Error: " + err)})
    }, [])

    useEffect( () => {
        setSearchList( 
                foodItems.filter((item, index) => searchKey === "" || 
                item.foodItemName.toLowerCase().includes(searchKey.toLowerCase()))
        )
    }, [searchKey])
    return (
        <>
            <Paper className={classes.searchPaper}>
                <InputBase 
                    placeholder="Serach food items" 
                    className={classes.searchPaper}
                    value={searchKey}
                    onChange={e=>{setSearchKey(e.target.value)}}/>
                <IconButton>
                    <SearchTwoTone/>
                </IconButton>
            </Paper>
            <List className={classes.listRoot}>
                { searchList.map( (item, idx) => 
                <ListItem key={idx}>
                    <ListItemText 
                        primary={item.foodItemName}
                        secondary={'R$' + item.price}/>
                    <ListItemSecondaryAction>
                        <IconButton onClick={ e => addFoodItem(item) }>
                            <PlusOne/>
                            <ArrowForwardIos/>
                        </IconButton>
                    </ListItemSecondaryAction>
                </ListItem> )}
            </List>
        </>
    )
}