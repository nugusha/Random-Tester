# Random-Tester
## Sample Tester for Competitive Programming competitions.
```sh
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
* Run Tester.cpp
* Tester.cpp feeds input to a.in
* X.cpp and Y.cpp are compiled
* X.exe and Y.exe are executed and Outputs saved to x.out and y.out
* Tester.cpp reads outputs and compares
* Prints "OK" for same outputs | Prints "Wrong" if otherwise and stops
* Repeats running exe files and comparing outputs until it finds different result

### When Tester stops:
	
* 1) close exe file 
* 2) open a.in 
	     which will consist of the test case where outputs differ
* 3) enjoy finding a bug 
* 4) ez gg wp 
	
[Magic](https://www.google.com)

## Errors (updated code, should not be getting the error below in any circumstance)
* if you get:
"'X.exe' is not recognized as an internal or external command, operable program or * batch file." 
* It means there's no X.exe 
* To resolve the issue run X.cpp and Y.cpp !

```sh
|Save Tester.cpp, X.cpp, Y.cpp and a.in in the same folder.
|Don't name any file in the folder A, B, A.cpp, B.cpp ..
|if you still want to have A.cpp and B.cpp 
|   change system call in Tester.cpp to create executables with different names
|A and B are arbirtrary names.
```


License
----

MIT
