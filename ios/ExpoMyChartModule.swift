import ExpoModulesCore
import MyChartLibrary

public class ExpoMyChartModule: Module {
  // Each module class must implement the definition function. The definition consists of components
  // that describes the module's functionality and behavior.
  // See https://docs.expo.dev/modules/module-api for more details about available components.
  private var isInitializedValue: Bool = false
    
    // Initialize the module with app context

    
      public required init(appContext: AppContext) {
        super.init(appContext: appContext)
        
    }
  

  public func definition() -> ModuleDefinition {
    // Sets the name of the module that JavaScript code will use to refer to the module. Takes a string as an argument.
    // Can be inferred from module's class name, but it's recommended to set it explicitly for clarity.
    // The module will be accessible from `requireNativeModule('ExpoMyChart')` in JavaScript.
    Name("ExpoMyChart")

    // Sets constant properties on the module. Can take a dictionary or a closure that returns a dictionary.
    Constants([
      "PI": Double.pi
    ])

    // Defines event names that the module can send to JavaScript.
    Events("onChange")

    // Defines a JavaScript synchronous function that runs the native code on the JavaScript thread.
    Function("hello") {
      return "Hello world! 👋"
    }
    
    // Defines a JavaScript function that always returns a Promise and whose native code
    // is by default dispatched on the different thread than the JavaScript runtime runs on.
    AsyncFunction("setValueAsync") { (value: String) in
      // Send an event to JavaScript.
      self.sendEvent("onChange", [
        "value": value
      ])
    }

    AsyncFunction("initializeSDK") { [weak self] () -> Void in
      guard let self = self else { 
          print("Module instance was deallocated")
          return 
      }
      
      if self.isInitializedValue {
          print("MyChart SDK already initialized")
          return
      }
            
          // Get the shared application instance
          guard let app = UIApplication.perform(NSSelectorFromString("sharedApplication"))?.takeUnretainedValue() as? UIApplication else {
              print("Failed to get shared application instance")
              return
          }
          
          // Get launch options from the app delegate
          await MainActor.run {
          var launchOptions: [UIApplication.LaunchOptionsKey: Any]? = nil
            if let delegate = app.delegate {
                let selector = NSSelectorFromString("launchOptions")
                if delegate.responds(to: selector) {
                    launchOptions = delegate.perform(selector)?.takeUnretainedValue() as? [UIApplication.LaunchOptionsKey: Any]
                }
            }
          
          // Initialize SDK
            WPAPIAppDelegate.application(app, didFinishLaunchingWithOptions: launchOptions)
            // self!.isInitializedValue = true//Change self to optional and properly check
            print("MyChart SDK initialized successfully")  
          }
      }
    

        

    // Enables the module to be used as a native view. Definition components that are accepted as part of the
    // view definition: Prop, Events.
    View(ExpoMyChartView.self) {
      // Defines a setter for the `url` prop.
      Prop("url") { (view: ExpoMyChartView, url: URL) in
        // if view.webView.url != url {
        //   view.webView.load(URLRequest(url: url))
        // }
      }

      Events("onLoad")
    }
  }
}
