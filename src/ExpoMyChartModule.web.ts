import { registerWebModule, NativeModule } from 'expo';

import { ExpoMyChartModuleEvents } from './ExpoMyChart.types';

class ExpoMyChartModule extends NativeModule<ExpoMyChartModuleEvents> {
  PI = Math.PI;
  async setValueAsync(value: string): Promise<void> {
    this.emit('onChange', { value });
  }
  hello() {
    return 'Hello world! 👋';
  }
}

export default registerWebModule(ExpoMyChartModule, 'ExpoMyChartModule');
