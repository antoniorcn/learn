import React, { useState } from 'react';
import { View, Text, StyleSheet, Modal } from 'react-native';
import { TextInput, Button, Card } from 'react-native-paper';

import { StatusBar } from 'expo-status-bar';

const ContactForm = () => {
  const [name, setName] = useState('');
  const [email, setEmail] = useState('');
  const [phone, setPhone] = useState('');

  const handleSave = () => {
    console.log('Contato salvo:', { name, email, phone });
  };

  const handleSearch = () => {
    console.log('Buscar contatos');
  };

  return (
    <View style={styles.container}>
      <StatusBar style="light" backgroundColor='red' translucent={true}/>
      <Card style={styles.card}>
        <Text style={styles.title}>Registrar Contato</Text>
        <TextInput
          label="Nome"
          value={name}
          onChangeText={setName}
          mode="outlined"
          style={styles.input}
        />
        <TextInput
          label="E-mail"
          value={email}
          onChangeText={setEmail}
          mode="outlined"
          keyboardType="email-address"
          style={styles.input}
        />
        <TextInput
          label="Telefone"
          value={phone}
          onChangeText={setPhone}
          mode="outlined"
          keyboardType="phone-pad"
          style={styles.input}
        />
        <Button mode="contained" onPress={handleSave} style={styles.saveButton}>
          Gravar
        </Button>
        <Button mode="outlined" onPress={handleSearch} style={styles.searchButton}>
          Pesquisar
        </Button>
      </Card>
      <Modal visible={false} transparent={false}>
        <View style={[{padding: 60, backgroundColor: "#55555BB"}]}>
          <Text style={styles.title}>Login</Text>
          <TextInput
            label="Usuario"
            value={name}
            onChangeText={setName}
            mode="outlined"
            style={styles.input}
          />
          <TextInput
            label="Senha"
            value={email}
            onChangeText={setEmail}
            mode="outlined"
            keyboardType="email-address"
            style={styles.input}
          />
          <Button mode="outlined" onPress={handleSearch} style={styles.searchButton}>
            Logar
          </Button>
        </View>
      </Modal>
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
  card: {
    width: '100%',
    padding: 20,
    borderRadius: 10,
    backgroundColor: '#fff',
    shadowColor: '#000',
    shadowOffset: { width: 0, height: 2 },
    shadowOpacity: 0.1,
    shadowRadius: 4,
    elevation: 5,
  },
  title: {
    fontSize: 24,
    fontWeight: 'bold',
    marginBottom: 50,
    textAlign: 'center',
    color: '#333',
  },
  input: {
    marginBottom: 35,
  },
  saveButton: {
    backgroundColor: '#6200ea',
    marginBottom: 30,
  },
  searchButton: {
    borderColor: '#6200ea',
  },
});

export default ContactForm;
