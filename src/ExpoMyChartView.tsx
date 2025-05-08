import { requireNativeView } from 'expo';
import * as React from 'react';

import { ExpoMyChartViewProps } from './ExpoMyChart.types';

const NativeView: React.ComponentType<ExpoMyChartViewProps> =
  requireNativeView('ExpoMyChart');

export default function ExpoMyChartView(props: ExpoMyChartViewProps) {
  return <NativeView {...props} />;
}
