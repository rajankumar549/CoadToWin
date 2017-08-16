#include <bits/stdc++.h>
using namespace std;
static map<int, map<int,int> > a;
static int n;
long long nondecdigits(long long n)
{
    long long int x = 0;
    for (x=n; x>=1; x--)
    {
        int no = x;
        int new2 = 11;
        
        bool flag = true;
        while (no != 0)
        {
            if (new2 < no%10)
            {
               flag = false;
               break;
            }
            new2 = no % 10;
            no /= 10;
        }
 
        if (flag == true)
           break;
    }
 
    return x;
}


int main(){
long long n ;
cin>>n;
    cout << nondecdigits(n);
    return 0;
}
