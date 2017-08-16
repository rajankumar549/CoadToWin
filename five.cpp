#include <bits/stdc++.h>
using namespace std;
int fun()
{  

int n,counter=0;
cin>>n;
map<int,int> a;
  for(int i=1;i<=n;i++)
  {
  	cin>>a[i];
  }//for loop
  if(n%2==1)
  {
  	int t=(n+1)/2;
  	for(int i=1;i<t;i++)
  	{  cout<<"p";
  		if(a[i]-a[i+1]>=0)
  		{  cout<<"s";
  			a[i]=a[i]-a[i+1]-1;
  			counter = counter-(a[i]-a[i+1]-1);
  			//cout<<a[i]-a[i+1]-1;
  			
		  }
	    
	    	
		
	  }
	  for(int i=n;i>t;i--)
  	{cout<<"t";
  		if(a[i]-a[i-1]>=0)
  		{
  			a[i]=a[i]-a[i-1]-1;
  			counter = counter-(a[i]-a[i-1]-1);
  			
		  }
	    
	    	
		
	  }
	  if(a[t]!=t)
	  {
	  	counter=counter+ a[t]-t;
	  }
  }//end if
  else{
  	
  	int t=n/2;
  	for(int i=1;i<t;i++)
  	{   int x= a[i+1]-a[i+1];
  	if(x==0)
  	{
  		a[i]--;
  		counter++;
  		
	  }
  		else if()
  		{
  			a[i]=a[i]-a[i+1];
  			counter = counter-(a[i]-a[i+1]);
  			cout<<a[i]-a[i+1]-1<<endl;
  			
		  }
	    
	    	
		
	  }
	  for(int i=n;i>t;i--)
  	{
  		if(a[i]-a[i-1]>=0)
  		{
  			a[i]=a[i]-a[i-1]-1;
  			counter = counter-(a[i]-a[i-1]-1);
  			cout<<a[i]-a[i-1]-1<<endl;
  			
  			
		  }
	    
	    	
		
	  }
  	
  	
  }//end else;
   	return counter;
}


int main(){
  int t;
  cin.sync_with_stdio(0);
  map<int,int> a;
  cin >> t;
  while (t>0) 
  {
  	
  	cout<<fun();
  	
  	t--;
  }
  return 0;
}
