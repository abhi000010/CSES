#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fr(i,s,e) for(long long int i=s;i<e;i++)
#define fe(i,s,e) for(long long int i=s;i<=e;i++)
#define mapp map<int, int>
#define vec vector<int>
#define pb push_back
#define eb emplace_back
void Solve() 
{
  int n;
  cin>>n;
  if(n==1){cout<<"1";
  return ;
  }
  else if(n<=3){
    cout<<"NO SOLUTION"<<endl;
    return ;
  }
  else{
 bool flag=true;
 int first=2;
 int last=n;
 int count=n-2;
 while(count!=0){
  if(flag){
    cout<<first<<" ";
    first++;
  }
else{
  cout<<last<<" ";
  last--;
}
flag=!flag;
  count--;
 }
 cout<<"1"<<" "<<last;
  }
}
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
      Solve();
  return 0;
}