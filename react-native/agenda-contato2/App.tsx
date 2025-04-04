import React from 'react';
import { View, Text, StyleSheet } from 'react-native';

import { StatusBar } from 'expo-status-bar';

const ContactForm = () => {
  return (
    <View style={styles.container}>
      <StatusBar style="light" backgroundColor='red' hidden={true} translucent={true}/>
      <Text style={styles.title}>StatusBar</Text>
      <Text style={styles.subtitle}>Invisivel</Text>
    </View>
  );
};

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#f4f4f4',
    padding: 20,
  },

  title: {
    fontSize: 32,
    fontWeight: 'bold',
    marginBottom: 50,
    textAlign: 'center',
    color: '#333',
  },

  subtitle: {
    fontSize: 24,
    fontWeight: 'bold',
    marginBottom: 50,
    textAlign: 'center',
    color: '#333',
  },
});

export default ContactForm;
