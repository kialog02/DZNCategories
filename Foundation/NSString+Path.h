//
//  NSString+Path.h
//  ADedo
//
//  Created by Ignacio on 4/4/13.
//  Copyright (c) 2013 DZEN. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * @brief Simpler methods for getting local files path.
 */
@interface NSString (Path)

/**
 * Returns a path string for a file located in a specific bundle.
 *
 * @param bundle The bundle containing the file.
 * @param fileName The file name with extension file included (ie: me.jpg)
 * @returns The path string.
 */
+ (NSString *)getBundlePath:(NSBundle *)bundle forFile:(NSString *)fileName;

/**
 * Returns a path string for a file located in the application's main bundle.
 *
 * @param fileName The file name with extension file included (ie: me.jpg)
 * @returns The path string.
 */
+ (NSString *)getMainBundlePathForFile:(NSString *)fileName;

/**
 * Returns a path string for a file located in the application's Documents directory.
 *
 * @param fileName The file name with extension file included (ie: me.jpg)
 * @returns The path string.
 */
+ (NSString *)getDocumentsDirectoryPathForFile:(NSString *)fileName;

/**
 * Returns a path string for a file located in the application's Library directory.
 *
 * @param fileName The file name with extension file included (ie: me.jpg)
 * @returns The path string.
 */
+ (NSString *)getLibraryDirectoryPathForFile:(NSString *)fileName;

/**
 * Returns a path string for a file located in the application's Cache directory.
 *
 * @param fileName The file name with extension file included (ie: me.jpg)
 * @returns The path string.
 */
+ (NSString *)getCacheDirectoryPathForFile:(NSString *)fileName;

@end
