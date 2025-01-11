#include <bits/stdc++.h>
using namespace std; 
void Solve() 
{
 
 //tc->o(nlogn+mlogm),sc->o(n+m)
 
 int n,m,k;
 cin>>n>>m>>k;
 vector<int> desired_size(n);
 vector<int> apartment_size(m);
 for(int i=0;i<n;i++){
  cin>>desired_size[i];
 }
for(int i=0;i<m;i++){
  cin>>apartment_size[i];
}
sort(desired_size.begin(),desired_size.end());
sort(apartment_size.begin(),apartment_size.end());
int j=0; // appartments
int i=0; // applicants
int max_count=0;
while(j<m&&i<n){
if(desired_size[i]-k<=apartment_size[j]&&desired_size[i]+k>=apartment_size[j]){
   max_count++;
   i++;
   j++;
   
}
else{
  if(desired_size[i]>apartment_size[j]){
    j++;

  }

  else{
    i++;
  }
}

}
cout<<max_count<<endl;

}
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    
       Solve();
    
  return 0;
}
