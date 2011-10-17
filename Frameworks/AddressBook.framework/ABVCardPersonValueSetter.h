/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardPersonValueSetter : ABVCardValueSetter  {
    void *_person;
    struct __CFArray { } *_properties;
}

+ (struct __CFArray { }*)supportedProperties;

- (id)imageData;
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned int)arg2;
- (id)initWithPerson:(void*)arg1;
- (struct __CFArray { }*)foundProperties;
- (BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (BOOL)setValue:(void*)arg1 forProperty:(unsigned int)arg2;
- (void*)valueForProperty:(unsigned int)arg1;
- (id)fullName;
- (void)dealloc;

@end
