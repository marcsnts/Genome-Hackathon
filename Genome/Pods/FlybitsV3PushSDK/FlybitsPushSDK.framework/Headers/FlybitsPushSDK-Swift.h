// Generated by Apple Swift version 4.1 effective-3.3 (swiftlang-902.0.48 clang-902.0.37.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
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
# if __has_attribute(objc_subclassing_restricted)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import UIKit;
@import FlybitsSDK;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FlybitsPushSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// Controls subscriptions to APNS topics. Convenience functions exist in entities objects.
SWIFT_CLASS("_TtC14FlybitsPushSDK15APNSPreferences")
@interface APNSPreferences : NSObject
/// Whether or not a save is pending.
@property (nonatomic, readonly) BOOL requiresSave;
///
@property (nonatomic, readonly) BOOL isLoaded;
/// The object’s description.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// The object’s debugDescription.
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
/// Failable initializer that returns an <code>APNSPreferences</code> based on the supplied representation.
/// \param response The response received from the server.
///
/// \param representation The raw data received from the server.
///
- (nullable instancetype)initWithResponseData:(id _Nonnull)responseData OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
/// Whether or not a given topic has push disabled.
/// \param topic The topic to check against the list of disabled elements.
///
///
/// returns:
/// True if the topic has push disabled, False otherwise.
- (BOOL)isPushDisabledFor:(NSString * _Nonnull)topic SWIFT_WARN_UNUSED_RESULT;
/// Enables push for a given topic (removes it from the blacklist).
/// \param topic The topic for which to enable push notifications.
///
- (void)enablePushFor:(NSString * _Nonnull)topic;
/// Disables push for a given topic (adds it to the blacklist).
/// \param topic The topic for which to disable push notifications.
///
- (void)disablePushFor:(NSString * _Nonnull)topic;
/// Saves the current blacklist to the server. Success or failure is broadcast by the <code>PushManager</code>.
- (void)save;
/// Loads the current blacklist from the server. Success or failure is broadcast by the <code>PushManager</code>.
- (void)load;
/// Clears current blacklist and marks the list as requiring a save
- (void)clearAllKeywords;
- (NSDictionary<NSString *, id> * _Nullable)toDictionaryAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end

@class PushQuery;
@class PushMessage;
@class Pager;
@class NSError;
@class FlybitsRequest;
@class PushTemplate;

