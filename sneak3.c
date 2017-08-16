    #include<stdio.h>
    #include <stdlib.h>
    #include<map>
    
    #define max 1000000000
    #define max2 100000
    #define f(x)  scanf("%d",&x) 
    #define cond n>=1&&q>=1&&n<=max2&&q<=max2

     
     
    

    int main() {
     
    map<int,int> l;
    map<int,int> l3;
    int k,n,q,t,temp2,temp3,temp4;
    short out[max2];
    out[0]=0;
    f(t);
     if(t<=5&&t>=1)
     { while(t>=1)
     {
     
       f(n);
       f(q);
       if(cond)
       { 
       
        for(temp2=0;temp2<n;temp2++)
    	{ 
    	   int te;
    	 	f(te);
    	 	if(te>=1&&te<=max)
    	 	{
    	 		l[temp2]=te;
    		 }
    	 	
    	 	
    	}
       
    	for(temp4=1;temp4<=q;temp4++)
    	{ l3=l1;
    	  f(k);
    	   if(!(k>=1&&k<=max))
    	 	{
    	 		continue;
    		}
    		
    		
    		
    		
    		
    	else{
    		 
    	  out[0]++;
    	   int q=-1,i;
        int counter=0;
    	for(i=0;i<n2;i++)
    	{	
		   if(l3[i]>=k2)
    	      {
    	      	counter++;
    	      	l3[i]=-1;
			  }
			  else if(q==-1 && l3[i]<k2)
			  {
			  	q=i;
			  }
			  else{
			  	if(l3[q]>l3[i])
			  	{
			  		l3[q]++;
			  		l3[i]=-1;
			  		if(l3[q]>=k2)
			  		{
			  			l3[q]=-1;
			  			counter++;
			  			q=-1;
					}
				}
				else if(l3[q]<l3[i]){
					l3[i]++;
			  		l3[q]=-1;
			  		if(l3[i]>=k2)
			  		{
			  			l3[i]=-1;
			  			counter++;
			  			q=-1;
					}
				
					
				}
				else if(l3[q]==l3[i]){{
					l3[q]++;
			  		l3[i]=-1;
			  		if(l3[q]>=k2)
			  		{
			  			l3[q]=-1;
			  			counter++;
			  			q=-1;
					}
					
				}
			  }
		    	
		}
		for(i=0;i<n2;i++)
    	{
		  if(l3[i]>=k2)
		  {counter++;
		  }
		}	
		out[out[0]]=counter;
    		}
    	 
    	 	
    	}
       	
       
       }
       
       jump:
       t--;
       
     }
     for(temp3=1;temp3<=out[0];temp3++)
       {
       	printf("%d\n",out[temp3]);
       }
     
    }
     
     
     
    } 
