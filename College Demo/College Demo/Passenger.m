//
//  Passenger.m
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Passenger.h"


@implementation Orders

-(instancetype) createOrder:(NSString *)stime endtime:(NSString *)etime Departurestation:(Address *)ds Terminus:(Address *)tms{
    self.starttime=stime;
    self.endtime=etime;
    self.Departurestation=ds;
    self.Terminus=tms;
    
    return self;
}

-(BOOL)Issameornot:(Orders *)order{
    if(self.starttime==order.starttime&&self.endtime==order.endtime&&self.Departurestation==order.Departurestation&&self.Terminus==order.Terminus)
        return TRUE;
    else
        return FALSE;
}

@end

@implementation Passenger

-(void) initpassenger{
    _Historicalorders=[NSMutableArray array];
    _Notravelorders=[NSMutableArray array];
}

-(void) Booking:(Orders *)order{
    [_Notravelorders addObject:order];
}

-(void) Ticketcheck:(Orders *)order{
    NSInteger i;
    for(i=0;i<[_Notravelorders count];i++)
    {
        if([_Notravelorders[i] Issameornot:order])
            break;
    }
    [_Notravelorders removeObjectAtIndex:i];
    [_Historicalorders addObject:order];
}

@end
