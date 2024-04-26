#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> a;
vector<int> b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    
    int i=n;
    int temp;
    while(i--){
        cin >>temp;
        a.push_back(temp);
    }
    while(n--){
        cin >>temp;
        b.push_back(temp);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int result=0;
    for(int i=0;i<a.size(); i++){
        result += a[a.size()-1 - i]*b[i];
    }
    
    cout << result;
    
    
    return 0;
}