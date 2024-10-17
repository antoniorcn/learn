import { useState } from 'react';

export const useOrderForm = ( defaultValue ) => { 

    const [values, setValues] = useState(defaultValue());
    const [errors, setErrors] = useState({});
    const [customerList, setCustomerList] = useState([]);

    
    const handleInputChange = ( e ) => {
        const {name, value} = e.target;
        setValues( { ...values, [name]: value } )   
    }

    const resetFormControl = () => {
        setValues(defaultValue());
        setErrors({});
    }

    return {
        values, setValues, errors, setErrors,
        handleInputChange, resetFormControl,
        customerList, setCustomerList
    }
}