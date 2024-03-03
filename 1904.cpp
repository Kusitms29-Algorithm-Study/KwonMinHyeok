#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    long long int arr[N];
    arr[0]=1; arr[1]=2;
    for(int i =2;i<N;i++){
        if( arr[i-2] + arr[i-1] >= 15746) arr[i] = (arr[i-1] + arr[i-2]) % 15746;
        else arr[i] = arr[i-2] + arr[i-1];        
    }
    cout << arr[N-1];
    return 0;
}