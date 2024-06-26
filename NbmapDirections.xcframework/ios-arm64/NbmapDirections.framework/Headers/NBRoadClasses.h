#import <Foundation/Foundation.h>

/**
 Option set that contains attributes of a road segment.
 */
typedef NS_OPTIONS(NSUInteger, NBRoadClasses) {
    
    /**
     The road segment is [tolled](https://wiki.openstreetmap.org/wiki/Key:toll).
     */
    NBRoadClassesToll = (1 << 1),
    
    /**
     The road segment has access restrictions.
     
     A road segment may have this class if there are [general access restrictions](https://wiki.openstreetmap.org/wiki/Key:access) or a [high-occupancy vehicle](https://wiki.openstreetmap.org/wiki/Key:hov) restriction.
     */
    NBRoadClassesRestricted = (1 << 2),
    

    /**
     The road segment is a [freeway](https://wiki.openstreetmap.org/wiki/Tag:highway%3Dmotorway) or [freeway ramp](https://wiki.openstreetmap.org/wiki/Tag:highway%3Dmotorway_link).
     
     It may be desirable to suppress the name of the freeway when giving instructions and give instructions at fixed distances before an exit (such as 1 mile or 1 kilometer ahead).
     */
    NBRoadClassesHighway = (1 << 3),
    
    /**
     The user must travel this segment of the route by ferry.
     
     The user should verify that the ferry is in operation. For driving and cycling directions, the user should also verify that his or her vehicle is permitted onboard the ferry.
     
     In general, the transport type of the step containing the road segment is also `TransportType.ferry`.
     */
    NBRoadClassesFerry = (1 << 4),
    
    /**
     The user must travel this segment of the route through a [tunnel](https://wiki.openstreetmap.org/wiki/Key:tunnel).
     */
    NBRoadClassesTunnel = (1 << 5),
    
    /**
     The user must travel this segment of the route by UTurn.
     Only available in Valhalla api
     */
    NBRoadClassesUTurn = (1 << 6),
    
    /**
     The user must travel this segment of the route by sharp turn.
     Only available in Valhalla api
     */
    NBRoadClassesSharpTurn = (1 << 7),
    
    
    /**
     The user must travel this segment of the route by sharp turn.
     Only available in Valhalla api
     */
    NBRoadClassesServiceRoad = (1 << 8),

    /**
     Avoid nothing during the route.
     */
    NBRoadClassesNone = (1 << 9),
};
