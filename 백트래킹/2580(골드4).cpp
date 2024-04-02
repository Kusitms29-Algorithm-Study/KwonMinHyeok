#include <iostream>
#include <vector>

using namespace std;

int arr[9][9];
vector<pair<int,int>> vec;


bool check(pair<int,int> a, int num){
    for(int i =0;i<9;i++){
        if(arr[a.first][i] == num) return false;
    }
    
    for(int i =0;i<9;i++){
        if(arr[i][a.second] == num) return false;
    }
    
    int starow, stacol;
    starow = (a.first/3) * 3;
    stacol = (a.second/3) * 3;
    
    for(int i = starow; i<starow+3;i++){
        for(int j=stacol; j<stacol+3;j++){
            if(arr[i][j] == num) return false;
        }
    }
    
    return true;
}

void fill(int index){
    if(index == vec.size()){
        
        for(int i =0;i<9;i++){
            for(int j =0;j<9;j++){
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
        exit(0) ;
    }
    
    
    auto a= vec[index];
    for(int i =1;i<=9;i++){
        if(check(a, i)){
            arr[a.first][a.second] = i;
            fill(index+1);
            arr[a.first][a.second] = 0;
        }
    }
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(int i =0;i<9;i++){
        for(int j =0;j<9;j++){
            cin >> arr[i][j];
            if(arr[i][j] == 0) vec.push_back({i,j});
        }
    }
    
    fill(0);
    
    return 0;
}
