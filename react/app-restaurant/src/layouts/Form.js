import { makeStyles } from "@mui/styles";

const useStyles = makeStyles( theme => ({
    root : {
        '& .MuiFormControl-root': { 
            width: "90%",
            margin: theme.spacing(1)
        }
    }
}))

export default function Form(props) {
    const classes = useStyles();
    const { children, ...others } = props;

    return (
        <form className={classes.root} noValidate autoComplete="off" {...others}>
            {children}
        </form>
    )
}