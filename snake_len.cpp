#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <string>
#define min -1000000000
#define max 1000000000
using namespace std;
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}


main()
{
	   int t,x11,y11,x12,y12,x21,y21,x22,y22,l,r,n;
	   cin>>t;
	   n=t;
	   bool out[100000];
	    if(t>=1&&t<=100000)
	    {
	    	
	    	while(t>=1)
	    	{    out[t]=false;
	    		cin>>x11>>y11>>x12>>y12;
	    		cin>>x21>>y21>>x22>>y22;
	    		if(!(x11>=min&&x11<=max))
	    		{ 
				}
	    		else if(!(x21>=min&&x21<=max))
	    		{ 
				}
				else if(!(x12>=min&&x12<=max))
	    		{ 
				}
				else if(!(x22>=min&&x22<=max))
	    		{ 
				}
				else if(!(y11>=min&&y11<=max))
	    		{ 
				}
				else if(!(y12>=min&&x12<=max))
	    		{ 
				}
				else if(!(y21>=min&&y21<=max))
	    		{ 
				}
				else if(!(y22>=min&&y22<=max))
	    		{ 
				}
				else if(x11!=x12&&y11!=y12)
				{
				
				}
				else if(x21!=x22&&y21!=y22)
				{
					
				}
				else{
				
				
	    		if(x11==x21&&y11==y21)
	    		{  
				  	if(x11==x22&&y11==y22)
	    		    {
	    		    	out[t]=false;
					}
				  	else if(x12==x21&&y12==y21)
					{
					out[t]=false;
					//cout<<"if3";
			    	}
			    	else if(x12==x22&&y12==y22)
			    	{
					out[t]=false;
					//cout<<"if4";
			    	}
			    	else{
			    		out[t]=true;
					}
	    		  	
	    		  	//cout<<"if1";
				}
				else if(x11==x22&&y11==y22)
				{ 	
					if(x11==x21&&y11==y21)
	    		    {
	    		    	out[t]=false;
					}
				  	else if(x12==x21&&y12==y21)
					{
					out[t]=false;
					//cout<<"if3";
			    	}
			    	else if(x12==x22&&y12==y22)
			    	{
					out[t]=false;
					//cout<<"if4";
			    	}
			    	else{
			    		out[t]=true;
					}
				}
				else if(x12==x21&&y12==y21)
				{
					if(x11==x21&&y11==y21)
	    		    {
	    		    	out[t]=false;
					}
				  	else if(x11==x22&&y11==y22)
					{
					out[t]=false;
					//cout<<"if3";
			    	}
			    	else if(x12==x22&&y12==y22)
			    	{
					out[t]=false;
					//cout<<"if4";
			    	}
			    	else{
			    		out[t]=true;
					}
					//cout<<"if3";
			    }
			    else if(x12==x22&&y12==y22)
			    {
					if(x11==x21&&y11==y21)
	    		    {
	    		    	out[t]=false;
					}
				  	else if(x11==x22&&y11==y22)
					{
					out[t]=false;
					//cout<<"if3";
			    	}
			    	else if(x12==x21&&y12==y21)
			    	{
					out[t]=false;
					//cout<<"if4";
			    	}
			    	else{
			    		out[t]=true;
					}
					//cout<<"if3";
			    }
			    else if((x11-x12+y11-y12)==0)
			    {
			    	if(x21==x22)
					 {
					 	
						   	if(y21>y22)
						   	{
						   		l=y22;
						   		r=y21;
							   }
							else
							{
							r=y22;
						   	l=y21;	
							}
							if(l<=x11&&r>=x11)
							{
								out[t]=true;
							}
							else{
								out[t]=false;
							}
						
					 }
					 else if(y21==y22)
					 {
					 	
						   	if(x21>x22)
						   	{
						   		l=x22;
						   		r=x21;
							   }
							else
							{
							r=x22;
						   	l=x21;	
							}
							if(l<=x11&&r>=x11)
							{
								out[t]=true;
							}
							else{
								out[t]=false;
							}
						
					 }
					 else
					 { 
					 out[t]=false;
					 }
			    	
				}
				else if((x21-x22+y21-y22)==0)
			    {
			    	if(x11==x12)
					 {
					 	
						   	if(y11>y12)
						   	{
						   		l=y12;
						   		r=y11;
							   }
							else
							{
							r=y12;
						   	l=y11;	
							}
							if(l<=x21&&r>=x21)
							{
								out[t]=true;
							}
							else{
								out[t]=false;
							}
						
					 }
					 else if(y11==y12)
					 {
					 	
						   	if(x11>x12)
						   	{
						   		l=x12;
						   		r=x11;
							   }
							else
							{
							r=x12;
						   	l=x11;	
							}
							if(l<=x21&&r>=x21)
							{
								out[t]=true;
							}
							else{
								out[t]=false;
							}
						
					 }
					 else
					 { 
					 out[t]=false;
					 }
				}
				else{
					//cout<<"if5";
					if(x11==x12)
					 {
					 	if(x21==x22)
					 	{
					 	 if(x11==x21)
						  {
						   	if(y11>y12)
						   	{
						   		l=y12;
						   		r=y11;
							   }
							else
							{
							r=y12;
						   	l=y11;	
							}
							if(l<=y21&&r>=y21)
							{
								out[t]=true;
							}
							else if(l<=y22&&r>=y22)
							{
								out[t]=true;
							}
							else{
								out[t]=false;
							}
							   
						  }
						  else{
						  	out[t]=false;
						  }
						 }
						 else{
						 	out[t]=false;
						 }
					 }
					 else if(y11==y12)
					 {
					 	if(y21==y22)
					 	{
					 		if(x11>x12)
						   	{
						   		l=x12;
						   		r=x11;
							   }
							else
							{
							r=x12;
						   	l=x11;	
							}
							if(l<=x21&&r>=x21)
							{
								out[t]=true;
							}
							else if(l<=x22&&r>=x22)
							{
								out[t]=true;
							}
							else{
								out[t]=false;
							}
						 }
						 else{
						 	out[t]=false;
						 }
						
					 }
					 else{
					 	out[t]=false;
					 }
					
					
				}
				
	    		
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