/// PushAPIManager is a wrapper for use with Objective-C based projects.
SWIFT_CLASS("_TtC14FlybitsPushSDK14PushAPIManager")
@interface PushAPIManager : NSObject
/// Retrieves a list of APNS notifications that have been sent to this device.
/// \param filteredBy A <code>PushQuery</code> specifying any filtering options desired.
///
/// \param completion A completion that returns a list of messages matching the provided query with pagination, an empty list and an error otherwise.
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object.
+ (FlybitsRequest * _Nonnull)getNotificationHistory:(PushQuery * _Nonnull)query withCompletion:(void (^ _Nonnull)(NSArray<PushMessage *> * _Nullable, Pager * _Nullable, NSError * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
/// Makes a query to retreive PushTemplates.
/// \param query PushQuery The Query object. Includes criteria to use for querying.
///
/// \param completion callback that returns Array of <code>PushTemplate</code>s with pagination, an error otherwise.
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object.
+ (FlybitsRequest * _Nonnull)pushTemplatesFilteredByQuery:(PushQuery * _Nonnull)query withCompletion:(void (^ _Nonnull)(NSArray<PushTemplate *> * _Nullable, Pager * _Nullable, NSError * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
/// Creates a <code>PushTemplate</code> on the server with the provided object.
/// \param pushTemplate The <code>PushTemplate</code> to register with the server.
///
/// \param completion callback that returns a <code>PushTemplate</code> on success, an error on failure.
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object.
+ (FlybitsRequest * _Nonnull)createPushTemplate:(PushTemplate * _Nonnull)pushTemplate withCompletion:(void (^ _Nonnull)(PushTemplate * _Nullable, NSError * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
/// Deletes an existing <code>PushTemplate</code> on the server.
/// \param with The unique identifier of a <code>PushTemplate</code> to delete from the server.
///
/// \param completion A callback containing an error if applicable.
///
///
/// returns:
/// A cancellable <code>FlybitsRequest</code> object.
+ (FlybitsRequest * _Nonnull)deletePushTemplateWithID:(NSString * _Nonnull)pushTemplateID withCompletion:(void (^ _Nonnull)(NSError * _Nullable))completion SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum PushMessageEntity : NSInteger;

/// A protocol to allow easy subscription and unsubscription from Flybits model objects.
SWIFT_PROTOCOL("_TtP14FlybitsPushSDK16PushConfigurable_")
@protocol PushConfigurable
/// Unique identifier for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// Push message entity type
@property (nonatomic, readonly) enum PushMessageEntity pushEntityType;
/// Route for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull route;
/// Subscribes the current object to push for the desired push <code>type</code>.
/// \param type The type of notification desired.
///
- (void)subscribeToPush;
/// Unsubscribes the current object to push for the desired push <code>type</code>.
/// \param type The type of notification desired.
///
- (void)unsubscribeFromPush;
@end

enum PushServiceLevel : NSInteger;

/// A set of configurable properties for the push manager.
/// Currently, the service level and APNS token are supported.
SWIFT_CLASS("_TtC14FlybitsPushSDK17PushConfiguration")
@interface PushConfiguration : NSObject
/// The level of service desired.
@property (nonatomic) enum PushServiceLevel serviceLevel;
/// Whether or not Flybits Data should be fetched automatically when a push is received.
@property (nonatomic) BOOL autoFetchData;
/// Whether or not Foreground push should attempt a reconnection (either for an expired JWT or any other reason).
@property (nonatomic) BOOL autoReconnect;
/// Additional key/value pairs to send during device registraiton
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable deviceRegistrationData;
/// Automatically saves preferences when subscribing to any of the models (Experience, Content, … etc)
@property (nonatomic) BOOL autoSavePushPreferences;
/// The APNS token received after registration
@property (nonatomic, copy) NSData * _Nullable apnsToken;
/// A constructor for the <code>PushConfiguration</code>, makes a request to register the token with the server if the user is logged in.
/// \param serviceLevel The desired level of service.
///
/// \param apnsToken The APNS token returned via application:didRegisterForRemoteNotificationsWithDeviceToken:.
///
- (nonnull instancetype)initWithServiceLevel:(enum PushServiceLevel)serviceLevel apnsToken:(NSData * _Nullable)apnsToken autoFetchData:(BOOL)autoFetchData autoReconnect:(BOOL)autoReconnect deviceRegistrationData:(NSDictionary<NSString *, id> * _Nullable)deviceRegistrationData OBJC_DESIGNATED_INITIALIZER;
/// A convenience function for creating a <code>PushConfiguration</code> with a pre-defined <code>PushServiceLevel</code> and APNS token.
/// \param serviceLevel The desired <code>PushServiceLevel</code>.
///
/// \param andAPNSToken The App’s APNS token.
///
///
/// returns:
/// A <code>PushConfiguration</code>.
+ (PushConfiguration * _Nonnull)configurationWithServiceLevel:(enum PushServiceLevel)serviceLevel andAPNSToken:(NSData * _Nullable)apnsToken SWIFT_WARN_UNUSED_RESULT;
/// Removes user specified device registration data from the SDK.
- (void)clearDeviceRegistrationData;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Manages handling Flybits related push messages.
/// When a <code>PushConfiguration</code> is provided, it will automatically connect, if required. The <code>PushManager</code> requires a user to be logged in before connecting.
SWIFT_CLASS("_TtC14FlybitsPushSDK11PushManager")
@interface PushManager : NSObject
/// Singleton access to the <code>PushManager</code>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) PushManager * _Nonnull shared;)
+ (PushManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// The configuration of the push manager, includes service level (i.e. foreground / background).
@property (nonatomic, strong) PushConfiguration * _Nonnull configuration;
/// The background push preferences
@property (nonatomic, readonly, strong) APNSPreferences * _Nonnull backgroundPreferences;
/// Used to pass APNS notifications to the <code>PushManager</code>.
/// \param notification An APNS notification.
///
/// \param fetchCompletionHandler The optional <code>fetchCompletionHandler</code> to call back if async data needs to be retrieved.
///
///
/// returns:
/// <code>true</code> if the content was decoded properly (i.e. a properly formatted SDK push notification), <code>false</code> if the content is not in the proper format (i.e. a push notification not intended for the SDK or a mangled push message).
- (BOOL)receivedNotification:(NSDictionary<NSString *, id> * _Nonnull)notification fetchCompletionHandler:(void (^ _Nullable)(UIBackgroundFetchResult))completionHandler SWIFT_WARN_UNUSED_RESULT;
/// Allows developers to subscribe to <code>Foreground</code> notifications for a free-form topic.
/// \param topic The topic to subscribe, i.e. Experience.Modified
///
- (void)subscribeToTopic:(NSString * _Nonnull)topic;
/// Allows developers to unsubscribe from <code>Foreground</code> notifications for a free-form topic.
/// \param topic The topic to unsubscribe, i.e. Experience.Modified
///
- (void)unsubscribeFromTopic:(NSString * _Nonnull)topic;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// A class containing a number of constants used with PushManager.
SWIFT_CLASS("_TtC14FlybitsPushSDK20PushManagerConstants")
@interface PushManagerConstants : NSObject
/// <code>com.flybits.push.connected</code> - The broadcast topic when an MQTT connection has been established.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSNotificationName _Nonnull PushConnected;)
+ (NSNotificationName _Nonnull)PushConnected SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.disconnected</code> - The broadcast topic when an MQTT connection has been lost / disconnected.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSNotificationName _Nonnull PushDisconnected;)
+ (NSNotificationName _Nonnull)PushDisconnected SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.fetchError</code> - A key to identify that an error was encountered while performing a fetch.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PushFetchError;)
+ (NSString * _Nonnull)PushFetchError SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.content</code> - The content of the push data (a <code>PushMessage</code>).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PushMessageContent;)
+ (NSString * _Nonnull)PushMessageContent SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.error.data</code> - The error returned when an error is encountered by the <code>PushManager</code>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PushErrorData;)
+ (NSString * _Nonnull)PushErrorData SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.error</code> - The broadcast topic when an error is encountered by the <code>PushManager</code> (used for <code>NSNotificationCenter</code> subscriptions).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSNotificationName _Nonnull PushErrorTopic;)
+ (NSNotificationName _Nonnull)PushErrorTopic SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.preferencesError</code> - The broadcast topic when an error is encountered with push preferences (save or load).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSNotificationName _Nonnull PushPreferencesErrorTopic;)
+ (NSNotificationName _Nonnull)PushPreferencesErrorTopic SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.preferencesUpdated</code> - The broadcast topic when a preference has been successfully updated on the server.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSNotificationName _Nonnull PushPreferencesUpdatedTopic;)
+ (NSNotificationName _Nonnull)PushPreferencesUpdatedTopic SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.error.type</code> - The type of error encountered which triggered an error broadcast (See: <code>PushManagerErrorConstants</code>)
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PushErrorType;)
+ (NSString * _Nonnull)PushErrorType SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.fetchedContent</code> - The SDK object fetched via an API call (typically a <code>Experience</code> or <code>Content</code>).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PushFetchedContent;)
+ (NSString * _Nonnull)PushFetchedContent SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.source</code> - The source network of the push data (APNS or MQTT).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PushSourceNetwork;)
+ (NSString * _Nonnull)PushSourceNetwork SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.sourceContent</code> - Any additional content passed by the <code>PushSource</code> (i.e. the aps content of an APNS message).
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull SourceContent;)
+ (NSString * _Nonnull)SourceContent SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.tokenError</code> - Encountered error while attempting to update token on the Push server.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSNotificationName _Nonnull PushTokenError;)
+ (NSNotificationName _Nonnull)PushTokenError SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.tokenUpdated</code> - Token was successfully updated with the Push server.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSNotificationName _Nonnull PushTokenUpdated;)
+ (NSNotificationName _Nonnull)PushTokenUpdated SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.underlyingErrors</code> - Any additional errors encountered during the request.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull UnderlyingErrors;)
+ (NSString * _Nonnull)UnderlyingErrors SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A list of error codes that can be issued by the <code>PushManager</code>.
SWIFT_CLASS("_TtC14FlybitsPushSDK25PushManagerErrorConstants")
@interface PushManagerErrorConstants : NSObject
/// <code>com.flybits.push.error.fetchEmpty</code> - An error indicating that no data was returned when a fetch was attempted.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull FetchEmpty;)
+ (NSString * _Nonnull)FetchEmpty SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.error.parse</code> - An error indicating that a <code>PushMessage</code> was not able to be constructed with the push payload.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull Parse;)
+ (NSString * _Nonnull)Parse SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.error.payloadEmpty</code> - An error indicating that the ‘aps’ portion of an APNS payload was missing.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PayloadEmpty;)
+ (NSString * _Nonnull)PayloadEmpty SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.error.payloadData</code> - An error indicating that the ‘data’ portion of an APNS payload was missing.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PayloadData;)
+ (NSString * _Nonnull)PayloadData SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.error.payloadFormat</code> - An error indicating that the ‘data’ portion of an APNS payload was not formatted as a base64 encoded string.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull PayloadFormat;)
+ (NSString * _Nonnull)PayloadFormat SWIFT_WARN_UNUSED_RESULT;
/// <code>com.flybits.push.error.tokenRegistration</code> - An error indicating that an issue was encountered while registering an APNS token with the Push server, check the value of the <code>com.flybits.push.error.data</code> element to get an NSError object
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull TokenRegistration;)
+ (NSString * _Nonnull)TokenRegistration SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum PushMessageCategory : NSInteger;
enum PushMessageAction : NSInteger;

