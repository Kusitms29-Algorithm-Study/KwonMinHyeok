#include <iostream>

using namespace std;

int t,n;

int zero[41]={};
int one[41]={};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    zero[0] = 1; zero[1]=0;
    one[0] = 0; one[1] =1;
    
    for(int i =2;i<41;i++){
        zero[i] = zero[i-1] + zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }
    
    cin >> t;
    while(t--){
        cin >> n;
        cout << zero[n] << " " << one[n] << '\n';
    }
    
    return 0;
}