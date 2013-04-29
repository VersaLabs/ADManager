ADManager
=========

ADManager

What is it?
Secret for now.

Here's how you use it!


1. Add the binary and header file to xcode
1. Link against all the following libraries (need to use optional if you are support iOS versions before those libraries existed) (will provide awesome documentation for this later)
1. In you AppDelegate include the header file
```
    #import "ADAppDelegate.h"
```
1. In your AppDelegate add the following line of code after you have set the rootview controller for your UIWindow (some adnetworks need it this way)
```
    [[ADManager adManager] initializeNetworks];
```
1. In your view controller that you may want ads to appear
```
[[ADManager adManager] showAdForViewController:self];
``` 


The REST is magic. (also see [RESTMagic.org](http://RESTMagic.org))
