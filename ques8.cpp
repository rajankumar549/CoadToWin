#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
void mostFreq3(int *a, int n, int b[3]) {

// Write your code here
// hint: sort a, find biggest 3 blocks
  int max=0;
  for(int i=0;i<n;i++)
  {
    if(max<a[i])
       max=a[i];
       
   }
       //cout<<max;
   int c[2][max+1];
       for(int i=0;i<=max;i++)
       {
         c[0][i]=0;
         c[1][i]=i;
       }
       
       for(int i=0;i<n;i++)
       {
       c[0][a[i]]++;  
       
       }
       
       
      for(int i=0;i<=max;i++)
       {
         for(int j=0;j<=max-1;j++)
         { int temp;
         if(c[0][j]<c[0][j+1])
         {
           temp=c[0][j];
           c[0][j]=c[0][j+1];
           c[0][j+1]=temp;
           temp=c[1][j];
           c[1][j]=c[1][j+1];
           c[1][j+1]=temp;
         }
        
         }
       }
     /* for(int i=0;i<=max;i++)
       {
       	cout<<c[0][i]<<c[1][i]<<endl;	   }*/
       b[0]=c[1][0];
       b[1]=c[1][1];
       b[2]=c[1][2];

}
int main()
{
	int n;
	int a[100];
	int b[3];
	int i=0;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}

	mostFreq3(a,n,b);
        for(i=0; i<3; i++)
            cout << b[i] << " ";

	return 0;
}
