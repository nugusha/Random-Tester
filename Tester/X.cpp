#include <bits/stdc++.h>
using namespace std;
int ma,mi,n;
int a[100005];
main ()
{
	freopen ("a.in","r",stdin);
	freopen ("x.out","w",stdout);
	
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
