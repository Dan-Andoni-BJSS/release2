//
//  AuthenticationViewController.swift
//  Demo
//
//  Created by jenkins on 20/07/2016.
//  Copyright © 2016 GSMA. All rights reserved.
//

import UIKit
import MobileConnectSDK

class AuthenticationViewController: AuthorizationViewController {

    override func actionWithoutPhoneWithManager(manager: MobileConnectManager) {
        manager.getTokenInPresenterController(self, withScopes: selectedProductTypes, withCompletionHandler: launchTokenViewerWithTokenResponseModel)
    }
    
    override func actionWithPhoneAndWithManager(manager: MobileConnectManager) {
        manager.getTokenForPhoneNumber(phoneNumberTextField.text ?? "", inPresenterController: self, withScopes: selectedProductTypes, withCompletionHandler: launchTokenViewerWithTokenResponseModel)
    }
}
