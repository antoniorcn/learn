import { StatusBar } from 'expo-status-bar';
import React from 'react';
import { StyleSheet, Text, View } from 'react-native';
import TopTabsNavigator from './navigation/TopTabsNavigator';
import { SafeAreaProvider } from 'react-native-safe-area-context';
import { NavigationContainer } from '@react-navigation/native';
import Teste from './components/Teste';

export default function App() {
  return (
    <SafeAreaProvider>
      <NavigationContainer>
        <TopTabsNavigator />
      </NavigationContainer>
    </SafeAreaProvider>
    // <Teste/>
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
