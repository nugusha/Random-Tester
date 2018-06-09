#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;
int n;
int main ()
{

	int TEST = 0; // test iterator/index
	int MAX = 1e6;
	string STATUS; // status is "OK" or "WRONG"
	int numberOfOutputs = 2; // number of outputs
	
	
	cin>>n;  //  input more if relevant

	
  	
  	
	
	while(true){
		++TEST;
		STATUS = "OK"; // initial status 
		
		ofstream myfile;
  		myfile.open ("a.in");
		
		myfile<<n<<endl;
		for(int i=0;i<n;i++)myfile<<rand()%MAX+1<<" ";      // modify ouput ranges if relevant.  
		myfile<<endl;										// 
															// use array/map to ensure if unique number needed	
															// 
															// ez tree edges below			
															// x=rand()%mod1;   y=x+rand()%mod2;
															// x->y
															//
															// ez overall
															//
		
		
		
		myfile.close();
		
		system("\X.exe");
		system("\Y.exe");
		
		
		ifstream f1;
  		f1.open ("x.out");  // Read from X.cpp
		ifstream f2;
  		f2.open ("y.out");  // Read from Y.cpp 
		
		
		for(int i=0;i<numberOfOutputs;i++){
			int x,y;
			
			f1>>x;
			f2>>y;
//			cout<<x<<" "<<y<<endl;
			
			if(x!=y)STATUS = "WRONG";
		}
		
		f1.close();
		f2.close();
		
		cout<<"TEST " <<TEST<<" "<<STATUS<<" !"<<endl;
		
		if(STATUS == "WRONG") break;
	}
	
  	
}
