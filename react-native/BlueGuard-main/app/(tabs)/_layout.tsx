import { Tabs } from 'expo-router';
import React from 'react';
import { TabBarIcon } from '@/components/navigation/TabBarIcon';
import { Colors } from '@/constants/Colors';
import { useColorScheme } from '@/hooks/useColorScheme';

export default function LogTabsLayout() {
  const colorScheme = useColorScheme();

  return (
    <Tabs
      screenOptions={{
        headerShown: false,
        tabBarActiveTintColor: Colors[colorScheme ?? 'light'].tint,
      }}
    >
      <Tabs.Screen
        name="index"
        options={{
          title: 'Home',
          tabBarIcon: ({ color, focused }) => (
            <TabBarIcon 
              library="MaterialCommunityIcons"
              name={focused ? 'home-lock-open' : 'home-lock'} 
              color={color} 
              focused={focused} 

            />
          ),
        }}
      />
      <Tabs.Screen
        name="Login"
        options={{
          title: 'Login',
          tabBarIcon: ({ color, focused }) => (
            <TabBarIcon 
              library="MaterialCommunityIcons"
              name={focused ? 'account-circle' : 'account-circle-outline'} 
              color={color} 
              focused={focused} 
            />
          ),
        }}
      />
    </Tabs>
  );
}
