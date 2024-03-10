#include <iostream>

using namespace std;

int pibonachi(int n){
    if(n <= 2) return 1;
    return pibonachi(n-1) + pibonachi(n-2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    if(n == 0) cout << 0;
    else if(n ==1) cout << 1;
    else cout << pibonachi(n);
    
    return 0;
}