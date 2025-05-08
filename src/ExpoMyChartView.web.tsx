import * as React from 'react';

import { ExpoMyChartViewProps } from './ExpoMyChart.types';

export default function ExpoMyChartView(props: ExpoMyChartViewProps) {
  return (
    <div>
      <iframe
        style={{ flex: 1 }}
        src={props.url}
        onLoad={() => props.onLoad({ nativeEvent: { url: props.url } })}
      />
    </div>
  );
}
