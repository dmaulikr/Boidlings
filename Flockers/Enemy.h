//
//  Enemy.h
//  Flockers
//
//  Created by Rob Blackwood on 9/26/13.
//  Copyright (c) 2013 Tinybop. All rights reserved.
//

#import "SpaceManagerCocos2d.h"
#import "Game.h"

@interface Enemy : cpCCSprite<GravitationalBodiesListing>
{
    CCNode *_propeller;
}

@property (readwrite, assign, nonatomic) CCNode *targetNode;
@property (strong) NSArray *gravitationalBodies;

+(id) enemyWithSpaceManager:(SpaceManager*)spaceManager;
-(id) initWithSpaceManager:(SpaceManager*)spaceManager;

@end
