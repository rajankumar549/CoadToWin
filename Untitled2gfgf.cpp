#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;
void max(int *a, int *b)
{   int  temp;
   if(*b> *a){
   
   	temp=*a;
 	*a=*b;
   	*b=temp;
   }
   
}


main()
{
	   int a=-20,b=10;
	    max(&b,&a);
        cout<<a<<"  "<<b;
}
