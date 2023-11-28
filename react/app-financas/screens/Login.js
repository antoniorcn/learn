import { TextInput } from "react-native"

const Login = () => { 
    return (
        <View style={{flex: 1}}>
            <Text>Email</Text>
            <TextInput/>
            <Text>Senha</Text>
            <TextInput/>
            <Button title="Login"/>
            <Button title="Registrar"/>
        </View>
    )
}