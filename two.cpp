#include <bits/stdc++.h>
using namespace std;
int fun()
{ int n;
   string u,l;
	cin>>n;
    cin>>u;
    cin>>l;
	//count1=count1+count2;
	int counter=0;
    for(int i=0;i<n;i++)
	{
		if(u[i]=='#'||l[i]=='#')
		    {  
			 counter++;
			}
	}
	if(counter<=1){
	return counter;
	}
	for(int i=0;i<n-1;i++)
	{
		if(u[i]=='#'&&u[i+1]=='.'&&l[i]=='.')
		    {  
			 //cout<<". and .";
			return 0;
			}
	}
	for(int i=0;i<n-1;i++)
	{
		if(l[i]=='#'&&l[i+1]=='.'&&u[i]=='.')
		    { 
		///	 cout<<". or .";
			return 0;
			}
	}
		bool ter=false,first=true;
		int count=0;
	for(int i=0;i<n;i++)
	{  if(first==false)
	  {
	
		if(ter==true&&(l[i]=='#' ||u[i]=='#' ))
		   {
		   	return 0;
		   }
		else if(ter==false&&(l[i]=='#' ||u[i]=='#' ))
		{
			count++;
		}
		
	   if(l[i]=='.'&&u[i]=='.')
		    {  ter=true;
			}
		}
    	else if(!(l[i]=='.'&&u[i]=='.'))
		    {  first=false;
			}
		
		
	}
	
	for(int i=1;i<n-1;i++)
	    {
	    	if(l[i]=='#'&&u[i]=='#'&&l[i-1]=='.'&&u[i-1]=='#'&&l[i+1]=='.'&&u[i+1]=='#')
	    	   return 0;
	    	if(l[i]=='#'&&u[i]=='#'&&l[i-1]=='#'&&u[i-1]=='.'&&l[i+1]=='#'&&u[i+1]=='.')
	    	   return 0;
		}
	   bool flag=false;
	    counter=0;
	    
		for(int i=0;i<n;i++)
		{      if(l[i]=='#'&&u[i]=='.'||l[i]=='.'&&u[i]=='#'){
				flag=true;
			}
			
			if(flag==true){
			
		
		
		   if(counter>2)
	      	{
			if(l[i]=='#'&&u[i]=='.'||l[i]=='.'&&u[i]=='#')
			{
				return 0;
			}
		    }
			else if(counter<3&&l[i]=='#'&&l[i]==u[i])
			{
				counter++;
			}
			else if(l[i]=='#'&&u[i]=='.'||l[i]=='.'&&u[i]=='#'){
				counter=0;
			}
		}//flag
		
	    }
	    
	
    
    
    return 1;
}

int main(){
  int t = 0;
  cin.sync_with_stdio(0);
  map<int,int> a;
  cin >> t;
  while (t>0) 
  {
  	
  	if(fun()==1){
  		cout<<"yes\n";
	  }
	 else 
	 cout<<"no\n";
	 
  	
  	t--;
  }
  return 0;
}
