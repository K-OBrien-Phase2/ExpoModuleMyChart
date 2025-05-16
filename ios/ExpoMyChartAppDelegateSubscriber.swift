import ExpoModulesCore
import MyChartLibrary
// import MyChartLoginStarter
import os


public class ExpoMyChartAppDelegateSubscriber: ExpoAppDelegateSubscriber {
    public static let delegate = ExpoMyChartLoginDelegate(presentingViewController: UIApplication.shared.windows.first?.rootViewController ?? FallbackViewController.shared)
    public static var isInitialized: Bool = false
    public static func application(
        _ application: UIApplication,
        didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil
    ) -> Bool {

      let log = OSLog(subsystem: "expo.modules.mychart.example", category: "general")
      os_log("[MyChart] 🚀 Launching MyChart", log: log, type: .info)
      if let path = Bundle.main.path(forResource: "SettingsForLibraryBuilds", ofType: "plist"),
         let dict = NSDictionary(contentsOfFile: path),
         let scheme = dict["launchScheme"] as? String {
          print("[MyChart] ✅ launchScheme in plist: \(scheme)")
      } else {
          print("[MyChart] ❌ Could not find or parse SettingsForLibraryBuilds.plist")
      }
        WPAPIAppDelegate.application(application, didFinishLaunchingWithOptions: launchOptions)
        ExpoMyChartAppDelegateSubscriber.isInitialized = true
        print("[MyChart] MyChart is initialized")

      return ExpoMyChartAppDelegateSubscriber.isInitialized
    }

    // Forward other delegate methods as needed (example: open url)
    // public func application(
    //     _ app: UIApplication,
    //     open url: URL,
    //     options: [UIApplication.OpenURLOptionsKey : Any] = [:]
    // ) -> Bool {
    //     WPAPIAppDelegate.application(app, open: url, options: options)
    //     return false
    // }

    // Add more methods for notifications, etc., if needed by MyChart
}
class FallbackViewController: UIViewController {
    static let shared = FallbackViewController()
}