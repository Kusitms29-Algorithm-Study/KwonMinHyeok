#include <iostream>

using namespace std;

int dp[1001] ={};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    dp[1]=1; dp[2]=0; dp[3]=1; dp[4]=1;
    
    int n;
    cin >> n;
    
    for(int i=5;i<=n;i++){
        if(dp[i-1] ==0 || dp[i-3] == 0 || dp[i-4] ==0){
            dp[i] = 1;
        }else dp [i] =0;
    }
    if(dp[n]) cout << "SK";
    else cout << "CY";
 
    
    return 0;
}