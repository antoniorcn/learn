import { IconButton, List, ListItem, ListItemSecondaryAction, ListItemText, Paper } from '@mui/material';
import { DeleteTwoTone } from '@mui/icons-material';
export default function OrderFoodItems( { orderedFoodItems, removeFoodItem } ) {
    console.log( "OrderFoodItems: ", JSON.stringify(orderedFoodItems));
    return (
        <List>
            {
                orderedFoodItems.map(( item, index )=>(
                    <Paper key={index}>
                            <ListItem>
                                    <ListItemText
                                        primary = {item.foodItemName}
                                        primaryTypographyProps={{
                                            component: 'h1',
                                            style: {
                                                fontWeight: '500',
                                                fontSize: '1.2em'
                                            }
                                        }}/>
                                        <ListItemSecondaryAction>
                                            <IconButton onClick={ e => {
                                                removeFoodItem(index, item.id)
                                            }}>
                                                <DeleteTwoTone/>
                                            </IconButton>
                                        </ListItemSecondaryAction>
                            </ListItem>
                    </Paper>
                ))
            }
        </List>
    )
}