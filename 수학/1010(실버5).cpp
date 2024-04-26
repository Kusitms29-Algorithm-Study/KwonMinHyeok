#include <iostream>

using namespace std;

long n,m,t;
long result=1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> t;
    
    while(t--){
        cin >> n >> m;
        
        if(m/2 < n) n=m-n;
        
        long i=n;
        while(i--){
            result *= m--;
        } 
        
        while(n--){
            result /= n+1;
        }
        
        cout << result << '\n'; 
        result =1;
    }

        
    return 0;
}