/// PushMessage defines notification/push message related information such as alert, title, body, etc. for the notification
SWIFT_CLASS("_TtC14FlybitsPushSDK11PushMessage")
@interface PushMessage : NSObject
/// Unique identifier for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// Version number
@property (nonatomic, readonly) NSInteger version;
/// ‘PushMessageCategory’
@property (nonatomic, readonly) enum PushMessageCategory category;
/// ‘PushMessageEntity’
@property (nonatomic, readonly) enum PushMessageEntity entity;
/// ‘PushMessageAction’
@property (nonatomic, readonly) enum PushMessageAction action;
/// Raw action for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull rawAction;
/// Timestamp for the message
@property (nonatomic, readonly) NSTimeInterval timestamp;
/// Alert for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull alert;
/// Title for the message
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
/// Body for the message
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable body;
/// Retuns Notification name defining entity and action
@property (nonatomic, readonly) NSNotificationName _Nonnull notificationType;
/// Returns Notification name defining entity, action and raw action
@property (nonatomic, readonly) NSNotificationName _Nonnull completeNotificationType;
/// Initializer for parsing response data
- (nullable instancetype)initWithResponseData:(id _Nonnull)responseData OBJC_DESIGNATED_INITIALIZER;
/// Defines Notification type using ‘PushMessageEntity’ and ‘PushMessageAction’
+ (NSNotificationName _Nonnull)NotificationType:(enum PushMessageEntity)entity action:(enum PushMessageAction)action SWIFT_WARN_UNUSED_RESULT;
/// Defines complete Notification type using ‘PushMessageEntity’, ‘PushMessageAction’ and raw action
+ (NSNotificationName _Nonnull)CompleteNotificationType:(enum PushMessageEntity)entity action:(enum PushMessageAction)action rawAction:(NSString * _Nonnull)rawAction SWIFT_WARN_UNUSED_RESULT;
/// Description string
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// Debug description string
@property (nonatomic, readonly, copy) NSString * _Nonnull debugDescription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// Push message action types
typedef SWIFT_ENUM(NSInteger, PushMessageAction) {
/// custom
  PushMessageActionCustom = 0,
};

