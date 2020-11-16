#include<bits/stdc++.h>
using namespace std;
#include<bitset> // for memory efficient
#define max 10e7  // till 10 ^ 7
bitset<10000000> isprime ={0};      // mark that there is no prime exists.
vector<int> prime;       // it will store all prime no. like 2 3 5 7 but if you do not want to store than you can remove it.


void seive()
{
   // assumtion no number is prime.

  // 2 is prime
     isprime.set(2);
     prime.push_back(2);
    
   // assumption all odd are prime.  marked all odd are prime
     for(int i=3;i<=max;i+=2)
     {
        isprime.set(i);
     }
  
   // now some odd are not prime

     for(int i=3;i<=max;i+=2)
     {
              if(isprime[i]==1) {
                prime.push_back(i);

                // all multiple of this prime are not prime

                for(int j=i*i;j<=max;j+=i)
                {
                   isprime[j]=0;
                }

              }


     }




}

int32_t main()
{
seive();
}
