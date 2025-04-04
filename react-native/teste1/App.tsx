import { StatusBar } from 'expo-status-bar';
import React, { ReactElement } from 'react';
import { StyleSheet, Text, View } from 'react-native';


interface AppProps { 
  nome? : string,
  children : ReactElement
}

type NunmeroTexto = string | number;
let a : NunmeroTexto;

const Principal : React.FC<AppProps> = ( { children } : AppProps ) => { 
  return ( 
    <View>
      <Text>Teste</Text>
      <Text>{children}</Text>
    </View>
  )
}

export default function App() : React.JSX.Element{
  return (
    <View style={styles.container}>
      <Principal>
        <Text>Open up App.js to start working on your app!</Text>
      </Principal>
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
