#include <bits/stdc++.h>
using namespace std;
int ma,mi,n;
int a[100005];
main ()
{
	// Both X and Y input from a.in
	freopen ("a.in","r",stdin);
	freopen ("y.out","w",stdout);
	
	// Sample Max and Min
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	ma=mi=a[0];
		
	for(int i=0;i<n;i++)
		ma = max(ma,a[i]),
		mi = min(mi,a[i]);
				
	cout<<ma<<endl;
	cout<<mi<<endl;
}
