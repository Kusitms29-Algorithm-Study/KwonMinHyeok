#include <iostream>

using namespace std;

long factorial(long a){
    if(a == 1) return a;
    return a * factorial(a-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long N;
    cin >> N;
    
    if(N == 0) cout << 1;
    else cout << factorial(N);

    return 0;
}