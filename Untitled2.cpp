#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int s,n,k[100];
   cin>>s;
   bool out[100];
   if(s>=1&&s<=100)
   { for(int j=1;j<=s;j++)
   {
   
   	cin>>n;
   	if(n>=3&&n<=100)
   	{   
   		
   		for(int i=1;i<=n;i++)
   		{
   			cin>>k[i];
		}
		
		if(n%2==1)
		{   int temp=(n+1)/2;
		
			if(k[1]==1&&k[n]==1&&k[temp]==temp)
			{ int total=1;
			for(int i=2;i<=temp;i++)
   		   { if(i==temp)
   		     {
   		     	total=total+k[i];
			  }
   			else if(k[i]==k[n+1-i])
   			{
   				total=total+k[i];
			}
		
			else{
				out[j]=false;
				break;
			}
		}
		int cop=(temp*(temp+1);/2
		if(cop==total)
		{out[j]=true;
		}
		else{
			out[j]=false;
		}
		
			
		}
			else{
			out[j]=false;
		}
		
	}
			else{
				out[j]=false;
			}
	
		
	}
	
	
   }
   for(int i=1;i<=s;i++)
   		{
   			if(out[i])
   			cout<<"yes\n";
   			else
   			cout<<"no\n";
   			
		}
}

   
}

