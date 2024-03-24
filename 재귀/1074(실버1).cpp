#include <iostream>
#include "cmath"

using namespace std;

int r,c;

void z(int n, int row, int col, int startValue){
    int temp = pow(2,n-1);
    if(temp*temp<=2){
        if(r==row && c == col) cout << startValue;
        else if (r == row && c == col+1) cout << startValue +1;
        else if (r == row+1 && c == col) cout << startValue +2;
        else if (r == row+1 && c == col+1) cout << startValue +3;
    }
    else{
        if(r<row+temp && c<col+temp) z(n-1, row,col,startValue);
        else if(r<row+temp && c>=col+temp) z(n-1, row, col+temp, startValue+(temp*temp));
        else if(r>=row+temp && c<col+temp) z(n-1, row+temp, col, startValue+(temp*temp*2));
        else if(r>=row+temp && c>=col+temp) z(n-1, row+temp, col+temp, startValue+(temp*temp*3));
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n >> r >> c;
    
    z(n,0,0,0);
    
    return 0;
    
}