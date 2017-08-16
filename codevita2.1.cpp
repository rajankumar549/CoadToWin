#include <bits/stdc++.h>
using namespace std;
static map<int, map<int,int> > a;
static int n;
int  fun(string data,int i, int j)
{  
if(i==n&&j==n)
{
	cout<<data<<endl;
	return 1 ;
}
else if(i>n||j>n)
{return 0 ;
}
 if(a[i+1][j]==1)
{
	data+="D";
   if(fun(data,i+1,j)==0)
   {
   	data.resize (data.size () - 1);
   }
}
 if(a[i][j+1]==1)
{   

   if(a[i+1][j]==1) data.resize (data.size () - 1);
	data+="R";
 if(fun(data,i,j+1)==0)
  {
  data.resize (data.size () - 1);
  }
}
else{
	return 0;
}

}


int main(){
 n=3;
  cin.sync_with_stdio(0);
 // map<int, map<int,int> > a;
   a[0][0]=1; 	a[0][1]=1;	 a[0][2]=1;		a[0][3]=1;
   a[1][0]=1; 	a[1][1]=1;	 a[1][2]=1;		a[1][3]=1;
   a[2][0]=1; 	a[2][1]=1;	 a[2][2]=1;		a[2][3]=1;
   a[3][0]=1; 	a[3][1]=1;	 a[3][2]=1;		a[3][3]=1;
  for(int i=0;i<=n;i++)
  {
  	for(int j=0;j<=n;j++)
  	{
  		cout<<a[i][j]<<"\t";
	}
	cout<<endl;
  }
  fun("",0,0);
  return 0;
}
