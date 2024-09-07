#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void Solve() 
{
 ll a,b;
 cin>>a>>b;
  //eq x+2*y=a
  //and 2*x+y=b

  if((a+b)%3==0 && (2*b-a)>=0 && (2*b-a)%3==0 && (2*a-b)>=0 && (2*a-b)%3==0){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
  cout<<'\n';
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