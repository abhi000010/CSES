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
  ll x,y;
  //here i have take row as x and column as y for standard format
  cin>>x>>y;
  //inside magic square of side n
  x=x-1;
  y=y-1;  
  ll n=max(x,y);

  if(x==y){
    cout<<n*n+y+1<<endl;
  return ;
  }
   if((n+1)%2==1){
    //sequence will start from the left 
     //if(x==y){return n*n+max(x+1,y+1);}
     if(x>y){ 
      cout<<n*n+y+1<<endl;
     return ;
     }
     else{
      //x<y
      cout<<(n+1)*(n+1)-x<<endl;
      return ;
     }
   }
  else{
//(n+1)%2==0 so it will start from top
if(x>y){
  cout<<(n+1)*(n+1)-y<<endl;
return ;
}
else{
  //x<y
  cout<<n*n+x+1<<endl;
  return ;
}
  }
  
}
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {  
       Solve();
    }
  return 0;
}