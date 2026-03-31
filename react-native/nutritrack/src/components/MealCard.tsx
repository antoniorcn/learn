import React from 'react';
import { StyleSheet, Text, View } from 'react-native';

export type MealItem = {
  id: string;
  title: string;
  subtitleLines: string[];
  calories: number;
};

type Props = {
  item: MealItem;
};

export default function MealCard({ item }: Props) {
  return (
    <View style={styles.card}>
      <View style={styles.leftContent}>
        <Text style={styles.title}>{item.title}</Text>
        {item.subtitleLines.map((line, index) => (
          <Text key={index} style={styles.subtitle}>
            {line}
          </Text>
        ))}
      </View>

      <Text style={styles.calories}>{item.calories} kcal</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  card: {
    marginHorizontal: 16,
    marginTop: 12,
    backgroundColor: '#FFFFFF',
    borderRadius: 12,
    paddingHorizontal: 14,
    paddingVertical: 14,
    flexDirection: 'row',
    justifyContent: 'space-between',
    alignItems: 'flex-end',
    shadowColor: '#000',
    shadowOpacity: 0.06,
    shadowOffset: { width: 0, height: 2 },
    shadowRadius: 8,
    elevation: 2,
  },
  leftContent: {
    flex: 1,
    paddingRight: 12,
  },
  title: {
    fontSize: 16,
    fontWeight: '500',
    color: '#303030',
    marginBottom: 4,
  },
  subtitle: {
    fontSize: 14,
    color: '#616161',
    marginBottom: 2,
  },
  calories: {
    fontSize: 14,
    color: '#2F2F2F',
    fontWeight: '500',
  },
});