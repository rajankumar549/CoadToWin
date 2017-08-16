#include <bits/stdc++.h>
using namespace std;

int convert10tob(int N, int b)

{
    int result=0;
    int i=0;
     while(N)
     {
     	result+=((N%b)*(pow(10,i)));
     	//cout<<N%b<<endl;
     	N=N/b;
     	i++;
	 }
	 
	 
	 

     return result;

}

int sumdigt(int n)
{
	int sum=0;
	while(n)
	{
		sum=sum+(n%10);
		n=n/10;
	}
	return sum;
}

 

/*

 * Main

 */

int main()

{



     int i,base=0,sum=0,b,t;
    cin>>b>>t;
    //cout<<convert10tob(8,5);
    i=b;
   while(i<100000){
    	
    	base=i;
    	int base2=convert10tob(base,b);
    	sum=sumdigt(base2);
    	//cout<<base2<<"------"<<sum<<endl;
    	if(base%sum==0)
    	
    	{   
		
	//	cout<<"hit at>>"<<base<<endl;
		int new_int=convert10tob(base+1,b);
    	//	cout<<new_int<<" hh"<<base;
    	   bool flag=false;
    	   if((base+t)%sumdigt(convert10tob(base+t,b))==0)
    			{
    			  flag=false;
				  break;	
				}
			else if((base+t)%sumdigt(convert10tob(base-1,b))==0)
    			{
    			  flag=false;
				  break;	
				}
	
				
    		for(int j=1;j<t;j++)
    		{  
    		   
    		    //cout<<base+j<<"...."<<temp_sum<<endl;
    		    
    		   
    			
			  if((base+j)%sumdigt(new_int)==0)
    			{
    			  flag=true;	
				}
				else{
					flag=false;
					break;
				}
				
    			new_int=convert10tob(base+j+1,b);
			}
			if(flag)
			{
				cout<<convert10tob(base,b)<<endl;
				break;
			}
		}
    	
    	
    	i++;
	}
	
   

}
