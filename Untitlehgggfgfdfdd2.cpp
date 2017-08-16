#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <string>
#define min1 -1000000000
#define max1  1000000000
using namespace std;
void max(int *a, int *b)
{   int  temp;
   if(*b> *a){
    temp=*a;
 	*a=*b;
   	*b=temp;
   }
   
}
bool val(int l,int h,int m){
	if(m>=l&&m<=h)
	   {return true;
	   }
	   return false;
}



main()
{
    int t,x11,y11,x12,y12,x21,y21,x22,y22,l,r,n;
	   cin>>t;
	   n=t;
	   bool out[100000],h1,h2,t1,t2,v1,v2,single1,single2;
	    if(t>=1&&t<=100000)
	    {
	    	
	    	while(t>=1)
	    	{   
	    	     
	    		cin>>x11>>y11>>x12>>y12;
	    		cin>>x21>>y21>>x22>>y22;
	    		/*if(!(x11>=min1&&x11<=max1))
	    		{ out[t]=false;
				}
	    		else if(!(x21>=min1&&x21<=max1))
	    		{ out[t]=false;
				}
				else if(!(x12>=min1&&x12<=max1))
	    		{ out[t]=false;
				}
				else if(!(x22>=min1&&x22<=max1))
	    		{ out[t]=false;
				}
				else if(!(y11>=min1&&y11<=max1))
	    		{ out[t]=false;
				}
				else if(!(y12>=min1&&x12<=max1))
	    		{ out[t]=false;
				}
				else if(!(y21>=min1&&y21<=max1))
	    		{ out[t]=false;
				}
				else if(!(y22>=min1&&y22<=max1))
	    		{ out[t]=false;
				}*/
	    		
	    		if(x11==x12)
	    		  { t1=false;
	    		  v1=true;
	    	      }
	    		if(y11==y12)
	    		{ t1=false;
	    		  h1=true;}
	    		if(x21==x22)
	    		{ t2=false;
	    		  v2=true;}
	    		if(y21==y22)
	    		{ t2=false;
	    		   h2=true;}
	    		if(t1||t2)
	    		{ out[t]=false;
				}
	    		else if(x11-x12+y11-y12==0)
	    		  {
	    		  	single1=true;
	    		  	out[t]=false;
				  }
				else if(x21-x22+y21-y22==0)
	    		  {
	    		  	single2=true;
	    		  	out[t]=false;
				  }
	    		   
	    		else if(v1&&v2)
	    		 { max(y22,y21);
	    		   max(y12,y11);
	    		   
	    		   			if(y11>=y21&&y21>=y11)
							{
								out[t]=true;
							}
							else if(y12<=y22&&y22<=y12)
							{
								out[t]=true;
							}
							else if(val(y11,y21,y12))
							{
								out[t]=true;
							}
							
							else if(val(y11,y22,y12))
							{out[t]=true;
							}
							else if(val(y21,y11,y22))
							{out[t]=true;
							}
							else if(val(y21,y12,y22))
							{out[t]=true;
							}
							else{
								out[t]=false;
							}
	    		 	
				 }
				else if(h1&&h2)
				{
					max(x22,x21);
	    		   	max(x12,x11);
	    		   
	    		   			if(x11>=x21&&x21>=x11)
							{
								out[t]=true;
							}
							else if(x12<=x22&&x22<=x12)
							{
								out[t]=true;
							}
							else if(val(x11,x21,x12))
							{
								out[t]=true;
							}
							
							else if(val(x11,x22,x12))
							{out[t]=true;
							}
							else if(val(x21,x11,x22))
							{out[t]=true;
							}
							else if(val(x21,x12,x22))
							{out[t]=true;
							}
							else{
								out[t]=false;
							}
					
				}
				else if(x11==x21&&y11==y21)
	    		{  
				  	out[t]=true;
				}
				 else if(x11==x22&&y11==y22)
				{
					out[t]=true;
				}
				else if(x12==x21&&y12==y21)
				{
				out[t]=true;
				}
				else if(x12==x22&&y12==y22)
			    {
			    	out[t]=true;
			    }
			    
	    		
	    		
	    		
	    		
	    		t--;
			}
			for(int i=n;i>=1;i--)
			{if(out[i])
			{
				cout<<"yes\n";
			}
			else{
				cout<<"no\n";
			}
			}
	    	
	    	
		}
	   
}
