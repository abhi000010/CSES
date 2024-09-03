#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    if((n*(n+1)/2)%2==1){ 
      cout<<"NO"<<'\n';
      return 0;
    }
    else{
     vector<int> set1;
     vector<int> set2;
     ll set1_sum=0;
     ll set2_sum=0;

       for(ll i=n;i>=1;i--){
        if(set1_sum>set2_sum){
          set2.push_back(i);
          set2_sum+=i;
        }
        else{
          set1.push_back(i);
          set1_sum+=i;
        }
       }

       if(set1_sum!=set2_sum){
        cout<<"NO"<<'\n';
        return 0;
       }
       else{
        cout<<"YES"<<'\n';
       }
       cout<<set1.size()<<'\n';
       for(auto it: set1){
        cout<<it<<" ";
       }
       cout<<'\n'<<set2.size()<<'\n';
       for(auto it:set2){
        cout<<it<<" ";
       }
         }
  
  return 0;
}