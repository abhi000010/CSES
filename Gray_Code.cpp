#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 int n;
 
 void print(bool bits[]){
  //function for method LSB

  for(int i=n;i>0;i--){
    //print all the bits of the bool array from n to 1
    cout<<bits[i];
  }
  cout<<'\n';
 }

int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
   
   cin>>n;
 
         //16 digits and we used 1 based indexing so 17
         bool bits[17]={false};
    
     //METHOD LSB

         //for printing all 0's
        print(bits);

        //we have to print 2^n-1 lines so 1<<n
       for(int i=1;i<(1<<n);i++){
           int lsb=__builtin_ffs(i);
           //we need to flip the bit of pos =lsb 
           bits[lsb]^=1;
           print(bits);
       }


  return 0;
}