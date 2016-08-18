//
//  TokenInfoViewController.swift
//  Demo
//
//  Created by jenkins on 20/07/2016.
//  Copyright © 2016 GSMA. All rights reserved.
//

import UIKit
import MobileConnectSDK

class TokenInfoViewController: UIViewController, UITableViewDelegate, UITableViewDataSource, UIToolbarDelegate {

    var tokenResponse : TokenResponseModel?
    var error : NSError?
    
    var dataModel : [String : String]
    {
        var model : [String : String] = [:]
        
        if let error = error
        {
            model["message"] = error.localizedDescription
        }
        
        if let tokenResponse = tokenResponse
        {
            model["message"] = "Success"
            model["application short name"] = tokenResponse.discoveryResponse?.applicationShortName ?? ""
            model["access token"] = tokenResponse.tokenData?.access_token
            model["token id"] = tokenResponse.tokenData?.id_token
        }
        
        return model
    }
    
    //MARK: Toolbar delegate
    func positionForBar(bar: UIBarPositioning) -> UIBarPosition {
        return UIBarPosition.TopAttached
    }
    
    //MARK: Actions
    @IBAction func dismissAction(sender: AnyObject) {
        dismissViewControllerAnimated(true, completion: nil)
    }
    
    @IBAction func getIdentityAction(sender: AnyObject) {
        
        guard let tokenResponse = tokenResponse else
        {
            return
        }
        
        let attributeService : AttributeService = AttributeService(tokenResponse: tokenResponse)
        
        attributeService.getAttributeInformation { (responseModel, error) in
            
        }
    }
    
    //MARK: Table view delegate methods
    func numberOfSectionsInTableView(tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        
        let cell : UITableViewCell = tableView.dequeueReusableCellWithIdentifier("cell", forIndexPath: indexPath)
        
        let key : String = dataModel.keys.map({$0})[indexPath.row]
        
        cell.textLabel?.text = key
        cell.detailTextLabel?.text = dataModel[key]
        
        return cell
    }
    
    func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return dataModel.count
    }
    
    func tableView(tableView: UITableView, heightForFooterInSection section: Int) -> CGFloat {
        return 1
    }
}
