import { NativeModule, requireNativeModule } from 'expo';
import { ExpoMyChartModuleEvents } from './ExpoMyChart.types';

declare class ExpoMyChart extends NativeModule<ExpoMyChartModuleEvents> {
  MyChartInitializer(): Promise<boolean>;
  MyChartInitialized(): Promise<boolean>;
  MyChartLogin(username: string, password: string): Promise<boolean>;
}

export default requireNativeModule<ExpoMyChart>('ExpoMyChart');
