    #include <iostream>
    #include<stdio.h>
    #include <stdlib.h>
    #include <string>
    #define min1 -1000000000
    #define max1  1000000000
    using namespace std;
    void max(int *a, int *b)
    { int temp ;
       if(*b < *a)
       {
       	temp=*a;
       	 *a=*b;
       	 *b=temp;
	   }
    }
     
     
    main()
    {
    	   int t,x11,y11,x12,y12,x21,y21,x22,y22,l,r,n;
    	   cin>>t;
    	   n=t;
    	   bool out[100000],v1,v2,h1,h2;
    	   int no=0;
    	    if(t>=1&&t<=10000)
    	    {
    	    	
    	    	while(t>=1)
    	    	{   v1=false;
    	    		v2=false;
    	    		h1=false;
    	    		h2=false;
    	    		cin>>x11>>y11>>x12>>y12;
    	    		cin>>x21>>y21>>x22>>y22;
    	    		
    	    		
    	   		
				  no++;
    	    		if(x11==x12)
    	    		{ v1=true;
					}
    	    		   
    	    		if(y11==y12)
    	    		{
					h1=true;
					}
    	    		   
    	    		if(x21==x22)
    	    		{ v2=true;
					}
    	    		   
    	    		if(y21==y22)
    	    		{
    	    			 h2=true;
					}
				//cout<<h1<<v1<<h2<<v2<<endl;
    	    	  max(&x11,&x12);
    	    	  max(&x21,&x22);
		          max(&y11,&y12);
    	        max(&y21,&y22);	   
    	    	if(h1&&h2&&v1&&v2)
				{
				  if(x11==x12)
				    {
				    	out[no]=true;
					}
					else{
						out[no]=false;
					}
				}
    	    	if(v1&h1)
    	    	{   if(h2)
    	    	    {
					
    	    		if(y21==y11)
    	    		{
    	    			if(y11>=x21&&y11<=x22)
    	    			 {
    	    			 	out[no]=true;
						 }
						 else{
						 	out[no]=false;
						 }
					}
					else{
							out[no]=false;
					}
					}
					else{
						if(x21==y11)
    	    		{
    	    			if(y11>=y21&&y11<=y22)
    	    			 {
    	    			 	out[no]=true;
						 }
						 else{
						 	out[no]=false;
						 }
					}
					else{
							out[no]=false;
					}
						
					}
				}//v1 h1
				
				
				else if(v2&h2)
    	    	{
    	    		if(h1)
    	    	    {
					
    	    		if(y21==y11)
    	    		{
    	    			if(y21>=x12&&y21<=x12)
    	    			 {
    	    			 	out[no]=true;
						 }
						 else{
						 	out[no]=false;
						 }
					}
					else{
							out[no]=false;
					}
					}
					else{
						if(x21==y11)
    	    		{
    	    			if(y21>=y11&&y21<=y12)
    	    			 {
    	    			 	out[no]=true;
						 }
						 else{
						 	out[no]=false;
						 }
					}
					else{
							out[no]=false;
					}
						
					}
				}//v2 h2
 
    	    		    
    	    	else if((v1&&h2)||(v2&&h1))
    	    	{   
    	    		if(x11==x21&&y11==y21)
    	    		{
    	    		  	out[no]=true;
    	    		  	//cout<<"if1";
    				}
					else if(x11==x22&&y11==y22)
    	    		{
    	    		  	out[no]=true;
    	    		  	//cout<<"if1";
    				}
					else if(x12==x21&&y12==y21)
    	    		{
    	    		  	out[no]=true;
    	    		  	//cout<<"if1";
    				}
					else if(x12==x22&&y12==y22)
    	    		{
    	    		  	out[no]=true;
    	    		  	//cout<<"if1";
    				}
					else{
						out[no]=false;
					}	
    	    			
				}//end of v1 h1
					
				
    	    	else if(h1&&h2)
    	    	{  //cout<<"h1h2"<<endl;
    	    		if(y11==y22)
    	    		{
    	    			
    	    		//	cout<<x21<<x22<<endl;
    	    		    
						
    	    			 if(x11>=x21&&x11<=x22)
    	    			   {
    	    			   	out[no]=true;
						   }
						else if(x12>=x21&&x12<=x22)
						   {
							   out[no]=true;
							
						   	
						   }
						else{
								out[no]=false;
							}
					}//for VV
					else{
						 out[no]=false;
						}
    	    		
				}//for vv
				
				else if(v1&&v2)
    	    	{//cout<<"v1v2"<<endl;
    	    		if(x11==x22)
    	    		{
    	    		
    	    			//cout<<y21<<"  "<<y22;
    	    			if(y11>=y21&&y11<=y22)
    	    			   {
    	    			   	out[no]=true;
							
							
						   }
						else if(y12>=y21&&y12<y22)
						   {
						   	
							   out[no]=true;
												   	
						   }
						else{
								out[no]=false;
							}
					}//for hh
					else{
						 out[no]=false;
						}
    	    		
				}//HH
				
				else{
					out[no]=false;
				}
    			
    			
    	    		t--;
    			}
    			for(int i=1;i<=no;i++)
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
