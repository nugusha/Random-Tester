// Nugzar Chkhaidze
// Windows

#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;
int n,x,y;
int main ()
{
	int TEST = 0; // test iterator/index. Initially 0
	int MAX = 1e6; // maximum value of random
	string STATUS; // status is "OK" or "WRONG"
	int numberOfOutputs = 2; // number of outputs	
	
	cin>>n;  //  input more if relevant	
  	
	while(true){
		++TEST;
		STATUS = "OK"; // initial status 
		
		ofstream myfile;
  		myfile.open ("a.in");
		
		myfile<<n<<endl;
		for(int i=0;i<n;i++)myfile<<rand()%MAX+1<<" "; // example: range 1 to MAX
			
		myfile.close();
		
		system("g++ -o A X.cpp"); system("./A"); // Call X.cpp and wait till it finishes working
		system("g++ -o B Y.cpp"); system("./B"); // Call Y.cpp and wait till it finishes working
		// You can use any file name instead of "A" or "B" 
		// Just be sure that no other file in the folder has that name
		
		ifstream f1,f2;
  		f1.open ("x.out");  // Read X.cpp output
  		f2.open ("y.out");  // Read Y.cpp output
		
		for(int i=0;i<numberOfOutputs;i++){
			f1>>x;
			f2>>y;
			if(x!=y)STATUS = "WRONG";
		}
		f1.close();f2.close();
		cout<<"TEST " <<TEST<<" "<<STATUS<<"!"<<endl;
		if(STATUS == "WRONG") break;
	}
}
