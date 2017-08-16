#include <bits/stdc++.h>
using namespace std;

static int n;
void nondecdigits(string s)
{
    long long m = s.size();
    long long a[m];
 
    for (long long i=0; i<m; i++)
        a[i] = s[i] - '0';
 

    long long level = m-1;
    for (long long i=m-1; i>0; i--)
    {
     
        if (a[i] < a[i-1])
        {
            a[i-1]--;
            level=i-1;
        }
    }
    if (a[0] != 0)
    {
        for (long long i=0; i<=level; i++)
            cout << a[i];
        for (long long i=level+1; i<m; i++)
            cout << "9";
    }
    else
    {
        for (long long i=1; i<level; i++)
            cout << a[i];
        for (long long i=level+1; i<m; i++)
            cout << "9";
    }
}

int main(){
string n ;

cin>>n;
    nondecdigits(n);
    return 0;
}
