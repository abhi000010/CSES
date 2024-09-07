#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    int cc=1;
    ll n=s.size();
    map<char,int> mpp;
    for(int i=0;i<n;i++){
    mpp[s[i]]++;
    }
    int p=0;
     vector<char> ans(n);
     for(auto it: mpp){
      if(it.second%2==0){
        for(int i=0;i<it.second/2;i++){
          ans[p]=it.first;
          ans[n-1-p]=it.first;
          p++;
        }
      }
      else{
          if(cc==2){cout<<"NO SOLUTION";
          return 0;
          }
        if(it.second==1){
          ans[n/2]=it.first;
          cc++;
        }
        else{
          
          for(int i=0;i<(int)it.second/2;i++){
            ans[p]=it.first;
            ans[n-1-p]=it.first;
            p++;
          }
          ans[(int)n/2]=it.first;
           cc++;
        }
      }
     }
 
     for(auto it: ans){
      cout<<it;
     }
     cout<<'\n';
  return 0;
}