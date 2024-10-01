#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
     string s;
     cin>>s;
       //sort the string
       //and then finnd the next permutation
       sort(s.begin(),s.end());
       vector<string> ans;

       do{
          ans.push_back(s);
       }while(next_permutation(s.begin(),s.end()));
       
       cout<<ans.size()<<'\n';
       for(auto it: ans){
        cout<<it<<'\n';
       }
    
  return 0;
}