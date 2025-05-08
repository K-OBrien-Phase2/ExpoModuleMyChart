import { NativeModule, requireNativeModule } from 'expo';

import { ExpoMyChartModuleEvents } from './ExpoMyChart.types';

declare class ExpoMyChartModule extends NativeModule<ExpoMyChartModuleEvents> {
  PI: number;
  hello(): string;
  setValueAsync(value: string): Promise<void>;
}

// This call loads the native module object from the JSI.
export default requireNativeModule<ExpoMyChartModule>('ExpoMyChart');
