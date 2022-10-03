//N Queen problem 

//The n-queens puzzle is the problem of placing n queens on a (n*n) chessboard such that no two queens can attack each other.
//Given an integer n, find all distinct solutions to the n-queens puzzle. 

#include<bits/stdc++.h>
using namespace std;

void addSolution(vector<vector<int> > &board , vector<vector<int> > &ans , int n){
    vector<int> temp;
    
    for(int i = 0 ;i <n ; i++){
        for(int j = 0 ; j< n ; j++){
            temp.push_back(board[i][j]);
        }
        ans.push_back(temp);
        temp.clear();
    }
    
}
bool isSafe(int row ,int col ,vector<vector<int> > &board , int n ){
    int x = row;
    int y = col;
    while(y>= 0){
        if(board[x][y] == 1){
            return false;
            
        }
        y--;
    }
    x= row;
    y = col;
    while(y>=0 && x>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    x= row; 
    y= col;
    while(y>=0 && x<n){
        if(board[x][y]==1){
            return false;
        }
        x++;
        y--;
    }
    return true;
}

void nQueen(int col , vector<vector<int> > &ans , vector<vector<int> > &board , int n){
    if(col == n){
        addSolution(board , ans , n);
        return ;
    }
    
    for(int row= 0 ; row< n; row++){
        
        if(isSafe(row, col , board, n)){
            board[row][col] = 1;
            nQueen(col+1 , ans, board, n);
            board[row][col] = 0 ;
            
        }
    }
}

int main(){
    int n ;
    cout<<"Enter the number of queens: "<<endl;
    cin>>n;
    
    vector<vector<int>> board(n,vector<int>(n,0));
    vector<vector<int>> ans;
    
    nQueen(0 , ans , board , n);
    
    
    if(ans.size() == 0){
        cout<<"not possible"<<endl;
    }
    else{
        for(int i = 0 ; i<ans.size(); i++){
            cout<<"[";
            for(int j= 0;j<ans[i].size(); j++){
                cout<<ans[i][j]<<" ";
            }
                
            cout<<"] "<<endl;
            if(i==3){
                cout<<endl;
            }
        }
        cout<<endl;
    }
    return 0 ;
}
