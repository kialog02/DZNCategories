//
//  NSDate+Converter.h
//
//  Created by Ignacio Romero Zurbuchen on 2/6/13.
//  Copyright (c) 2011 DZen Interaktiv.
//  Licence: MIT-Licence
//  http://opensource.org/licenses/MIT
//

#import <Foundation/Foundation.h>

static NSString * const kNSDateFormatDateLarge = @"EEE MMM dd HH:mm:ss Z yyyy";
static NSString * const kNSDateFormatDateFull = @"yyyy-MM-dd'T'HH:mm:ss";
static NSString * const kNSDateFormatDate = @"yyyy-MM-dd";
static NSString * const kNSDateFormatTime = @"HH:mm:ss";
static NSString * const kNSDateFormatShortTime = @"HH:mm";
static NSString * const kNSDateFormatShortDate = @"MMMM d";

/*
 * Useful methods for converting dates from/to string.
 */
@interface NSDate (Converter)

/*
 * Returns a date object from string and specified format.
 *
 * @params string The string date.
 * @params format The date format string.
 * @returns A new date from string and format.
 */
+ (NSDate *)dateFromString:(NSString *)string andFormat:(NSString *)format;

/*
 * Returns a string from a date object with a specified format and current user's locale.
 *
 * @params format The date format string.
 * @returns A string from date.
 */
- (NSString *)stringFromDateWithFormat:(NSString *)format;

/*
 * Returns a string from a date object with a specified format and locale.
 *
 * @params format The date format string.
 * @params locale The specified locale.
 * @returns A string from date.
 */
- (NSString *)stringFromDateWithFormat:(NSString *)format andLocale:(NSLocale *)locale;

@end
