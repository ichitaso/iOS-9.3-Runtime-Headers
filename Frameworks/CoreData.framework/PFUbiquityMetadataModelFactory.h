/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMetadataModelFactory : NSObject  {
}

+ (void)destroySharedModel;
+ (id)createSharedModel;
+ (id)newEntityForName:(id)arg1;
+ (id)newAttributeNamed:(id)arg1 attributeType:(unsigned int)arg2 isOptional:(BOOL)arg3 isTransient:(BOOL)arg4 withDefaultValue:(id)arg5 andMinValue:(id)arg6 andMaxValue:(id)arg7;
+ (id)newRelationshipNamed:(id)arg1 withDestinationEntity:(id)arg2 andInverseRelationship:(id)arg3 isOptional:(BOOL)arg4 isToMany:(BOOL)arg5 andDeleteRule:(unsigned int)arg6;
+ (void)addModelingToolUserInfoToEntity:(id)arg1;
+ (void)addModelingToolUserInfoToProperty:(id)arg1;
+ (id)sharedModel;

- (id)init;
- (void)dealloc;

@end
