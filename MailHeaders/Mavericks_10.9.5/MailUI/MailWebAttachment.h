/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MUIWebAttachment.h"

@class MCAttachment, MCMessage, NSURL;

@interface MailWebAttachment : MUIWebAttachment
{
    MCAttachment *_backingAttachment;
    MCMessage *_parentMessage;
    NSURL *_mailDownloadsFileURL;
    id _downloadCompletionBlock;
}

+ (id)keyPathsForValuesAffectingIsDataDownloaded;
@property(copy) id downloadCompletionBlock; // @synthesize downloadCompletionBlock=_downloadCompletionBlock;
@property(retain) NSURL *mailDownloadsFileURL; // @synthesize mailDownloadsFileURL=_mailDownloadsFileURL;
@property MCMessage *parentMessage; // @synthesize parentMessage=_parentMessage;
@property(retain, nonatomic) MCAttachment *backingAttachment; // @synthesize backingAttachment=_backingAttachment;
- (BOOL)isStationeryAttachment;
- (BOOL)isAutoArchiveAttachment;
- (void)_addPrivateAttributes:(id)arg1;
- (void)startDownloadingIfNeededWithProgress:(id)arg1 completionBlock:(id)arg2;
- (id)downloadProgress;
- (BOOL)shouldAlwaysAutomaticallyDownload;
- (BOOL)isDataDownloaded;
- (id)downloadDirectory;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)writeToURL:(id)arg1;
- (id)fileURL;
- (id)filename;
- (unsigned long long)fileSize;
- (id)mimeType;
- (id)iconImage;
- (id)fileWrapper;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithMCAttachment:(id)arg1;

@end
