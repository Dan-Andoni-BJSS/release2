//
//  ViewController.swift
//  Demo
//
//  Created by jenkins on 20/07/2016.
//  Copyright © 2016 GSMA. All rights reserved.
//

import UIKit
import MobileConnectSDK

private let kSegueToTokenResponseViewer : String = "toTokenInfo"

class ViewController: UIViewController {

    @IBOutlet weak var segmentedControl: UISegmentedControl!
    @IBOutlet weak var phoneNumberTextField: UITextField!
    
    var currentTokenResponse : TokenResponseModel?
    var currentError : NSError?
    
    
    @IBAction func segmentChanged(sender: AnyObject) {
        phoneNumberTextField.hidden = segmentedControl.selectedSegmentIndex == 0
    }
    
    
    @IBAction func getTokenAction(sender: AnyObject) {
        
        let manager : MobileConnectManager = MobileConnectManager()
        
        if segmentedControl.selectedSegmentIndex == 0
        {
            actionWithoutPhoneWithManager(manager)
        }
        else
        {
            actionWithPhoneAndWithManager(manager)
        }
        
//        if let selectedIndexPaths = tableView.indexPathsForSelectedRows
//        {
//            let scopes : [OpenIdProductType] = selectedIndexPaths.map({$0.row}).map({self.values[$0]})
//            
//            if segmentedControl.selectedSegmentIndex == 0
//            {
//                manager.getTokenInPresenterController(self, withCompletionHandler: { (tokenResponseModel, error) in
//                    self.tokenLabel.text = error?.localizedDescription ?? tokenResponseModel?.tokenData?.id_token
//                })
//                
////                manager.getAuthorizationTokenInPresenterController(self, withContext: "blabla", scopes: scopes, bindingMessage: "got banana", completionHandler: { (tokenResponseModel, error) in
////                
////                    self.tokenLabel.text = error?.localizedDescription ?? tokenResponseModel?.tokenData?.id_token
////                
////                })
//            }
//            else
//            {
//                manager.getTokenForPhoneNumber(phoneNumberTextField.text ?? "", inPresenterController: self, withCompletionHandler: { (tokenResponseModel, error) in
//                    self.tokenLabel.text = error?.localizedDescription ?? tokenResponseModel?.tokenData?.id_token
//                })
//                
////                manager.getAuthorizationTokenForPhoneNumber(phoneNumberTextField.text ?? "", inPresenterController: self, withScopes: scopes, context: "blabla", bindingMessage: "asdas", completionHandler: { (tokenResponseModel, error) in
////                    
////                    self.tokenLabel.text = error?.localizedDescription ?? tokenResponseModel?.tokenData?.id_token
////
////                })
//            }
//        }
    }
    
    func actionWithoutPhoneWithManager(manager : MobileConnectManager)
    {
        
    }
    
    func actionWithPhoneAndWithManager(manager : MobileConnectManager)
    {
        
    }
    
    func launchTokenViewerWithTokenResponseModel(tokenResponseModel : TokenResponseModel?, error : NSError?)
    {
        currentTokenResponse = tokenResponseModel
        currentError = error
        
        performSegueWithIdentifier(kSegueToTokenResponseViewer, sender: nil)
    }
    
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
        
        if let controller = segue.destinationViewController as? TokenInfoViewController
        {
            controller.error = currentError
            controller.tokenResponse = currentTokenResponse
        }
    }
}

