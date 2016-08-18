// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import WebKit;
@import CoreGraphics;
@import Foundation;
#endif

#import <MobileConnectSDK/MobileConnectSDK.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class TokenResponseModel;
@class AttributeResponseModel;
@class NSError;

SWIFT_CLASS("_TtC16MobileConnectSDK16AttributeService")
@interface AttributeService : NSObject
- (nonnull instancetype)initWithTokenResponse:(TokenResponseModel * _Nonnull)tokenResponse;
- (void)getAttributeInformation:(void (^ _Nonnull)(AttributeResponseModel * _Nullable responseModel, NSError * _Nullable error))completionHandler;
@end


SWIFT_CLASS("_TtC16MobileConnectSDK24BaseServiceConfiguration")
@interface BaseServiceConfiguration : NSObject
@end

@protocol UIBarPositioning;
@class NSBundle;
@class NSCoder;


/// The mobile connect controller which is responsible for presenting and manipulating the web view.
SWIFT_CLASS("_TtC16MobileConnectSDK17BaseWebController")
@interface BaseWebController : UIViewController <UIToolbarDelegate, UIBarPositioningDelegate, WKNavigationDelegate>
- (UIBarPosition)positionForBar:(id <UIBarPositioning> _Nonnull)bar;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class DiscoveryResponse;


/// Provides access to all needed Discovery services. Allows getting operator data by providing a phone number, in which case the web view will not be presented. Allows getting operator data without any data from the client side in which case a web view will be presented. The webview will require client's operator data or phone number.
SWIFT_CLASS("_TtC16MobileConnectSDK9DSService")
@interface DSService : NSObject

/// Gets operator data by showing a webview which will request data from client
- (void)startOperatorDiscoveryInController:(UIViewController * _Nonnull)controller shouldProvideMetadata:(BOOL)shouldProvideMetadata completionHandler:(void (^ _Nonnull)(BaseWebController * _Nullable controller, DiscoveryResponse * _Nullable operatorsData, NSError * _Nullable error))completionHandler;
- (void)startOperatorDiscoveryWithCountryCode:(NSString * _Nonnull)countryCode networkCode:(NSString * _Nonnull)networkCode shouldProvideMetadata:(BOOL)shouldProvideMetadata completionHandler:(void (^ _Nonnull)(DiscoveryResponse * _Nullable operatorsData, NSError * _Nullable error))completionHandler;
- (void)startOperatorDiscoveryForPhoneNumber:(NSString * _Nonnull)phoneNumber shouldProvideMetadata:(BOOL)shouldProvideMetadata completionHandler:(void (^ _Nonnull)(DiscoveryResponse * _Nullable operatorsData, NSError * _Nullable error))completionHandler;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface DiscoveryResponse (SWIFT_EXTENSION(MobileConnectSDK))
@property (nonatomic, readonly, copy) NSString * _Nullable authorizationEndpoint;
@property (nonatomic, readonly, copy) NSString * _Nullable tokenEndpoint;
@property (nonatomic, readonly, copy) NSString * _Nullable userInfoEndpoint;
@property (nonatomic, readonly, copy) NSString * _Nullable premiumInfoEndpoint;
@property (nonatomic, readonly, copy) NSString * _Nullable tokenRevocation;
@property (nonatomic, readonly, copy) NSString * _Nullable applicationShortName;
@end

@class NSData;


/// Decodes the java web token
SWIFT_CLASS("_TtC16MobileConnectSDK10JWTDecoder")
@interface JWTDecoder : NSObject
- (nonnull instancetype)initWithTokenString:(NSString * _Nonnull)tokenString OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSDictionary * _Nullable decodedDictionary;
@property (nonatomic, readonly, strong) NSData * _Nullable decodedValue;
@end

enum MCLevelOfAssurance : NSInteger;
@class MetadataModel;


/// Configuration needed for instantiating the MCService instance
SWIFT_CLASS("_TtC16MobileConnectSDK33MobileConnectServiceConfiguration")
@interface MobileConnectServiceConfiguration : BaseServiceConfiguration