/// Push message category types
typedef SWIFT_ENUM(NSInteger, PushMessageCategory) {
/// core
  PushMessageCategoryCore = 0,
/// context
  PushMessageCategoryContext = 1,
/// location
  PushMessageCategoryLocation = 2,
/// content
  PushMessageCategoryContent = 3,
/// social
  PushMessageCategorySocial = 4,
/// custom
  PushMessageCategoryCustom = 5,
};

/// Push message entity types
typedef SWIFT_ENUM(NSInteger, PushMessageEntity) {
/// custom
  PushMessageEntityCustom = 0,
};

@class NSDate;

/// Used for filtering the results of the <code>PushRequest.NotificationHistory</code> API.
SWIFT_CLASS("_TtC14FlybitsPushSDK9PushQuery")
@interface PushQuery : Query
/// The start date of the query (optional, default nil)
@property (nonatomic, strong) NSDate * _Nullable start;
/// The end date of the query (optional, default nil)
@property (nonatomic, strong) NSDate * _Nullable end;
/// The order in which the results are desired. Defaults to descending.
@property (nonatomic) enum FlybitsUtilitiesSortOrder sortOrder;
/// Converts the query to key-value pairs for use in constructing a query string.
///
/// returns:
/// A dictionary containing the relevant key-value pairs to construct a query string.
- (NSDictionary<NSString *, id> * _Nullable)toDictionaryAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init:(Pager * _Nullable)pager OBJC_DESIGNATED_INITIALIZER;
@end

@class User;
@class NSCoder;

