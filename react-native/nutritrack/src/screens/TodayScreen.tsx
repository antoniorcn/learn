import React from 'react';
import {
  FlatList,
  StyleSheet,
  Text,
  TouchableOpacity,
  View,
} from 'react-native';
import { SafeAreaView } from 'react-native-safe-area-context';
import { Ionicons } from '@expo/vector-icons';
import MealCard, { MealItem } from '../components/MealCard';

const meals: MealItem[] = [
  {
    id: '1',
    title: 'Oatmeal with berries',
    subtitleLines: ['2% Milk', 'Almonds'],
    calories: 380,
  },
  {
    id: '2',
    title: 'Grilled Chicken Salad',
    subtitleLines: ['Whole Wheat Bread', 'Olive Oil Dressing'],
    calories: 450,
  },
];

export default function TodayScreen() {
  const renderHeader = () => (
    <>
      <View style={styles.sectionHeader}>
        <Text style={styles.sectionTitle}>MEALS</Text>
      </View>
    </>
  );

  const renderFooter = () => (
    <View style={styles.footer}>
      <TouchableOpacity style={styles.logFoodButton}>
        <Text style={styles.logFoodButtonText}>LOG FOOD</Text>
      </TouchableOpacity>
    </View>
  );

  return (
    <SafeAreaView style={styles.safe}>
      <FlatList
        data={[...meals, { id: 'add-meal', title: '', subtitleLines: [], calories: 0 } as MealItem]}
        keyExtractor={(item) => item.id}
        renderItem={({ item }) =>
          item.id === 'add-meal' ? (
            <TouchableOpacity style={styles.addMealCard}>
              <View style={styles.addIconCircle}>
                <Ionicons name="add" size={28} color="#FFFFFF" />
              </View>
              <Text style={styles.addMealText}>Add Meal</Text>
            </TouchableOpacity>
          ) : (
            <MealCard item={item} />
          )
        }
        ListHeaderComponent={renderHeader}
        ListFooterComponent={renderFooter}
        contentContainerStyle={styles.contentContainer}
        showsVerticalScrollIndicator={false}
      />
    </SafeAreaView>
  );
}

const styles = StyleSheet.create({
  safe: {
    flex: 1,
    backgroundColor: '#F3F5F6',
  },
  contentContainer: {
    paddingBottom: 28,
  },
  topArea: {
    backgroundColor: '#F5FFF3',
    paddingHorizontal: 20,
    paddingTop: 18,
    paddingBottom: 22,
  },
  dateText: {
    fontSize: 13,
    color: '#4A4A4A',
    marginBottom: 18,
  },
  logoText: {
    fontSize: 28,
    fontWeight: '800',
    color: '#1E1E1E',
    textAlign: 'center',
    marginBottom: 22,
  },
  logoLeaf: {
    color: '#45C46B',
    fontSize: 20,
  },
  statsContainer: {
    flexDirection: 'row',
    justifyContent: 'space-between',
    gap: 18,
  },
  circleContainer: {
    flex: 1,
    alignItems: 'center',
  },
  goalText: {
    fontSize: 14,
    color: '#444',
    marginBottom: 8,
    transform: [{ rotate: '-18deg' }],
  },
  macrosContainer: {
    flex: 1,
    justifyContent: 'center',
    gap: 14,
    paddingTop: 18,
  },
  sectionHeader: {
    paddingHorizontal: 16,
    paddingTop: 18,
    paddingBottom: 10,
    backgroundColor: '#EEF1F2',
  },
  sectionTitle: {
    fontSize: 16,
    fontWeight: '700',
    color: '#2F2F2F',
  },
  addMealCard: {
    backgroundColor: '#FFFFFF',
    marginHorizontal: 16,
    marginTop: 12,
    borderRadius: 12,
    paddingVertical: 16,
    alignItems: 'center',
    justifyContent: 'center',
    shadowColor: '#000',
    shadowOpacity: 0.06,
    shadowOffset: { width: 0, height: 2 },
    shadowRadius: 8,
    elevation: 2,
  },
  addIconCircle: {
    width: 44,
    height: 44,
    borderRadius: 22,
    backgroundColor: '#45C46B',
    alignItems: 'center',
    justifyContent: 'center',
    marginBottom: 8,
  },
  addMealText: {
    fontSize: 20,
    color: '#5A5A5A',
    fontWeight: '500',
  },
  footer: {
    alignItems: 'center',
    paddingTop: 24,
  },
  logFoodButton: {
    backgroundColor: '#45C46B',
    paddingHorizontal: 34,
    paddingVertical: 14,
    borderRadius: 26,
    shadowColor: '#45C46B',
    shadowOpacity: 0.25,
    shadowOffset: { width: 0, height: 6 },
    shadowRadius: 10,
    elevation: 4,
  },
  logFoodButtonText: {
    color: '#FFFFFF',
    fontSize: 16,
    fontWeight: '800',
  },
});