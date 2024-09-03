 /*  1.total no of places in chess board of size k is k^2
        2.no of ways you can select position of 2 knights in a chess board of k*k pieces is   (k*k)C2 that is (k*k)(k*k-1)/2
        3. as knight moves in L shape so min rectangle for knight to attack is of 2x3or of3x2 in which there are 2 such position that knight can attack in both of them
        4. no of 2x3 rectangles are (k-1)*(k-2) and no of 3x2 rectangles are (k-2)*(k-1)
        5. ans= total possibility - no of attack sites
        6. ans= (k*k)(k*k-1)/2 -2*((k-1)*(k-2)+(k-2)*(k-1)) 
        7. store k as long long int to prevent integer overflow 
    */ 
#include <bits/stdc++.h>
using namespace std;
#define ll  long long int
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    for(ll k=1;k<=n;k++){
       cout<<((k*k)*(k*k-1))/2 -4*(k-1)*(k-2)<<endl; 
    }

  return 0;
}