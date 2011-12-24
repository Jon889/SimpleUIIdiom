Use this instead of UI_USER_INTERFACE_IDIOM() macro.

This library provides 3 ways of specifying which idiom.

1)

    $iPadCode
    NSLog(@"This is only logged on iPads);
    $endiPadCode

(you can put that on one line):

    $iPadCode NSLog(@"This is only logged on iPads); $endiPadCode

2)

    [iPadCode {
		NSLog(@"This is only logged on iPads);
	}];

3) (this is the original, it doesn't use #define macros)

    [iPadCode:^{
		NSLog(@"This is only logged on iPads);
	}];


In each way, you can substitute `iPadCode` with `iPhoneCode`.