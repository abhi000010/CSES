#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void Solve() 
{
  //we will be using set to store unique elements
  //tc->o(nlogn),sc->o(n)
  
  int n;
  cin>>n;
  //here you can't use unorderd_setbecause of collisions
  set<int>st;
  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    st.insert(ele);
  }
   cout<<st.size()<<endl;


}
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
   
       Solve();
    
  return 0;
}
