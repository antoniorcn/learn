import { TextField, FormControl } from "@mui/material";


export default function Input ( props ) {

    const { name, value, variant, label, onChange, 
            error = null, ...others } = props;
    return (
        <FormControl>
            <TextField
                variant={variant || "outlined"}
                name={name}
                label={label}
                value={value}
                onChange={onChange}
                {...others}
                {...(error && { error: true, helerText: error })}
            />
        </FormControl>
    )
}