#include <bits/stdc++.h>
using namespace std;
static map<int, map<int,int> > a;
static int n;
bool checkprime(int x)
{ 
bool flag=true;
if(x==0||x==1)
{
	return false;
}
for(int i=2;i<=x/2;i++)
{
	if(x%i==0)
	{   flag=false;
		break;
	}
}
//cout<<flag<<endl;
return flag;
}

int calPrime(int end)
{
	int i, j, isPrime; //isPrime is used as flag variable
   map<int ,int> data;
    int k=0;
    for(i=2; i<=end; i++)
    {
        /* Assume that the current number is Prime */
        isPrime = 1; 

        /* Check if the current number i is prime or not */
        for(j=2; j<=i/2; j++)
        {
            /*
             * If i is divisible by any number other than 1 and self
             * then it is not prime number
             */
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        /* If the number is prime then print */
        if(isPrime==1)
        {
            data [k]=i;
            k++;
        }
    }
    //cout<<data.size();
   return data.size();
}


int test(int big ,int end)
{
	int i, j,result;
    int k=0;
    for(i=big; i<=end; i++)
    {
     if(checkprime(calPrime(i)))
     {
     	k++;
	 }
        
    }
   return k;
}






int main(){
int n, j, end,big; //isPrime is used as flag variable
map<int ,int> data;
cin>>n;
while(n>0)
{    cin>>big>>end;
   cout<<test(big,end)<<endl;
	n--;
}
    
  return 0;
}
