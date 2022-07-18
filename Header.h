//
//  Header.h
//  student
//
//  Created by chriswang on 2022/7/18.
//

#ifndef Header_h
#define Header_h
#import<Foundation/Foundation.h>
@interface student:NSObject

@property(nonatomic, copy) NSString *name;
@property(nonatomic, copy) NSString *major;
@property(nonatomic, assign) NSUInteger age;

+(void) study:(float) time;

@end
#endif /* Header_h */
