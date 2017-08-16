#include<bits/stdc++.h>
#define ll long long
using namespace std;
int fun(ll n)
{   
	ll x,y,z;
	x=n/2;
	y=n/3;
	z=n/4;
	return max(n,(x+y+z));
	
}

int main()
{
	
	int max;
	cin>>max;
	int a[max];
	cout<<sizeof(a)/sizeof(int);
	/*ll n;
	while(cin>>n)
	{
		
		cout<<fun(i)<<endl;	
	}*/
}
