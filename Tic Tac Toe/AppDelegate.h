//
//  AppDelegate.h
//  Tic Tac Toe
//
//  Created by Virshawn Hammonds on 7/16/12.
//  Copyright (c) 2012 Pointdexter11. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

//@property (assign) NSControl *button1;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)buttonn1:(NSButtonCell *)sender;
- (IBAction)buttonn2:(NSButtonCell *)sender;
- (IBAction)buttonn3:(NSButtonCell *)sender;
- (IBAction)buttonn4:(NSButtonCell *)sender;
- (IBAction)buttonn5:(NSButtonCell *)sender;
- (IBAction)buttonn6:(NSButtonCell *)sender;
- (IBAction)buttonn7:(NSButtonCell *)sender;
- (IBAction)buttonn8:(NSButtonCell *)sender;
- (IBAction)buttonn9:(NSButtonCell *)sender;

- (IBAction)saveAction:(id)sender;

@end