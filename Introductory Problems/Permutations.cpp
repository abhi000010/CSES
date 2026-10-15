/*
1. print even numbers firs then odd numbers as difference is greater than 1 always 
  */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // enter the output
int n ;
cin >>n; 
if(n==1){
    cout<<"1";
    return 0;
}
if(n<=3){
    cout<<"NO SOLUTION ";
    return 0;
}

for(int i=2;i<=n;i+=2){
    cout<<i<<" ";
}
for(int i=1;i<=n;i+=2){
    cout<<i<<" ";
}

    return 0;
}
