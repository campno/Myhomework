//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject

@property (nonatomic, assign) NSString* starttime;
@property (nonatomic, assign) NSString* endtime;
@property (nonatomic, strong) Address* Departurestation;
@property (nonatomic, strong) Address* Terminus;

-(instancetype) createOrder:(NSString* ) stime
    endtime:(NSString* ) etime
    Departurestation:(Address* ) ds
    Terminus:(Address* ) tms;

-(BOOL) Issameornot: (Orders *) order;

@end

@interface Passenger : Person
// @property 属性
// 是否年满 18 岁
@property (nonatomic, assign) bool Adultornot;
// 历史订单 （数组）
@property (nonatomic) NSMutableArray* Historicalorders;
//未出行订单 （数组）
@property (nonatomic) NSMutableArray* Notravelorders;
// Function 方法
-(void) initpassenger;
// 去订票
-(void) Booking:(Orders *) order;
// 去检票
-(void) Ticketcheck:(Orders *)order;

@end

NS_ASSUME_NONNULL_END
