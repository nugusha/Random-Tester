# Random-Tester
```sh
Sample Tester for Competitive Programming competitions.
 X.cpp and Y.cpp are the codes to be tested against.
 Tester tests X's and Y's outputs and finds the testcase on which they differ.
 Use slower solution in X and more efficient one in Y
``` 
 
```sh
for example:
|  X.cpp - O(n^2) Correct solution
|  Y.cpp - O(n*lg(n)) Wrong/ToBeTested solution
| run Tester, find a test case where Y fails. ez
```

## Tips

*  Modify Testers' randomization of inputs
*  which go to a.in
*  modify range
*  fix for unique values
*  use previous values to create new ones
*    edge example: you need number in increasing order
*        x=rand()%mod1;   y=x+rand()%mod2;

# How to 

* Save codes in X and Y 
* Run X.cpp and Y.cpp to create exe files
* Run Tester.cpp
* Tester.cpp feeds input to a.in
* X.exe and Y.exe are executed and Outputs saved to x.out and y.out
* Tester.cpp reads outputs and compares
* Prints "OK" for same outputs | Prints "Wrong" if otherwise and stops

### When Tester fails:
	
* 1) close exe file 
* 2) open a.in 
	     which will consist of the test case where outputs differ
* 3) enjoy finding a bug 
* 4) ez gg wp 
	
[Google](https://www.google.com)

## Errors
* if you get:
"'X.exe' is not recognized as an internal or external command, operable program or * batch file." 
* It means there's no X.exe 
* To resolve the issue run X.cpp !!! so ez


License
----

MIT
