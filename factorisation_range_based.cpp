#include<bits/stdc++.h>
using namespace std;


#include<bitset> // for memory efficient
#define max 100 // till 10 ^ 7
bitset<1000000> isprime ={0};
vector<int> prime;       // it will store all prime no.
void seive()
{
   // assumtion no no is prime.

  // 2 is prime
     isprime.set(2);
     prime.push_back(2);
    
   // assumption all odd are prime.
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



int32_t main(){

 
 // precomputation of prime - no 

seive();

  
  // for range factorisation. 
  // time complexity is nloglog(root(n)) + log(n) <= nlog(n)
  // in this i simply divide all by prime factor insted of all factors where all prime number are stored in vector prime.

   int t;
   cin>>t;

   while(t--)
   {
         int n;
         cin>>n;
         
         int prime_pos=0;
         int val=prime[prime_pos];
         for(int i=0;val*val<=n;i++)

         {
            val=prime[i];
            while(n%val==0)
            {
             
              cout<<val<<"  ";                // change code according to you i am simply printing factor ..here val is prime factor.
              n=n/val;
            }
            cout<<endl;
         }

       if(n!=1) cout<<n<<endl;


   }



}
