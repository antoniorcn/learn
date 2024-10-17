import { Container, Grid, InputAdornment, ButtonGroup, Button as MuiButton } from "@mui/material";
import { makeStyles } from '@mui/styles';
import { useEffect } from 'react';
import Form from "layouts/Form";
import { Input, Select, Button} from "controls";
import ReplayIcon from "@mui/icons-material/Replay";
import RestaurantMenuIcon from '@mui/icons-material/RestaurantMenu';
import ReorderIcon from '@mui/icons-material/Reorder';
import { ENDPOINTS, createAPIEndpoint } from "api";
import { firebaseDataToList } from "api/util";

const pMethods = [
    {id: "none", title: "Select"},
    {id: "cash", title: "Cash"},
    {id: "card", title: "Card"},
]

const useStyles = makeStyles(theme => ({
    adornmentText: { 
        '& .MuiTypography-root': {
            color: '#F3B33D',
            fontWeight: 'bolder',
            fontSize: '1.5em'
        }
    },
    submitButtonGroup: {
        backgroundColor : '#F3B33D',
        color: '#000',
        margin: theme.spacing(1),
        '& .MuiButton-label': { 
            textTransform: 'none'
        },
        '&:hover': {
            backgroundColor: '#F3B33D',
        }
    }
}))

export default function OrderForm( {handleInputChange, resetFormControl, values, customerList, setCustomerList} ) { 
    const classes = useStyles();
    // console.log("Customer List Atual: ", JSON.stringify(customerList));
    useEffect(()=>{
        createAPIEndpoint(ENDPOINTS.CUSTOMER).fetchAll()
        .then(( response )=>{
            const tempCustomerList = firebaseDataToList( response.data, (chave, obj)=> (
                {id: obj.customerId, customerId: chave, title: obj.customerName}
            ));
            setCustomerList([ {id: "0", title: "Select"}, ...tempCustomerList]);
        })
        .catch(( err )=>{ alert("Error: " + err)})
    }, [])

    return (
        <Form>
            <Container>
                <Grid container>
                    <Grid item xs={6}>
                        <Input 
                            label="Order Number"
                            name="orderNumber"
                            onChange={handleInputChange}
                            value={values.orderNumber}
                            InputProps = {{
                                startAdornment : 
                                    <InputAdornment 
                                        className = {classes.adornmentText} 
                                        position = "start">#</InputAdornment>
                            }}/>
                        <Select 
                            label="Customer"
                            name="customerId"
                            defaultValue="0"
                            value={values.customerId}
                            options = {customerList}
                            onChange={handleInputChange}/>
                    </Grid>
                    <Grid item xs={6}>
                        <Select 
                            label="Payment Method"
                            name="pMethod"
                            defaultValue="0"
                            value={values.pMethod}
                            options = {pMethods}
                            onChange={handleInputChange}/>
                        <Input 
                            label="Grand Total"
                            name="gTotal"
                            value={values.gTotal}
                            InputProps = {{
                                startAdornment : 
                                    <InputAdornment 
                                        className = {classes.adornmentText} 
                                        position="start">$</InputAdornment>
                            }}/>
                        <ButtonGroup className={classes.submitButtonGroup}>
                            <MuiButton
                                size="large"
                                startIcon={<ReplayIcon/>}
                                type="submit">Submit</MuiButton>
                            <MuiButton
                                size="small"
                                endIcon={<RestaurantMenuIcon/>}
                                onClick={resetFormControl}/>
                        </ButtonGroup>
                        <Button 
                            size="large"
                            startIcon={<ReorderIcon/>}
                        >Orders</Button>
                    </Grid>

                </Grid>
            </Container>
        </Form>
    )
}