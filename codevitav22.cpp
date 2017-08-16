#include <bits/stdc++.h>
using namespace std;

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

int SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                 prime[i] = false;
        }
    }
    int result =0;
    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          result++;
    
    return result;
}
int calno(int n){

    int num,i,count,result=0;

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             result++;
    }
  
   return result;
}

int test(int big ,int end)
{
	int i, j,result;
    int k=0;
    for(i=big; i<=end; i++)
    {
     if(checkprime(calno(i)))
     {
     	k++;
	 }
        
    }
   return k;
}






int main(){
int n,end,big; //isPrime is used as flag variable
map<int ,int> data;
cin>>n;
while(n>0)
{    cin>>big>>end;
   cout<<test(big,end)<<endl;
	n--;
}
    
  return 0;
}
