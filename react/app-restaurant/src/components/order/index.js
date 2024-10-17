import { useOrderForm } from "hooks/useOrderForm";
import OrderForm from "components/order/OrderForm";
import OrderFoodItems from "components/order/OrderFoodItems";
import SearchFoodItem from "components/order/SearchFoodItem";
import { Grid } from "@mui/material";

const generateOrderNumber = () =>
    Math.floor( 100000 * Math.random() * 900000).toString()

const getFreshModelObject = () => ({
    orderMasterId: 0,
    orderNumber: generateOrderNumber(),
    customerId: 0,
    pMethod: 'none',
    gTotal : 0,
    deletedOrderItemIds: '',
    orderDetails : []
})

export default function Order() { 
    const { values, setValues,
        errors, setErrors, 
        handleInputChange, 
        resetFormControl,
        customerList, setCustomerList } = useOrderForm(getFreshModelObject)

    const addFoodItem = ( foodItem ) => { 
        let obj = { 
            orderMasterId: values.orderMasterId,
            orderDetailId: 0,
            foodItemId: foodItem.foodItemId,
            quantity: 1,
            foodItemPrice: foodItem.foodItemPrice,
            foodItemName: foodItem.foodItemName
        }
        console.log("AddFoodItem: ", JSON.stringify(obj));

        setValues({ 
            ...values, orderDetails : [...values.orderDetails, obj]
        })
    }

    const removeFoodItem = (index, id) => { 
        let obj = { ...values };
        obj.orderDetails = obj.orderDetails.filter(( _, idx ) => idx !== index );
        setValues( {...obj } )
    }
        
    // console.log("Values: ", values);
    return (
        <Grid container spacing={2}> 
            <Grid item xs={12}>
                <OrderForm { ...{handleInputChange, resetFormControl, values, errors, customerList, setCustomerList} }/>
            </Grid>
            <Grid item xs={6}>
                <SearchFoodItem {...{ addFoodItem }}/>
            </Grid>
            <Grid item xs={6}>
                <OrderFoodItems removeFoodItem={removeFoodItem} orderedFoodItems={values.orderDetails}/>
            </Grid>
        </Grid>
    )
}