/// This constructor may change with addition of new features in future versions. It is recommended to use the init with discovery response if possible.
///
/// \param clientKey the client id received from the discovery OperatorData model
///
/// \param clientSecret the client secret received from the discovery OperatorData model
///
/// \param authorizationURLString the authorization url received from the discovery OperatorData model
///
/// \param tokenURLString the token url received from the discovery OperatorData model
///
/// \param subscriberId the subscriber id received from the Discovery service operatorData model
- (nonnull instancetype)initWithClientKey:(NSString * _Nonnull)clientKey clientSecret:(NSString * _Nonnull)clientSecret authorizationURLString:(NSString * _Nonnull)authorizationURLString tokenURLString:(NSString * _Nonnull)tokenURLString assuranceLevel:(enum MCLevelOfAssurance)assuranceLevel subscriberId:(NSString * _Nullable)subscriberId metadata:(MetadataModel * _Nullable)metadata authorizationScopes:(NSArray<NSString *> * _Nonnull)authorizationScopes OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDiscoveryResponse:(DiscoveryResponse * _Nonnull)discoveryResponse assuranceLevel:(enum MCLevelOfAssurance)assuranceLevel authorizationScopes:(NSArray<NSString *> * _Nonnull)authorizationScopes;
@end



/// Use this class to create MobileConnect service for getting Authorization products (phone, email, etc.)
SWIFT_CLASS("_TtC16MobileConnectSDK28MCAuthorizationConfiguration")
@interface MCAuthorizationConfiguration : MobileConnectServiceConfiguration
- (nonnull instancetype)initWithClientKey:(NSString * _Nonnull)clientKey clientSecret:(NSString * _Nonnull)clientSecret authorizationURLString:(NSString * _Nonnull)authorizationURLString tokenURLString:(NSString * _Nonnull)tokenURLString assuranceLevel:(enum MCLevelOfAssurance)assuranceLevel subscriberId:(NSString * _Nullable)subscriberId metadata:(MetadataModel * _Nullable)metadata authorizationScopes:(NSArray<NSString *> * _Nonnull)authorizationScopes clientName:(NSString * _Nonnull)clientName context:(NSString * _Nonnull)context bindingMessage:(NSString * _Nullable)bindingMessage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDiscoveryResponse:(DiscoveryResponse * _Nonnull)discoveryResponse assuranceLevel:(enum MCLevelOfAssurance)assuranceLevel context:(NSString * _Nonnull)context bindingMessage:(NSString * _Nullable)bindingMessage stringAuthorizationScopes:(NSArray<NSString *> * _Nonnull)stringAuthorizationScopes;
@end


/// The error enum used by the Mobile Connect classes
typedef SWIFT_ENUM(NSInteger, MCErrorCode) {

/// In case the request provided to Mobile Connect web controllers was nil
  MCErrorCodeNoRequestToLoad = 0,

/// In case user cancelled
  MCErrorCodeUserCancelled = 1,

/// In case it was not possible to create Mobile Connect's web controllers
  MCErrorCodeWebControllerNil = 2,

/// In case the response received does not correspond to the expected model
  MCErrorCodeSerializationError = 3,

/// In case the same service is launched twice or more times while an existing service is already running
  MCErrorCodeConcurrency = 4,

/// In case one or more of the required parameters provided were nil
  MCErrorCodeNilParameter = 5,
  MCErrorCodeUnknown = 6,

/// Discovery error In case the provided country code was nil
  MCErrorCodeNilCountryCode = 7,

/// Discovery error In case the provided network code was nil
  MCErrorCodeNilNetworkCode = 8,

/// Discovery error In case the provided phone number was nil
  MCErrorCodeNilPhoneNumber = 9,

/// Mobile Connect error In case the provided level of assurance was nil
  MCErrorCodeNilLevelOfAssurance = 10,

/// Mobile Connect error In case the client id which is expected from the Discovery response is nil
  MCErrorCodeNilClientId = 11,

/// Mobile Connect error In case the Authorization URL which is expected from the Discovery response is nil
  MCErrorCodeNilAuthorizationURL = 12,

/// Mobile Connect error In case the Token URL which is expected from the Discovery response is nil
  MCErrorCodeNilTokenURL = 13,

/// Mobile Connect error In case the Subscriber id which is expected from the Discovery response is nil
  MCErrorCodeNilSubcriberId = 14,

/// Mobile Connect error In case the Code which is expected from the Mobile connect authorization service is nil
  MCErrorCodeNilCode = 15,

/// In case an error from the server was received
  MCErrorCodeServerResponse = 16,

/// In case the discovery does not return a metadata URL
  MCErrorCodeNilMetadataURL = 17,

/// In case MobileConnectService tries to access authorization request with incorrect configuration
  MCErrorCodeRequiresAuthorizationConfiguration = 18,
};

typedef SWIFT_ENUM(NSInteger, MCLevelOfAssurance) {
  MCLevelOfAssuranceLevel2 = 2,
  MCLevelOfAssuranceLevel3 = 3,
};

@class TokenModel;


