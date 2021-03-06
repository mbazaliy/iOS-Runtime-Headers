/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSUColor;

@interface TSDMutableGradient : TSDGradient <TSDGradientStopContainer> {
}

@property(retain) TSUColor * firstColor;
@property(retain) NSArray * gradientStops;
@property unsigned int gradientType;
@property BOOL isAdvancedGradient;
@property(retain) TSUColor * lastColor;
@property float opacity;

- (void)evenlyDistributeStops;
- (void)insertGradientStop:(id)arg1;
- (void)insertStopAtFraction:(float)arg1 withColor:(id)arg2;
- (void)insertStopAtFraction:(float)arg1;
- (void)moveStopAtIndex:(unsigned int)arg1 toFraction:(float)arg2;
- (void)removeStop:(id)arg1;
- (id)removeStopAtIndex:(unsigned int)arg1;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned int)arg1 toColor:(id)arg2;
- (void)setFirstColor:(id)arg1;
- (void)setFraction:(float)arg1 ofStopAtIndex:(unsigned long)arg2;
- (void)setGradientStops:(id)arg1;
- (void)setGradientType:(unsigned int)arg1;
- (void)setInflectionOfStopAtIndex:(unsigned int)arg1 toInflection:(float)arg2;
- (void)setLastColor:(id)arg1;
- (void)swapStopAtIndex:(unsigned int)arg1 withStopAtIndex:(unsigned int)arg2;

@end
