#include <bits/stdc++.h>
using namespace std;



int fun(string data){
	int i;
	//cout<<data<<endl;
	for(i=0;i<data.length();i++)
	{
		if(data[i]=='J'&&data[i+1]=='A')
		{    //cout<<"from "<<data;
			data[i]='A';
			//cout<<"to "<<data<<endl;
		}
		else if(data[i]=='I'&&data[i+1]=='B')
		{ //cout<<"from "<<data;
			data[i]='B';
			//cout<<"to "<<data<<endl;
		}
		else if(data[i]=='H'&&data[i+1]=='C')
		{ //cout<<"from "<<data;
			data[i]='C';
			//cout<<"to "<<data<<endl;
		}
		else if(data[i]=='D'&&data[i+1]=='G')
		{ //cout<<"from "<<data;
			data[i+1]='D';
			//cout<<"to "<<data<<endl;
		}
		else if(data[i]=='E'&&data[i+1]=='F')
		{ //cout<<"from "<<data;
			data[i+1]='F';
			//cout<<"to "<<data<<endl;
		}
	}
	//cout<<data;
	int value=0;
	int fac=0;
	for(int i=0;i<data.length();i++)
	{
		switch(data[i])
		{
		case 'A': fac=0;
				  break;
		case 'B': fac=1;
				  break;
		case 'C': fac=2;
				  break;
		case 'D': fac=3;
				  break;
		case 'E': fac=4;
				  break;
		case 'F': fac=5;
				  break;		  
		case 'G': fac=6;
				  break;
		case 'H': fac=7;
				  break;
		case 'I': fac=8;
				  break;
		case 'J': fac=9;
				  break;
				  		  	
		}
		value=value*10+fac;
	}
	return value;
}








int main(){
int n,end,big,r_total;
char str3[400];
gets(str3);
//str="JAACJA JAABCH JAABHD JAACAF JAJAJJ JAABEJ JAACJJ JAACDI";
scanf("%d",&r_total);
string str=string(str3);

cout<<r_total<<endl<<str;












}



