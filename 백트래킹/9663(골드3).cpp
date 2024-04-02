#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> vec;
int cnt=0;

bool check(int col, int row){
    for(int i =0;i<row;i++){
        if(vec[i] == col || vec[i] - (row-i) == col || vec[i] + (row-i) == col){
            return false;
        }
    }
    return true;
}

void find(int row){
    if(row == n){
        cnt++;
        return;
    }
    
    for(int i=0;i<n;i++){
        if(check(i, row)){
            vec.push_back(i);
            find(row+1);
            vec.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    find(0);
    
    cout << cnt;
    
    return 0;
}