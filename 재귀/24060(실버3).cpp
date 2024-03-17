#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;

void mergeSort(int* arr, int* sortedArr, int l, int r){
    if(l<r){
        int index = (r+l)/2;
        mergeSort(arr,sortedArr, l, index);
        mergeSort(arr, sortedArr, index+1, r);
        int left=l, right = index+1, sindex=l;
        while(left <= index && right <= r){
            if(arr[left] < arr[right]) sortedArr[sindex++] = arr[left++];
            else sortedArr[sindex++] = arr[right++];
        }
        if(left > index) while(right <= r) sortedArr[sindex++] = arr[right++];
        if(right > r) while(left <= index) sortedArr[sindex++] = arr[left++];
        
        for(int i =l; i<=r; i++) {arr[i] = sortedArr[i]; vec.push_back(arr[i]);}
    }     
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,K, temp;
    cin >> N >> K;
    int arr[N];
    int sortedArr[N];
    
    for(int i =0;i<N;i++){
        cin >>temp;
        arr[i] = temp;
    }
    mergeSort(arr, sortedArr, 0, N-1);
    if(K > vec.size()) cout << -1 << '\n';
    else cout << vec[K-1] << '\n';
    
    return 0;
}