/// Provides access to all needed Mobile Connect services. Allows getting token data by providing a subscriber id, in which case only the loading web view will be presented. Allows getting token data by providing a subscriber id in which case a web view will be presented. The webview will require client's phone number.
SWIFT_CLASS("_TtC16MobileConnectSDK9MCService")
@interface MCService : NSObject
- (nonnull instancetype)initWithConfiguration:(MobileConnectServiceConfiguration * _Nonnull)configuration OBJC_DESIGNATED_INITIALIZER;

/// Gets the token by presenting the loading web view Mobile Connect controller. In case a subscriber id is not provided the user will first see a page for entering his phone number.
///
/// \param controller the controller in which the Mobile Connect should present the web view controller
///
/// \param completionHandler the closure which will be called upon the method completition in order to pass the resultant Mobile Connect data.
- (void)getTokenInController:(UIViewController * _Nonnull)controller completionHandler:(void (^ _Nonnull)(BaseWebController * _Nullable controller, TokenModel * _Nullable tokenModel, NSError * _Nullable error))completionHandler;

/// Gets an authorization token by presenting the loading web view Mobile Connect controller. In case a subscriber id is not provided the user will first see a page for entering his phone number.
///
/// \param controller the controller in which the Mobile Connect should present the web view controller
///
/// \param completionHandler the closure which will be called upon the method completition in order to pass the resultant Mobile Connect data.
- (void)getAuthorizationTokenInController:(UIViewController * _Nonnull)controller completionHandler:(void (^ _Nonnull)(BaseWebController * _Nullable controller, TokenModel * _Nullable tokenModel, NSError * _Nullable error))completionHandler;
@end


@interface MetadataModel (SWIFT_EXTENSION(MobileConnectSDK))
@end



/// Can be used directly in Storyboards or XIB files and at touchUpInside events will start the token obtaining process in Mobile Connect. In order to receive the Mobile Connect response, make sure to implement MobileConnectManagerDelegate
SWIFT_CLASS("_TtC16MobileConnectSDK19MobileConnectButton")
@interface MobileConnectButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithType:(UIButtonType)buttonType;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol MobileConnectManagerDelegate;


/// Abstracts the Discovery and Mobile Connect services by offering 2 convenience methods for directly getting the token. The token will be delivered in the supplied callbacks or delegate methods if set.
SWIFT_CLASS("_TtC16MobileConnectSDK20MobileConnectManager")
@interface MobileConnectManager : NSObject

/// The delegate responsible for receiving MobileConnectManager events
@property (nonatomic, strong) id <MobileConnectManagerDelegate> _Nullable delegate;
- (nonnull instancetype)init;
- (nonnull instancetype)initWithDelegate:(id <MobileConnectManagerDelegate> _Nullable)delegate;

/// Will get the token without any info needed from the client. Will use both Discovery and Mobile Connect services underneath. First the Discovery web controller will be presented which will require client's phone number or operator information. Afterwards the Mobile Connect Service will present its web view controller. In case the client did not provide a phone number, Mobile Connect will first ask the client for a phone number and then present the waiting for sms confirmation screen. Will automatically try to retrieve and merge the Metadata. This methods allows passing string values for the scopes array.
///
/// \param presenterController The controller which will present the Mobile Connect web view controller
///
/// \param completionHandler The closure in which the Mobile Connect Token or error will be returned
///
/// \param scopes The scopes to be authorized
- (void)getTokenInPresenterController:(UIViewController * _Nonnull)presenterController withStringValueScopes:(NSArray<NSString *> * _Nonnull)scopes withCompletionHandler:(void (^ _Nullable)(TokenResponseModel * _Nullable tokenResponseModel, NSError * _Nullable error))completionHandler;

/// Will get the authorization token without any info needed from the client. Will use both Discovery and Mobile Connect services underneath. First the Discovery web controller will be presented which will require client's phone number or operator information. Afterwards the Mobile Connect Service will present its web view controller. In case the client did not provide a phone number, Mobile Connect will first ask the client for a phone number and then present the waiting for sms confirmation screen. Will automatically try to retrieve and merge the Metadata. This methods allows passing string values for the scopes array.
///
/// \param presenterController The controller which will present the Mobile Connect web view controller
///
/// \param context The context required for making authorization requests
///
/// \param scopes The scopes to be authorized
///
/// \param bindingMessage The check message to be displayed in the web view while waiting for client's confirmation
///
/// \param completionHandler The closure in which the Mobile Connect Token or error will be returned
- (void)getAuthorizationTokenInPresenterController:(UIViewController * _Nonnull)presenterController withContext:(NSString * _Nonnull)context withStringValueScopes:(NSArray<NSString *> * _Nonnull)scopes bindingMessage:(NSString * _Nullable)bindingMessage completionHandler:(void (^ _Nullable)(TokenResponseModel * _Nullable tokenResponseModel, NSError * _Nullable error))completionHandler;

