//
//  NSKitMemoryHelper.h
//  NSKit
//
//  Created by Patrick Chamelo on 6/24/13.
//  Copyright (c) 2013 Patrick Chamelo. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


typedef NS_ENUM(NSUInteger, NSKitMemoryOption)
{
    NSKitMemoryOptionFree = 0,
    NSKitMemoryOptionInactive,
    NSKitMemoryOptionActive,
    NSKitMemoryOptionWired,
    NSKitMemoryOptionAll
};


/** Memory helper class */
@interface NSKitMemoryHelper : NSObject


/**
 * Return the bytes for a given memory option.
 *
 * @param option The memory option. (free, inactive, active, wired or all)
 *
 * @returns NSUInteger Number of bytes for a given option.
 *
 */
+ (NSUInteger)memoryForOption:(NSKitMemoryOption)option;


/**
 * Return a string representation for a given memory option.
 *
 * @param option The memory option. (free, inactive, active, wired or all)
 *
 * @returns NSString A string representation of the total bytes in MB.
 *
 */
+ (NSString *)stringMemoryForOption:(NSKitMemoryOption)option;


@end
