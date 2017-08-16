#include <bits/stdc++.h>
using namespace std;

// Function to find all lexicographically next permutations of a
// string sorted in ascending order using std::prev_permutation
void permutations(string str,string data)
{
	// sort the string in ascending order
	sort(str.begin(), str.end());

	while(1)
	{
		// print current permutation
		string temp=str;
    	reverse(temp.begin(),temp.end());
		cout << str<<data<<temp<<endl;

		// find next lexicographically ordered permutation
	 	if (!next_permutation(str.begin(), str.end()))
	 		break;
	}
}

// main funtion
int main()
{
	 unsigned int t;
  cin.sync_with_stdio(0);
 
   string str;
  	cin>>str;
  	unsigned int len2= str.length()/2;
  	
  	//cout<<len;
  	if(str.length()%2==1)
  	{ string data( 1, str[len2]);
  	str= str.substr(0, len2);
  	permutations(str,data);
	}
	else{
	str= str.substr(0, len2);
  	permutations(str,"");
	  }
	
	
	
	return 0;
}