/// The <code>PushScope</code> class is responsible for managing Push and Notifications options when initializing
/// the Push SDK. This is a primary step to configure and define attributes that are required for
/// notifications processing.
SWIFT_CLASS("_TtC14FlybitsPushSDK9PushScope")
@interface PushScope : NSObject <FlybitsScope>
/// Checks whether the Push SDK has been properly initialized and authenticated
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL authenticated;)
+ (BOOL)authenticated SWIFT_WARN_UNUSED_RESULT;
/// Scope name for the Push SDK
@property (nonatomic, readonly, copy) NSString * _Nonnull scopeName;
/// Gets called on successfully connecting to the IDP
- (void)onConnectedWithUser:(User * _Nonnull)user;
/// Gets called on disconnecting from the IDP
- (void)onDisconnectedWithJwtToken:(NSString * _Nonnull)jwtToken;
/// Gets called when a user account gets destroyed
- (void)onAccountDestroyedWithJwtToken:(NSString * _Nonnull)jwtToken;
/// NSCoding decode initializer
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
/// NSCoding encode
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
/// Get notified when cached data is parsed by the FlybitsSDK
- (void)onCachedDataRetrievedWithData:(id _Nonnull)data;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// The desired service level
typedef SWIFT_ENUM(NSInteger, PushServiceLevel) {
/// No push notifications will be received.
  PushServiceLevelNone = 0,
/// Foreground push notifications will be received via <code>NSNotificationCenter</code>
  PushServiceLevelForeground = 1,
/// Background push notifications will be received via <code>NSNotificationCenter</code>
  PushServiceLevelBackground = 2,
/// Foreground and Background push notifications will be received via <code>NSNotificationCenter</code>
  PushServiceLevelBoth = 3,
};

/// Defines a source for the origin of the <code>PushMessage</code>.
typedef SWIFT_ENUM(NSInteger, PushSource) {
/// An Apple Push Notification Service message.
  PushSourceApns = 0,
/// A MQ Telemetry Transport
  PushSourceMqtt = 1,
};

@class PushTemplateOptions;
enum RuleResult : NSInteger;

/// The <code>PushTemplate</code> class is used to define all the necessary parameters associated to a
/// push notification that is sent to user’s based on changing contextual values and hence the
/// changing of rule evaluation states.
SWIFT_CLASS("_TtC14FlybitsPushSDK12PushTemplate")
@interface PushTemplate : NSObject
/// Unique identifier for the push template
@property (nonatomic, copy) NSString * _Nullable identifier;
/// Name of the push template
@property (nonatomic, copy) NSString * _Nonnull name;
/// Title of the push template
@property (nonatomic, copy) NSString * _Nonnull title;
/// Message of the push template
@property (nonatomic, copy) NSString * _Nonnull message;
/// Action of the push template
@property (nonatomic, copy) NSString * _Nullable action;
/// Options of the push template
@property (nonatomic, strong) PushTemplateOptions * _Nullable options;
/// Custom fields of the push template
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nullable customFields;
/// Name of the push template
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nullable users;
/// Rules of the push template
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSNumber *> * _Nullable rules;
/// Adds a user for the push template
- (PushTemplate * _Nonnull)addUserWithUserID:(NSString * _Nonnull)userID deviceID:(NSString * _Nonnull)deviceID SWIFT_WARN_UNUSED_RESULT;
/// Adds a rule for the push template
- (PushTemplate * _Nonnull)addRuleWithRuleID:(NSString * _Nonnull)ruleID result:(enum RuleResult)result SWIFT_WARN_UNUSED_RESULT;
/// Failable initializer that returns a <code>Rule</code> based on the supplied representation.
/// \param response The response received from the server.
///
/// \param representation The raw data received from the server.
///
- (nullable instancetype)initWithResponseData:(id _Nonnull)responseData;
/// Initializes Push template using name, title and message.
/// \param name The name of the rule. A valid name consists of a alphanumeric characters
/// without any spaces.
///
/// \param predicateQuery The <code>RulePredicateQuery</code> which is used to construct a rule
/// query.
///
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name title:(NSString * _Nonnull)title message:(NSString * _Nonnull)message OBJC_DESIGNATED_INITIALIZER;
/// Returns key-value pairs for the push template
- (NSDictionary<NSString *, id> * _Nullable)toDictionaryAndReturnError:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Push template options that allows to specify maximum number of time to send the message, delay between messages and cooldown time for the push messages
SWIFT_CLASS("_TtC14FlybitsPushSDK19PushTemplateOptions")
@interface PushTemplateOptions : NSObject
/// Maximum number of times to send the message
@property (nonatomic, readonly) NSInteger max;
/// Delay time between messages
@property (nonatomic, readonly) NSInteger delay;
/// Cooldown time for sending the messages
@property (nonatomic, readonly) NSInteger cooldown;
/// Default initializer that takes in max, delay and cooldown for the push template
- (nonnull instancetype)initWithMax:(NSInteger)max delay:(NSInteger)delay cooldown:(NSInteger)cooldown OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

/// Rule result for evaluations
typedef SWIFT_ENUM(NSInteger, RuleResult) {
/// Evaluates to true
  RuleResultTrue = 1,
/// Evaluates to false
  RuleResultFalse = 2,
/// Evaluates to true or false
  RuleResultTrueOrFalse = 3,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
