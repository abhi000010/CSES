#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//we will make it for general purpose so that we can also print the board if we want

bool safe_to_place(int row,int column,vector<string> board,int n){
int r=row;
int c=column;
// to check for left row
while(c>=0){
if(board[r][c]=='Q'){return false;}
  c--;
}
r=row;
c=column;
//for left upper diagnol
while(r>=0&&c>=0){
if(board[r][c]=='Q'){return false;}
  r--;
c--;
}
r=row;
c=column;
while(r>=0&&r<8&&c>=0){
  if(board[r][c]=='Q'){return false;}
  r++;
  c--;
}

return true;
}

void solve(int column,vector<string>& board,vector<vector<string>>& ans,int n){
if(column==n){
  ans.push_back(board);
  return;
}
for(int row=0;row<n;row++){
if(safe_to_place(row,column,board,n)&&board[row][column]!='*'){
  //then we can place the queen
  board[row][column]='Q';
  solve(column+1,board,ans,n);
  //make it free again for other possibilities
  board[row][column]='.';
}
}
}
int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);


    vector<string> board(8);
    vector<vector<string>> ans;
    for(int i=0;i<8;i++){
      cin>>board[i];
    }
    
    solve(0,board,ans,8);
    cout<<ans.size()<<'\n';
    
  return 0;
}