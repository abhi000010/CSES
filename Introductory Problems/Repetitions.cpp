#include<bits/stdc++.h>
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    
string s;
 cin>>s;
 long long int n=s.size();
 if(n==0||n==1){
  cout<<n<<endl;
  return 0;
  }
 long long int count=1;
 long long int max_count=1;

 for(long long int i=1;i<n;i++){
  if(s[i-1]==s[i]){
 count++;
  }
  else{
    //start from new
    count=1;
  }
  max_count=max(max_count,count);
 }
 cout<<max_count<<endl;

  return 0;
}