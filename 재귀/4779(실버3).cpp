#include <iostream>
#include <cmath>

using namespace std;

void draw(int n){
    if(n==0) cout << '-';
    else{
        draw(n-1);
        for(int i =0;i<pow(3,n-1);i++) cout << " ";
        draw(n-1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while(cin >> n){
        draw(n);
        cout << '\n';
    }
    
    return 0;
}