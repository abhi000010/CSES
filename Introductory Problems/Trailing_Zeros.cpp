#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);

     ll n;
     cin>>n;
     ll ans=0;
     while(n>0){
       n=n/5;
      ans+=n; 
     }
 cout<<ans<<'\n';
  return 0;
}