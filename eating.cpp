#include<stdio.h>
#include <stdlib.h>
#define max 1000000000
#define max2 100000
#define f(x)  scanf("%d",&x) 
#define cond n>=1&&q>=1&&n<=max2&&q<=max2
typedef struct
{
  int my_array[max2];
}by_val;

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}
 
 
int val(by_val l3,int n2,int k2)
{  
	while(l3.my_array[n2]<k2&&n2>0)
	{
	   l3.my_array[n2-1]++;
	   n2--;
	   
	}
	if(l3.my_array[n2]<k2&&n2==0)
	{
		return 0;
	}
	else{
	
	return (n2+1);
}
	
}
int main() {
 
by_val l;
int k,n,q,t;
int out[max2];
out[0]=0;
 
f(t);
 if(t<=5&&t>=1)
 { while(t>=1)
 {
 
   f(n);
   f(q);
   if(cond)
   { 
   
    for(int temp2=0;temp2<n;temp2++)
	{ 
	   int te;
	 	f(te);
	 	if(te>=1&&te<=max)
	 	{
	 		l.my_array[temp2]=te;
		 }
	 	
	 	
	}
   	qsort(l.my_array, n, sizeof(int), cmpfunc);
   
	for(int temp4=1;temp4<=q;temp4++)
	{ 
	  f(k);
	   if(!(k>=1&&k<=max))
	 	{
	 		continue;
		}
	   else	if(l.my_array[n]>=k)
	 	{
	 	out[0]++;
	    out[out[0]] =n;	
		}
		else if(l.my_array[0]+n-1<k)
	 	{
	 	out[0]++;
	    out[out[0]] =0;	
		}
	else{
		 
	  out[0]++;
	  out[out[0]] =val(l,n,k);
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
