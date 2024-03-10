#include <iostream>
#include <string>

using namespace std;

int a;

int recursion(string& s, int l, int r){
    a++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(string& s){
    return recursion(s, 0, s.length()-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while(n--){
        a=0;
        string s;
        cin >> s;
        
        cout << isPalindrome(s) << " " << a << '\n';
    }
    
    
    return 0;
}