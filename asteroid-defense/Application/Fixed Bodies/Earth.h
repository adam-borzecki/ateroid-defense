//
//  Earth.h
//  asteroid-defense
//
//  Created by Bryant Balatbat on 2014-04-12.
//  Copyright (c) 2014 Adam Borzecki. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@class Earth;

@protocol EarthDelegate <NSObject>

- (void)earth:(Earth *)earth
    didTryToLaunchMinerWithTouches:(NSSet *)touches;
- (void)earth:(Earth *)earth
    didTryToLaunchNukeWithTouches:(NSSet *)touches;

@end

@interface Earth : SKSpriteNode

@property (nonatomic,weak) id<EarthDelegate> delegate;

@end
