#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
  int n;
  cin>>n;

  vector<pair<int,int>> factors;         //  pair will store  prime factor and its power

  int count;
  for(int i=2;i*i<=n;i++)
  {
        count=0;
        while(n%i==0)
        {
           count++;
           n=n/i;
           
        }

        factors.push_back({i,count});

 }

 if(n!=1) factors.push_back({n,1});        // itself prime no i.e in above loop value n will never goes to one.


  
for(auto x: factors)
{
  cout<<x.first<< "  " <<x.second<<endl;
}


         


}
