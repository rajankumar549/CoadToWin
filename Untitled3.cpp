#include <string>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
static int count=0;
void get( string str, string res,string data,unsigned int len ) {
	
   if(res.length()==len)
   {string temp=res;
    reverse(temp.begin(),temp.end());
     cout << res <<data<<temp<< endl;

   //count++;
	}

   for( unsigned int i = 0; i <str.length(); i++ )
      get( string(str).erase(i,1), res + str[i],data,len );
}
void print_data(string str,string d, unsigned int len)
{
	get( str, "",d,len );
	
	
}
int main( ) {

 
   
    unsigned int t;
  cin.sync_with_stdio(0);
 
   string str;
  	cin>>str;
  	unsigned int len2= str.length()/2;
  	
  	//cout<<len;
  	if(str.length()%2==1)
  	{ string data( 1, str[len2]);
  	str= str.substr(0, len2);
  	sort(str.begin(), str.end());
  	print_data(str,data,len2);	
	}
	else{
	str= str.substr(0, len2);
	sort(str.begin(), str.end());
  	print_data(str,"",len2);
	  }
  	
  
  return 0;
}
