#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[20]={};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);
    // for(int i : arr) cout << i << " ";
    // cout << '\n';
    if(arr[0] != 1){
        cout << 1; 
        return 0;
    }
    
    int sum=0;
    for(int i=1;i<n;i++){
        sum += arr[i-1];
        if(arr[i] > sum+1){
            cout << sum+1;
            return 0;
        }
    }
    
    cout << sum+arr[n-1]+1;
    
    return 0;
}