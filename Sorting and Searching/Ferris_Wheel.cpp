#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void Solve() 
{
  //tc->o(nlogn),sc->o(n)

  int n,x;
  cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }

     int groups=0;
     sort(arr.begin(),arr.end());
     int low=0,high=n-1;

    while(low<high){
      if(arr[low]+arr[high] <=x){
        low++;
        high--;
        groups++;
      }
      else{
        high--;
      }
    }
     int max_count=0;
    for(int i=0;i<n;i++){
if(arr[i]<=x) max_count++;
else break;
    }

      cout<<max_count-groups<<endl;
}
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
  
       Solve();
  return 0;
}