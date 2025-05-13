import { useEvent } from 'expo';
import ExpoMyChart, { ExpoMyChartView } from 'expo-mychart';
import { Button, SafeAreaView, ScrollView, Text, TextInput, TextInputBase, View } from 'react-native';
import { useState, useEffect } from 'react';

export default function App() {
  const onChangePayload = useEvent(ExpoMyChart, 'onChange');
  const [username, setUsername] = useState<string>('');
  const [password, setPassword] = useState<string>('');
  const [isLoggedIn, setIsLoggedIn] = useState<boolean>(false);
  const [isInitialized, setIsInitialized] = useState<boolean | undefined>(undefined);

  useEffect(() => {
    (async () => {
      const result = await ExpoMyChart.MyChartInitialized();
      setIsInitialized(result);
    })();
  }, []);

  return (
    <SafeAreaView style={styles.container}>
      <ScrollView style={styles.container}>
        <Text style={styles.header}>Module API Example</Text>
        <Group name="Constants">
          <Text>MyChart is initialized?: {isInitialized?.toString()}</Text>
        </Group>
        <Group name="MyChartInitializer">
          <Button
            title="MyChartInitializer"
            onPress={async () => {
              await ExpoMyChart.MyChartInitializer();
            }}
          />  
          <Text>MyChart is initialized?: {isInitialized?.toString()}</Text>

        </Group>
        <Group name="MyChart Login">
          <TextInput
            placeholder="Username"
            onChangeText={(username) => {
              setUsername(username)
            }}
          />
          <TextInput
            placeholder="Password"
            onChangeText={(password) => {
              setPassword(password)
            }}
          />
          <Button
            title="MyChartLogin"
            onPress={async () => {
              setIsLoggedIn(await ExpoMyChart.MyChartLogin(username, password));
            }}
          />
          <Text>LoggedIn: {isLoggedIn.toString()}</Text>
        </Group>
        <Group name="Events">
          <Text>{onChangePayload?.value}</Text>
        </Group>
        <Group name="Views">
          <ExpoMyChartView
            url="https://www.example.com"
            onLoad={({ nativeEvent: { url } }) => console.log(`Loaded: ${url}`)}
            style={styles.view}
          />
        </Group>
      </ScrollView>
    </SafeAreaView>
  );
}

function Group(props: { name: string; children: React.ReactNode }) {
  return (
    <View style={styles.group}>
      <Text style={styles.groupHeader}>{props.name}</Text>
      {props.children}
    </View>
  );
}

const styles = {
  header: {
    fontSize: 30,
    margin: 20,
  },
  groupHeader: {
    fontSize: 20,
    marginBottom: 20,
  },
  group: {
    margin: 20,
    backgroundColor: '#fff',
    borderRadius: 10,
    padding: 20,
  },
  container: {
    flex: 1,
    backgroundColor: '#eee',
  },
  view: {
    flex: 1,
    height: 200,
  },
};
