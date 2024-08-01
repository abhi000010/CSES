#include <bits/stdc++.h>
using namespace std;
 
int main(){
     ios_base::sync_with_stdio(false); cin.tie(NULL);
  long long n,sum=0;
  cin>>n;
  int arr[n-1];
  for(long long i=0;i<n-1;i++){
    cin>>arr[i];
  }
  for(long long i=0;i<n-1;i++){
   sum=sum+arr[i];
  }
  cout<<((n*(n+1))/2-sum);
  return 0;
}