//
//  SWSchemeManager.h
//  iSpinWheel
//
//  Created by Zion on 6/4/13.
//  Copyright (c) 2013 Zion. All rights reserved.
//

#import <Foundation/Foundation.h>

#define MonoWheelMaxSegment (30)

#define BiSmallWheelMaxSegment (20)
#define BiBigWheelMaxSegment (25)

#define TriSmallWheelMaxSegment (8)
#define TriMediumWheelMaxSegment (15)
#define TriBigWheelMaxSegment (30)


typedef enum
{
    SchemeGroupType_MonoWheel,
    SchemeGroupType_BiWheel,
    SchemeGroupType_TriWheel,
    
}SchemeGroupType;

@interface SWSchemeManager : NSObject

- (id)initWithSchemeType:(SchemeGroupType)type;

+ (SWSchemeManager*)shareInstanceOfSchemeType:(SchemeGroupType)type;

- (NSString*)schemeNameInUsing;

- (BOOL)setSchemeNameInUsing:(NSString*)schemeName;

- (BOOL)schemeAdded:(NSString*)schemeName;

- (BOOL)schemeDeleted:(NSString*)schemeName;

- (BOOL)schemeRenameFrom:(NSString*)schemeName to:(NSString*)newName;

- (BOOL)wheelStringAdded:(NSString*)newStr forWheel:(NSInteger)wheelIndex ofScheme:(NSString*)schemeName;

- (BOOL)wheelStringRenameTo:(NSString*)newName atIndex:(NSInteger)strIndex forWheel:(NSInteger)wheelIndex ofScheme:(NSString*)schemeName;

- (BOOL)wheelStringDeletedAtIndex:(NSInteger)strIndex forWheel:(NSInteger)wheelIndex ofScheme:(NSString*)schemeName;

- (void)abandonChanging;

- (void)commitChanging;

- (void)restoreToDefault;

- (NSArray*)schemeNameList;

- (NSArray*)wheelArrayOfScheme:(NSString*)schemeName;

- (NSString*)stringAtIndex:(NSInteger)strIndex forWheel:(NSInteger)wheelIndex ofScheme:(NSString*)schemeName;

@end
