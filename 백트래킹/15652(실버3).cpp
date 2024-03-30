#include <iostream>

using namespace std;

int n,m;
int check[8] ={};

void fun(int* arr, int index, int start){
    if(index == m){
        for(int a=0;a<m;a++){
            cout << arr[a] << " ";
        }
        cout << "\n";
        return ;
    }
    
    for(int i=start;i<=n;i++){
        if(!check[i-1]){
            arr[index] = i;
            //check[i-1] =1;
            fun(arr,index+1,i);
            check[i-1] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    
    int arr[m];
    
    fun(arr,0, 1);
    
    return 0;
}