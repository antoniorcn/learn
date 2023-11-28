import { createContext } from 'react';

const contextoPrincipalInicial = {
    profile: { 
        email: "",
        profile: "",
        token: ""
    }
}

const ContextoPrincipal = createContext(contextoPrincipalInicial);

export { ContextoPrincipal, contextoPrincipalInicial }