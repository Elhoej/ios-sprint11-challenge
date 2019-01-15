//
//  Song.h
//  Lyric Finder
//
//  Created by Simon Elhoej Steinmejer on 10/5/18.
//  Copyright © 2018 Simon Elhoej Steinmejer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Song : NSObject

@property NSString *title;
@property NSString *artist;
@property NSString *lyrics;
@property int rating;

-(instancetype) initWithTitle:(NSString*)title artist:(NSString*)artist lyrics:(NSString*)lyrics rating:(int)rating;

@end

NS_ASSUME_NONNULL_END
