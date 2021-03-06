/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSTExpressionNode.h>

@class NSArray, NSString, TSTFunctionEndNode;

// Not exported
@interface TSTFunctionNode : TSTExpressionNode
{
    int mFunctionIndex;
    TSTFunctionEndNode *mFunctionEndNode;
    NSString *mWhitespaceAfterFunctionName;
    NSString *mWhitespaceAfterLeftParen;
    NSArray *mWhitespaceAfterDelimiters;
    NSString *mInvalidFunctionName;
}

+ (id)newSumNodeWithContext:(id)arg1 children:(id)arg2;
+ (id)newDefaultFunctionNodeWithContext:(id)arg1 functionIndex:(int)arg2;
@property(retain, nonatomic) NSString *invalidFunctionName; // @synthesize invalidFunctionName=mInvalidFunctionName;
@property(retain, nonatomic) NSString *whitespaceAfterFunctionName; // @synthesize whitespaceAfterFunctionName=mWhitespaceAfterFunctionName;
@property(retain, nonatomic) NSArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=mWhitespaceAfterDelimiters;
@property(retain) NSString *whitespaceAfterLeftParen; // @synthesize whitespaceAfterLeftParen=mWhitespaceAfterLeftParen;
@property(readonly, nonatomic) int functionIndex; // @synthesize functionIndex=mFunctionIndex;
- (void)p_resetArgumentSpecForChildren;
- (id)p_functionSpec;
- (void)saveToArchive:(struct FunctionNodeArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct FunctionNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)addTSTCanvasReferencesToSet:(id)arg1 inRangeContext:(int)arg2 withColorHelper:(id)arg3 preferringNodesFromStorage:(id)arg4 allVisitedNodes:(id)arg5;
- (id)exportString;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(CDStruct_0441cfb5)arg2;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2 unwrapped:(_Bool)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
- (id)string;
- (int)tokenType;
- (_Bool)isMissingRequiredArgument;
- (_Bool)isEmptyFunctionNode;
- (void)resurrectModeTokens;
@property(retain, nonatomic) TSTFunctionEndNode *functionEndNode;
- (void)setChildren:(id)arg1;
@property(readonly, nonatomic) short maxArguments;
@property(readonly, nonatomic) short minArguments;
@property(readonly, nonatomic) unsigned long long numArguments;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;
- (id)initWithContext:(id)arg1 functionIndex:(int)arg2 children:(id)arg3 firstIndex:(unsigned long long)arg4 lastIndex:(unsigned long long)arg5;

@end

