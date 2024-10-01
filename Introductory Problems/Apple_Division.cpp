#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
 //greedy won't work here we have to try all possible combinations
 //use exhaustive bit mask
 //TC->(n*(2^n))

int n;
cin>>n;
vector<int> wt(n);
ll ans=1e10;
for(int i=0;i<n;i++){
  cin>>wt[i];
}

for(int mask=0;mask< (1<<n);mask++){
  //to find diff of all possible combinations 
ll sum_a=0;
ll sum_b=0;
//time to check the number made by bits
for(int position=0;position<n;position++){
if(mask& (1<<position)){
  //this & is bitwise and 
  //to check if position bit is 1 
  //bit= 1 indicates this weight is assigned to set a  
  sum_a+=wt[position];
}
else{
  sum_b+=wt[position];
}
}
ans=min(ans,abs(sum_a-sum_b));
}
cout<<ans;
  return 0;
}