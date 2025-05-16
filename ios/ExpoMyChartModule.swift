import ExpoModulesCore
import MyChartLibrary

public class ExpoMyChartModule: Module {
  // Each module class must implement the definition function. The definition consists of components
  // that describes the module's functionality and behavior.
  // See https://docs.expo.dev/modules/module-api for more details about available components.
  private var isInitializedValue: Bool = false
 

  public func definition() -> ModuleDefinition {

    Name("ExpoMyChart")

    // AsyncFunction("MyChartInitializer") { () async -> Bool in
    //   return await MainActor.run{WPAPIAppDelegate.application( UIApplication.shared, didFinishLaunchingWithOptions: nil)}
    // }

    AsyncFunction("MyChartInitializer") { () async -> Bool in
      return await MainActor.run{ExpoMyChartAppDelegateSubscriber.application( UIApplication.shared, didFinishLaunchingWithOptions: nil)}
    }
    
    AsyncFunction("MyChartInitialized") { () async -> Bool in
      await MainActor.run { return ExpoMyChartAppDelegateSubscriber.isInitialized }
    }
    
    Events("onChange")
    
    AsyncFunction("MyChartLogin") { [weak self] (username: String, password: String) -> Bool in
       await MainActor.run {
        let delegate = ExpoMyChartAppDelegateSubscriber.delegate
        WPAPIAuthentication.login(withUsername: username, password: password, delegate: delegate)
          return delegate.isLoggedIn()
        }
        return false
    }
    View(ExpoMyChartView.self) {
      Prop("url") { (view: ExpoMyChartView, url: URL) in
        // if view.webView.url != url {
        //   view.webView.load(URLRequest(url: url))
        // }
      }

      Events("onLoad")
    }
  }

}