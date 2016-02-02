//
//  KYNCController.h
//  Pods
//
//  Created by Anton Bukov on 26.01.16.
//
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KYNCController : NSObject

- (void)addObserverForName:(nullable NSString *)name object:(nullable id)object queue:(NSOperationQueue *)queue usingBlock:(void (^)(NSNotification *note))block;

@end

NS_ASSUME_NONNULL_END