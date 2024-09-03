#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
   ll mod=1e9+7;
   ll n;
   cin>>n;
   ll ans=1;
   for(ll i=1;i<=n;i++){
     ans=(ans*2)%mod;
   }
   cout<<ans<<'\n';
  return 0;
}