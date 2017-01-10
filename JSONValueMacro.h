//
//  JSONValueMacro.h
//  WFEDemo
//
//  Created by Eric Huang on 16/12/19.
//  Copyright © 2016年 Eric Huang. All rights reserved.
//

#ifndef JSONValueMacro_h
#define JSONValueMacro_h

#define JSONValue2Integer(VAL) (VAL == [NSNull null]) ? 0 : [VAL integerValue]
#define JSONValue2Float(VAL)   (VAL == [NSNull null]) ? 0.0f : [VAL floatValue]
#define JSONValue2String(VAL)  (VAL == [NSNull null]) ? @"" : VAL
#define JSONValue2Bool(VAL)    (VAL == [NSNull null]) ? NO : [VAL boolValue]

#define JSONValue2Array(VAL)   (VAL == [NSNull null]) ? @[] : ([VAL isKindOfClass:[NSArray class]] ? VAL : @[])
#define JSONValue2Dictionary(VAL) (VAL == [NSNull null]) ? @{} : ([VAL isKindOfClass:[NSDictionary class]] ? VAL : @{})
#define JSONValue2ArrayWithDefault(VAL, DEFAULT) (VAL == [NSNull null]) ? DEFAULT : ([VAL isKindOfClass:[NSArray class]] ? VAL : DEFAULT)
#define JSONValue2DictionaryWithDefault(VAL, DEFAULT) (VAL == [NSNull null]) ? DEFAULT : ([VAL isKindOfClass:[NSDictionary class]] ? VAL : DEFAULT)

#endif /* JSONValueMacro_h */
