#include <bits/stdc++.h>
using namespace std;
int fun()
{ int n,m,u,v,val;
   cin>>n>>m;
   for(int i= 1;i<=m;i++)
      {
      	 cin>>u>>v;
	  }
  
   val=n-m;
   int temp=n-2;
   if(n%2==0)
   {
   	return 0;
   }
   
   else 
     return 1;
}

int main(){
  int t = 0;
  cin.sync_with_stdio(0);
  map<int,int> a;
  cin >> t;
  while (t>0) 
  {
  	if(fun()==0)
  	{
  		cout<<"yes\n";
	}
	  else 
	  cout<<"no\n";
  	cout<<t;
  	
  	t--;
  }
  return 0;
}
