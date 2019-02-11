// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
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
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
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
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AmpiOS",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC6AmpiOS24AlertTableViewController")
@interface AlertTableViewController : UIAlertController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6AmpiOS7CoreAmp")
@interface CoreAmp : NSObject
@property (nonatomic, copy) NSString * _Nonnull key;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class Config;

SWIFT_CLASS("_TtC6AmpiOS3Amp")
@interface Amp : CoreAmp
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull ampTapBuiltinEvent;)
+ (NSString * _Nonnull)ampTapBuiltinEvent SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull ampSessionBuiltinEvent;)
+ (NSString * _Nonnull)ampSessionBuiltinEvent SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull ampConnectionLatency1BuiltinEvent;)
+ (NSString * _Nonnull)ampConnectionLatency1BuiltinEvent SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull ampConnectionLatency2BuiltinEvent;)
+ (NSString * _Nonnull)ampConnectionLatency2BuiltinEvent SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithKey:(NSString * _Nonnull)key userId:(NSString * _Nullable)userId config:(Config * _Nullable)config;
- (nullable instancetype)initWithKey:(NSString * _Nonnull)key resume:(NSString * _Nonnull)serializedSession config:(Config * _Nullable)config;
@end



@class NSNumber;

@interface Amp (SWIFT_EXTENSION(AmpiOS))
/// Observe an event. Sends the information about the occurred event to the server.
/// \param name Name of the event.
///
/// \param properties A dictionary of properties of this event.
///
- (void)observeWithName:(NSString * _Nonnull)name properties:(NSDictionary<NSString *, id> * _Nonnull)properties;
/// Observe an event. Sends the information about the occurred event to the server.
/// \param name Name of the event.
///
- (void)observeWithName:(NSString * _Nonnull)name;
/// Find the best possible candidate from the provided dictionary.
/// \param name Name of the decision.
///
/// \param candidates A dictionary of candidates. Might have multiple keys and values.
///
/// \param ttl Optional. Request time to live.
///
///
/// returns:
/// A locally computed response based on current policy.
- (NSDictionary<NSString *, id> * _Nonnull)decideWithName:(NSString * _Nonnull)name candidates:(NSDictionary<NSString *, NSArray *> * _Nonnull)candidates ttl:(NSNumber * _Nullable)ttl SWIFT_WARN_UNUSED_RESULT;
/// Force creation of a new session.
/// \param userId Id of the current user.
///
- (void)startNewSessionWithUserId:(NSString * _Nullable)userId;
@end





enum LogLevel : NSInteger;

/// Configuration to be used with Amp, Session or a single request.
SWIFT_CLASS("_TtC6AmpiOS6Config")
@interface Config : NSObject
/// Creates a configuration that is initialized to use with Amp.
/// \param builtinEvents Optional. Events that are created upon initialization. Pass empty array to disable all default events.
///
/// \param logLevel Optional. Log level to use for internal logging.
///
/// \param sessionTTL Optional. Session time to live.
///
///
/// returns:
/// A configuration instance for Amp.
+ (Config * _Nonnull)ampConfigWithBuiltinEvents:(NSArray<NSString *> * _Nullable)builtinEvents logLevel:(enum LogLevel)logLevel sessionTTL:(NSNumber * _Nullable)sessionTTL sessionLifetime:(NSNumber * _Nullable)sessionLifetime SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6AmpiOS13ConfigBuilder")
@interface ConfigBuilder : NSObject
- (ConfigBuilder * _Nonnull)setWithDomain:(NSString * _Nonnull)domain SWIFT_WARN_UNUSED_RESULT;
- (ConfigBuilder * _Nonnull)setWithUserId:(NSString * _Nonnull)userId SWIFT_WARN_UNUSED_RESULT;
- (ConfigBuilder * _Nonnull)setWithBuiltinEvents:(NSArray<NSString *> * _Nonnull)builtinEvents SWIFT_WARN_UNUSED_RESULT;
- (ConfigBuilder * _Nonnull)setWithLogLevel:(enum LogLevel)logLevel SWIFT_WARN_UNUSED_RESULT;
- (ConfigBuilder * _Nonnull)setWithSessionTTL:(int64_t)sessionTTL SWIFT_WARN_UNUSED_RESULT;
- (ConfigBuilder * _Nonnull)setWithLifetime:(int64_t)lifetime SWIFT_WARN_UNUSED_RESULT;
- (ConfigBuilder * _Nonnull)setWithPreviewMode:(BOOL)previewMode SWIFT_WARN_UNUSED_RESULT;
- (Config * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end







SWIFT_PROTOCOL("_TtP6AmpiOS16SnapshotDelegate_")
@protocol SnapshotDelegate
- (NSDictionary<NSString *, id> * _Nonnull)createSnapshot SWIFT_WARN_UNUSED_RESULT;
@end


@interface CoreAmp (SWIFT_EXTENSION(AmpiOS)) <SnapshotDelegate>
- (NSDictionary<NSString *, id> * _Nonnull)createSnapshot SWIFT_WARN_UNUSED_RESULT;
@end


@interface CoreAmp (SWIFT_EXTENSION(AmpiOS))
/// Force creation of a new session.
/// \param userId Id of the current user.
///
- (void)startNewSessionWithUserId:(NSString * _Nullable)userId;
/// A method that will trigger the provided completion listener when configuration is synced from the server.
/// Use this when you need to ensure that decisions made through <code>decide</code>
/// or similar methods are made based on the rules provided by the server.
/// If the rules are already available, the callback will be called immediately from this method.
/// If the rules are not ready, it will wait for the sync to complete and callback will be executed from the
/// main thread.
/// \param timeout Max timeout to wait for the config from server in milliseconds. If the call exceeds the timeout, callback will be called with <code>error</code>.
///
/// \param callback A callback to be executed when the configuration is available.
///
- (void)loadRulesWithTimeout:(NSInteger)timeout callback:(void (^ _Nonnull)(NSError * _Nullable))callback;
@end





@class UIEvent;

SWIFT_CLASS("_TtC6AmpiOS20FloatingButtonWindow")
@interface FloatingButtonWindow : UIWindow
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end



typedef SWIFT_ENUM(NSInteger, LogLevel, closed) {
  LogLevelDebug = 0,
  LogLevelInfo = 1,
  LogLevelWarn = 2,
  LogLevelError = 3,
};




SWIFT_CLASS("_TtC6AmpiOS14NetworkManager")
@interface NetworkManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC6AmpiOS7Preview")
@interface Preview : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;

@interface Preview (SWIFT_EXTENSION(AmpiOS)) <UITableViewDelegate>
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end



@class UITableViewCell;

@interface Preview (SWIFT_EXTENSION(AmpiOS)) <UITableViewDataSource>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)tableView:(UITableView * _Nonnull)tableView titleForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP6AmpiOS5SIAmp_")
@protocol SIAmp
- (void)startNewSessionWithUserId:(NSString * _Nullable)userId;
@end


SWIFT_CLASS("_TtC6AmpiOS7Session")
@interface Session : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface Session (SWIFT_EXTENSION(AmpiOS)) <SnapshotDelegate>
- (NSDictionary<NSString *, id> * _Nonnull)createSnapshot SWIFT_WARN_UNUSED_RESULT;
@end














@class UITouch;

@interface UIButton (SWIFT_EXTENSION(AmpiOS))
- (void)endTrackingWithTouch:(UITouch * _Nullable)touch withEvent:(UIEvent * _Nullable)event;
@end





#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
