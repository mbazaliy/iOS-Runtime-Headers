/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTExpressionNode;

@interface TSTFormulaTokenContext : NSObject {
    unsigned int mArgumentIndex;
    TSTExpressionNode *mExpressionNode;
    unsigned int mParenNestingLevel;
}

@property(readonly) unsigned int argumentIndex;
@property(readonly) TSTExpressionNode * expressionNode;
@property(readonly) unsigned int parenNestingLevel;

+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned int)arg2 argumentIndex:(unsigned int)arg3;
+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned int)arg2;

- (unsigned int)argumentIndex;
- (void)dealloc;
- (id)debugDescription;
- (id)expressionNode;
- (unsigned int)hash;
- (id)init;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned int)arg2 argumentIndex:(unsigned int)arg3;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)parenNestingLevel;

@end
