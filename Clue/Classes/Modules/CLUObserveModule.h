//
//  CLUObserveModule.h
//  Clue
//
//  Created by Ahmed Sulaiman on 6/4/16.
//  Copyright © 2016 Ahmed Sulaiman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CLURecordableModule.h"

@interface CLUObserveModule : NSObject <CLURecordableModule>

@property (nonatomic, readonly) BOOL isRecording;

- (BOOL)isBufferEmpty;
- (void)addData:(NSData *)bufferItem;
- (void)clearBuffer;

@end