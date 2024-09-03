#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void Solve() 
{
  int n;
  cin>>n;
  vector<ll> arr(n);
  for(int i=0;i<n;i++){
   cin>>arr[i];
  }
  ll count=0;
for(int i=1;i<n;i++){
if(arr[i-1]>arr[i]){
  count+=arr[i-1]-arr[i];
  arr[i]=arr[i-1];
}
}
cout<<count<<endl;
}
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
       Solve();
  return 0;
}