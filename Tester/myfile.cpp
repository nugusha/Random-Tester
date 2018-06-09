#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
using namespace std;
int n;
int main ()
{
/*
	int TEST = 0; // test iterator/index
	int MAX = 1e6;
	string STATUS; // status is "OK" or "WRONG"
	int numberOfOutputs = 2; // number of outputs. example: 2
	
	
	cin>>n;  //  input more if relevant
*/
	
	string IN = "aa.in"; 
	
	//ofstream MainInput;
  	//MainInput.open (IN.c_str());  // main input
  	
  	ofstream myfile;
  	myfile.open ("example.txt");
  	myfile << "Writithto a file.\n";
  	myfile.close();


/* 	
	ifstream f1;
  	f1.open ("x.out");  // Output of X.cpp
	ifstream f2;
  	f2.open ("y.out");  // Output of Y.cpp 
  	
  	
  	

	
	
	while(true){
		++TEST;
		STATUS = "OK"; // initial status 
		
		
		MainInput<<n<<endl;
		for(int i=0;i<n;i++)MainInput<<rand()%MAX+1<<" ";
		MainInput<<endl;
		
		system(".\X.cpp");
		system(".\Y.cpp");
		
		
		for(int i=0;i<numberOfOutputs;i++){
			int x,y;
			
			f1>>x;
			f2>>y;
			
			if(x==y)STATUS = "WRONG";
		}
		
		cout<<"TEST " <<TEST<<" "<<STATUS<<" !"<<endl;
		
		if(STATUS == "WRONG") break;
	}*/
}
