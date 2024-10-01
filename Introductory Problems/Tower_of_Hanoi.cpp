#include <bits/stdc++.h>
using namespace std;


void solve(int source,int destination,int via,int n){
if(n<=0){return ;}
solve(source,via,destination,n-1);
cout<<source<<" "<<destination<<"\n";
solve(via,destination,source,n-1);
}

int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
int n;
cin>> n;
cout<< (1<<n)-1<<'\n';
 solve(1,3,2,n);

  return 0;
}