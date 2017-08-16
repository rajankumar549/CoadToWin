#include <bits/stdc++.h>
using namespace std;
int fun()
{  
string s;
cin>>s;
for(int i= 0;i<s.length();i++)
{
	
	if(s[i]=='m'&&s[i+1]=='s'&&i<s.length()-1)
	{
		s[i+1]='x';
		//cout<<"ms"<<endl;
	}
	else if(s[i]=='m'&&s[i-1]=='s'&&i>0)
	{
		s[i-1]='x';
	//	cout<<"sm"<<endl;
	}
}
cout<<s<<endl;
int counter_s=0,counter_m=0;
for(int i= 0;i<s.length();i++)
{
	
	if(s[i]=='s')
	{
		counter_s++;
	}
	else if(s[i]=='m')
	{
		counter_m++;
	}
}
//cout<<counter_s<<counter_m<<endl;
if(counter_s>counter_m)
{
	cout<<"snake"<<endl;
}
else if(counter_m>counter_s)
{
	cout<<"mongooses"<<endl;
}
else
cout<<"tie"<<endl;
}

int main(){
  int t = 0;
  cin.sync_with_stdio(0);
  map<int,int> a;
  cin >> t;
  while (t>0) 
  {
  	
  	fun();
  	
  	t--;
  }
  return 0;
}
