import { StyleSheet, Text, View } from "react-native";
import CurvedText from "../components/CurvedText";
import CurvedAndCircularProgress from "../components/CurvedAndCircular";
import MacroProgressItem from "../components/MacroProgressItem";

export default function HeaderScreen() {

    return (
    <>
      <View style={styles.topArea}>
        <Text style={styles.dateText}>SUN, FEB 1</Text>
        <Text style={styles.logoText}>
          NutriTrack
          <Text style={styles.logoLeaf}>◢</Text>
        </Text>

        <View style={styles.statsContainer}>
          <View style={styles.circleContainer}>
            {/* <Text style={styles.goalText}>75% of daily goal</Text> */}
            {/* <CurvedText texto="75% of daily goal" raio={{x: 40, y:40}} 
              pos={{x: 48, y: 80}} angles={{start: 180, end: 360}}/>
            <CircularProgress
              size={130}
              strokeWidth={10}
              progress={0.75}
              value="1500"
              subtitle="kcal left"
            /> */}
            <CurvedAndCircularProgress size={130}
              text="75% of daily goal"
              angles={{start: 180, end: 360}}
              strokeWidth={10}
              progress={0.75}
              value="1500"
              subtitle="kcal left"/>
          </View>

          <View style={styles.macrosContainer}>
            <MacroProgressItem label="Protein" current={80} total={120} progress={0.67} />
            <MacroProgressItem label="Carbs" current={200} total={250} progress={0.8} />
            <MacroProgressItem label="Fat" current={50} total={70} progress={0.71} />
          </View>
        </View>
      </View>
    </>
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