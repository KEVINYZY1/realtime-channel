//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-channel/src/main/java/com/goodow/realtime/channel/impl/SimpleBus.java
//
//  Created by retechretech.
//

#ifndef _ComGoodowRealtimeChannelImplSimpleBus_H_
#define _ComGoodowRealtimeChannelImplSimpleBus_H_

@class ComGoodowRealtimeChannelUtilIdGenerator;
@class GDCStateEnum;
@protocol ComGoodowRealtimeCoreHandler;
@protocol GDCMessage;
@protocol GDJsonElement;
@protocol GDJsonObject;

#import "JreEmulation.h"
#include "com/goodow/realtime/channel/Bus.h"

@interface ComGoodowRealtimeChannelImplSimpleBus : NSObject < GDCBus > {
 @public
  id<GDJsonObject> handlerMap_;
  id<GDJsonObject> replyHandlers_;
  GDCStateEnum *state_;
  ComGoodowRealtimeChannelUtilIdGenerator *idGenerator_;
}

- (id)init;
- (void)close;
- (GDCStateEnum *)getReadyState;
- (id<GDCBus>)publish:(NSString *)address message:(id<GDJsonElement>)msg;
- (id<GDCBus>)registerHandler:(NSString *)address handler:(id)handler;
- (id<GDCBus>)send:(NSString *)address message:(id<GDJsonElement>)msg replyHandler:(id)replyHandler;
- (id<GDCBus>)unregisterHandler:(NSString *)address handler:(id)handler;
- (void)checkNotNullWithNSString:(NSString *)paramName
                          withId:(id)param;
- (void)clearHandlers;
- (void)deliverMessageWithNSString:(NSString *)address
                    withGDCMessage:(id<GDCMessage>)message;
- (NSString *)makeUUID;
- (void)nativeHandleWithId:(id)message
                    withId:(id)handler;
- (void)sendOrPubWithBoolean:(BOOL)send
                withNSString:(NSString *)address
           withGDJsonElement:(id<GDJsonElement>)msg
                      withId:(id)replyHandler;
- (void)copyAllFieldsTo:(ComGoodowRealtimeChannelImplSimpleBus *)other;
@end

J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplSimpleBus, handlerMap_, id<GDJsonObject>)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplSimpleBus, replyHandlers_, id<GDJsonObject>)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplSimpleBus, state_, GDCStateEnum *)
J2OBJC_FIELD_SETTER(ComGoodowRealtimeChannelImplSimpleBus, idGenerator_, ComGoodowRealtimeChannelUtilIdGenerator *)

#endif // _ComGoodowRealtimeChannelImplSimpleBus_H_