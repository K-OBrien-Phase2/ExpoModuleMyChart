import Foundation
import MyChartLibrary

public class ExpoMyChartLoginDelegate: NSObject, IWPAuthenticationDelegate {
    // Implement required delegate methods
    private var cachedViewController: UIViewController
    private var isLoggedInValue: Bool = false
    public init(presentingViewController: UIViewController) {
        self.cachedViewController = presentingViewController
        super.init()
    }
    
    public func loginSucceeded(withDeepLink deepLink: IWPDeepLink?) {
            // Handle success, update UI, send event to JS, etc.
            print("Authentication did succeed")
            isLoggedInValue = true
    }

    public func loginFailed(withError error: Error) {
        // DispatchQueue.main.async {
            // Handle failure, update UI, send event to JS, etc.
            print("Authentication did fail")
        // }
        isLoggedInValue = false

    }

    public func getPresentationViewController() -> UIViewController {
        return cachedViewController
    }
    public func isLoggedIn() -> Bool {
        return isLoggedInValue
    }
}

