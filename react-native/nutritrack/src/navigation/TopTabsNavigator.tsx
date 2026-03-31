import React from 'react';
import { createMaterialTopTabNavigator } from '@react-navigation/material-top-tabs';
import TodayScreen from '../screens/TodayScreen';
import HistoryScreen from '../screens/HistoryScreen';
import FoodsScreen from '../screens/FoosScreen';
import SettingsScreen from '../screens/SettingsScreen';
import { View } from 'react-native';
import HeaderScreen from '../screens/HeaderScreen';
import { SafeAreaView } from 'react-native-safe-area-context';

export type RootTopTabParamList = {
  Today: undefined;
  History: undefined;
  Foods: undefined;
  Settings: undefined;
};

const Tab = createMaterialTopTabNavigator<RootTopTabParamList>();

export default function TopTabsNavigator() {
  return (
    <SafeAreaView style={{ flex: 1 }}>
      <HeaderScreen/> 
      <Tab.Navigator
        screenOptions={{
          tabBarActiveTintColor: '#45C46B',
          tabBarInactiveTintColor: '#8E8E8E',
          tabBarIndicatorStyle: {
            backgroundColor: '#45C46B',
            height: 3,
            borderRadius: 2,
          },
          tabBarLabelStyle: {
            fontSize: 14,
            fontWeight: '700',
            textTransform: 'uppercase',
          },
          tabBarStyle: {
            backgroundColor: '#FFFFFF',
            elevation: 0,
            shadowOpacity: 0,
            borderBottomWidth: 1,
            borderBottomColor: '#E9E9E9',
          },
          swipeEnabled: true,
        }}
      >
        <Tab.Screen
          name="Today"
          component={TodayScreen}
          options={{ title: 'Today' }}
        />
        <Tab.Screen
          name="History"
          component={HistoryScreen}
          options={{ title: 'History' }}
        />
        <Tab.Screen
          name="Foods"
          component={FoodsScreen}
          options={{ title: 'Foods' }}
        />
        <Tab.Screen
          name="Settings"
          component={SettingsScreen}
          options={{ title: 'Settings' }}
        />
      </Tab.Navigator>
    </SafeAreaView>
  );
}