#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int t,m,n,k,x,y;
int cnt=0;

int arr[51][51] = {0};

void check(int row, int col){
    arr[row][col] =0;
    if(row-1>=0 && arr[row-1][col] == 1){
        check(row-1, col);
    }
    if(col-1>=0 && arr[row][col-1] == 1){
        check(row, col-1);
    }
    if(row+1<=n-1 && arr[row+1][col] == 1){
        check(row+1, col);
    }
    if(col+1<=m-1 && arr[row][col+1] == 1){
        check(row, col+1);
    }
}

void print(){
    cout << " ===============================================\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> t;
    while(t--){
        cnt=0;
        fill(&arr[0][0], &arr[50][50], 0);
        cin >> m >> n >>k;
        
        while(k--){
            cin >> y >> x;
            arr[x][y] = 1;
        }
        //print();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0) continue;
                else{
                    check(i ,j);
                    //print();
                    cnt++;
                    //cout << cnt << '\n';
                }
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}