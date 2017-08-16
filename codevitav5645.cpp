#include <bits/stdc++.h>
using namespace std;




int main(){
int n,m,x; //isPrime is used as flag variable
map<int,map<int,int > >data;
cin>>m>>x;
int total=x;
int i;
for(i=1;i<=m;i++)
{
	cin>>data[i][0];
	
	if(x==0)
	{
			data[i][1]=0;
			data[i][2]=data[i][0];	
	}
	if(i==m)
	{  
	   int d=data[i][0]-1;
	 //cout<<"jdjhs";
	 if(x==0)
	 {
	 	    data[i][1]=x;
			data[i][2]=data[i][0];
	 }
	else if(d>x)
		{ 
			data[i][1]=x;
			data[i][2]=d-x;
			x=0;
		//	cout<<x<<endl;
	    }
		else{
			data[i][1]=d;
			x=x-d;
			data[i][2]=data[i][0]-d;
			//cout<<x<<endl;
			
		}
	}
	else{
		if(data[i][0]<x)
		{
			data[i][1]=data[i][0];
			data[i][2]=0;
			x=x-data[i][0];
			//cout<<x<<endl;
		}
		else if(data[i][0]>=x)
		{
			data[i][1]=x;
			data[i][2]=data[i][0]-x;
			x=0;
		}
	}
	
}
if(x==0)
{
	cout<<"Thank you, your order for "<<total<<" eggs is accepted"<<endl;
}
else{
	cout<<"Sorry, we can only supply "<<total-x<<" eggs"<<endl;
}
for(i=1;i<=m;i++)
{
	cout<<data[i][0]<<"\t"<<data[i][1]<<"\t"<<data[i][2]<<endl;
}
cin>>n;
}
