//
//  Song.m
//  Lyric Finder
//
//  Created by Simon Elhoej Steinmejer on 10/5/18.
//  Copyright © 2018 Simon Elhoej Steinmejer. All rights reserved.
//

#import "Song.h"

@implementation Song


-(instancetype)initWithTitle:(NSString *)title artist:(NSString *)artist lyrics:(NSString *)lyrics rating:(int)rating {
    
    self = [super init];
    if (self != nil) {
        _title = title;
        _artist = artist;
        _lyrics = lyrics;
        _rating = rating;
    }
    return self;
}




@end
