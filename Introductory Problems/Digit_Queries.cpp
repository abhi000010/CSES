#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void Solve() 
{
  //optimal approach 1(mathematical approach)
  //tc->o(log n),sc->o(1)
  //indexing is 1 based
  //indexed position of string

  /* steps
  1. find the group where the digit lies
  2.  
  
  */

  long long n;
  cin>>n;

//it is the starting number
  long long start=1;

//initially we assume the digit is 1
  long long digits=1;
  //count will be no b/w range of same digit numbers
  long long count=9;

  while(n>digits*count){
   n-=digits*count;
   digits++;
   count*=10;
   start*=10;
  }
     
     //this is to extract the number
     long long number= start+ (n-1)/digits;

     string s=to_string(number);

       //n-1 is done due to 0 based indexing of string     
     cout<<s[(n-1)%digits]<<endl;
  

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