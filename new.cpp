#include<bits/stdc++.h>
using namespace std;
map<int , string> a;
int main()
{   

	int i=0;
	while(cin>>a[i])
	{
		i++;
	}
	int n=i;
	int big, end;
	big=n/2;
	for(int j= big; j<n;j++)
	{
		cout<<a[j]<<endl;
	}
	for(int j= 0; j<big;j++)
	{
		cout<<a[j]<<endl;
	}
}
