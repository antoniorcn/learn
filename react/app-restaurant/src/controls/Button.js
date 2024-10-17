import { Button as MuiButton } from "@mui/material";


export default function Button ( props ) {

    const { variant, onClick, 
            className, children, color, 
            ...others } = props;
    return (
        <MuiButton
            className={className}
            variant={variant || "contained"}
            color={color || "primary"}
            onClick={onClick}
            {...others}>
            {children}
        </MuiButton>
    )
}