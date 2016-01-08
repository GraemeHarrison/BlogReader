//
//  BlogPost.h
//  BlogReader3
//
//  Created by Graeme Harrison on 2016-01-04.
//  Copyright © 2016 Graeme Harrison. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

//{
//    NSString *title;
//    NSString *author;
//}
//- (void) setTitle:(NSString *)title;
//- (NSString *) title;
//these two @property's replace all the commented out in .h and .m
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *author;
@property (nonatomic, strong) NSString *thumbnail;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSURL *url;

// Designated Initializer
- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWithTitle:(NSString *)title;

- (NSURL *) thumbnailURL;
- (NSString *) formattedDate;

@end
