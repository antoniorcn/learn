export function firebaseDataToList( firebaseData, transformFunction ) { 
    const lista = []
    for (const chave in firebaseData ) { 
        const obj = firebaseData[chave];
        lista.push(transformFunction(chave, obj));
    }
    console.log("Lista: ", JSON.stringify(lista));
    return lista;
}