/// Will get the token with client's phone number. By providing the number the only web view presented will be that of the sms confirmation. Will use both Discovery and Mobile Connect services underneath. Will automatically try to retrieve and merge the Metadata. This methods allows passing string values for the scopes array.
///
/// \param phoneNumber The client's phone number
///
/// \param presenterController The controller which will present the Mobile Connect web view controller
///
/// \param scopes The scopes to be authorized
///
/// \param completionHandler The closure in which the Mobile Connect Token or error will be returned
- (void)getTokenForPhoneNumber:(NSString * _Nonnull)phoneNumber inPresenterController:(UIViewController * _Nonnull)presenterController withStringValueScopes:(NSArray<NSString *> * _Nonnull)scopes withCompletionHandler:(void (^ _Nullable)(TokenResponseModel * _Nullable tokenResponseModel, NSError * _Nullable error))completionHandler;

/// Will get the token with client's phone number. By providing the number the only web view presented will be that of the sms confirmation. Will use both Discovery and Mobile Connect services underneath. Will automatically try to retrieve and merge the Metadata. This methods allows passing string values for the scopes array.
///
/// \param phoneNumber The client's phone number
///
/// \param presenterController The controller which will present the Mobile Connect web view controller
///
/// \param scopes The scopes to be authorized
///
/// \param context The context required for making authorization requests
///
/// \param bindingMessage The check message to be displayed in the web view while waiting for client's confirmation
///
/// \param completionHandler The closure in which the Mobile Connect Token or error will be returned
- (void)getAuthorizationTokenForPhoneNumber:(NSString * _Nonnull)phoneNumber inPresenterController:(UIViewController * _Nonnull)presenterController withStringValueScopes:(NSArray<NSString *> * _Nonnull)scopes context:(NSString * _Nonnull)context bindingMessage:(NSString * _Nullable)bindingMessage completionHandler:(void (^ _Nullable)(TokenResponseModel * _Nullable tokenResponseModel, NSError * _Nullable error))completionHandler;
@end



/// This protocol allows catching events which occur while using the MobileConnectButton or MobileConnectManager class
SWIFT_PROTOCOL("_TtP16MobileConnectSDK28MobileConnectManagerDelegate_")
@protocol MobileConnectManagerDelegate
@optional
- (void)mobileConnectWillStart;
- (void)mobileConnectWillPresentWebController;
- (void)mobileConnectWillDismissWebController;
- (void)mobileConnectDidGetTokenResponse:(TokenResponseModel * _Nonnull)tokenResponse;
- (void)mobileConnectFailedGettingTokenResponseWithError:(NSError * _Nonnull)error;
@end

@class NSURL;


/// Is used for supplying the Mobile Connect services with needed credentials/resources (such as clientKey, clientSecret, applicationEndpoint redirectURL and the delegate responsible for catching Mobile Connect responses)
SWIFT_CLASS("_TtC16MobileConnectSDK16MobileConnectSDK")
@interface MobileConnectSDK : NSObject

/// Mobile connect client key
+ (void)setClientKey:(NSString * _Nonnull)clientKey;

/// Mobile connect client secret
+ (void)setClientSecret:(NSString * _Nonnull)clientSecret;

/// Mobile connect redirect url set in Mobile Connect dashboard
+ (void)setRedirect:(NSURL * _Nonnull)redirectURL;

/// The url of you Mobile Connect application set in the Dashboard
+ (void)setApplicationEndpoint:(NSString * _Nonnull)applicationEndpoint;

/// The delegate which will catch all the publicly available MobileConnectManager events
+ (void)setDelegate:(id <MobileConnectManagerDelegate> _Nonnull)delegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@interface NSException (SWIFT_EXTENSION(MobileConnectSDK))
@end


@interface NSUUID (SWIFT_EXTENSION(MobileConnectSDK))
@end

typedef SWIFT_ENUM(NSInteger, ProductType) {
  ProductTypeAuthentication = 0,
  ProductTypeAuthorization = 1,
  ProductTypeIdentityPhoneNumber = 2,
  ProductTypeIdentitySignUp = 3,
  ProductTypeIdentitySignUpPlus = 4,
  ProductTypeIdentityNationalID = 5,
  ProductTypeUnknown = 6,
  ProductTypePhone = 7,
  ProductTypeAddress = 8,
  ProductTypeProfile = 9,
  ProductTypeEmail = 10,
};

#pragma clang diagnostic pop
