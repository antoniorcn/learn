import React from 'react';
import { StyleSheet, Text, View } from 'react-native';

type Props = {
  label: string;
  current: number;
  total: number;
  progress: number;
};

export default function MacroProgressItem({
  label,
  current,
  total,
  progress,
}: Props) {
  return (
    <View>
      <View style={styles.row}>
        <Text style={styles.label}>{label}</Text>
        <Text style={styles.value}>
          {current}g / {total}g
        </Text>
      </View>

      <View style={styles.track}>
        <View style={[styles.fill, { width: `${Math.max(0, Math.min(progress, 1)) * 100}%` }]} />
      </View>
    </View>
  );
}

const styles = StyleSheet.create({
  row: {
    flexDirection: 'row',
    justifyContent: 'space-between',
    marginBottom: 6,
  },
  label: {
    fontSize: 16,
    color: '#2E2E2E',
    fontWeight: '500',
  },
  value: {
    fontSize: 14,
    color: '#4C4C4C',
  },
  track: {
    height: 8,
    backgroundColor: '#DCEFDf',
    borderRadius: 999,
    overflow: 'hidden',
  },
  fill: {
    height: '100%',
    backgroundColor: '#45C46B',
    borderRadius: 999,
  },
});