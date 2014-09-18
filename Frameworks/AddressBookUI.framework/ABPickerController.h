/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <ABPickerControllerDelegate>, NSArray, NSIndexPath, NSString, UITableViewController;

@interface ABPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    NSArray *_builtinItems;
    NSArray *_customItems;
    id _itemLocalizationBlock;
    NSString *_itemLocalizationKey;
    NSIndexPath *_selectedIndexPath;
    NSString *_selectedItem;
    UITableViewController *_tableViewController;
    bool_allowsCustomItems;
}

@property bool allowsCustomItems;
@property(copy) NSArray * builtinItems;
@property(copy) NSArray * customItems;
@property(copy,readonly) NSString * debugDescription;
@property <ABPickerControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) id itemLocalizationBlock;
@property(copy) NSString * itemLocalizationKey;
@property(retain) NSIndexPath * selectedIndexPath;
@property(retain) NSString * selectedItem;
@property(readonly) Class superclass;
@property(retain) UITableViewController * tableViewController;

- (id)_itemAtIndexPath:(id)arg1;
- (void)_updateRightButtonItem;
- (bool)allowsCustomItems;
- (id)builtinItems;
- (void)cancelPicker:(id)arg1;
- (id)customItems;
- (void)customLabelUpdated:(id)arg1;
- (void)dealloc;
- (void)donePicker:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isEditing;
- (id)itemLocalizationBlock;
- (id)itemLocalizationKey;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeCustomItem:(id)arg1;
- (id)selectedIndexPath;
- (id)selectedItem;
- (void)setAllowsCustomItems:(bool)arg1;
- (void)setBuiltinItems:(id)arg1;
- (void)setCustomItems:(id)arg1;
- (void)setItemLocalizationBlock:(id)arg1;
- (void)setItemLocalizationKey:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableViewController;
- (void)textFieldDidBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleForAddCustomItem;
- (id)titleForPickerItem:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end