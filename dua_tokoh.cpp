#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if (arr[i]==x){
            cout<<"BHASHA"<<endl;
            return i;
        }else {
            cout<<"TIDAK DITEMUKAN"<<endl;
        }
    }
    return -1;
}

int binarySearch(int arr[], int m, int x) {
    for(int i=0; i<m; i++) {
        if (arr[i]==x){
            
        }
    }
}

int main () {
    int n, m, x;
    cin>>n>>m;

    int array_A[n];
    int array_B[m];

    for(int i=0; i<n; i++){
        cin>>array_A[i];
    }

    for(int i=0; i<m; i++){
        cin>>array_B[i];
    }

    cin>>x;

    int index_A=linearSearch(array_A, n, x);
    int index_B=binarySearch(array_B, m, x);

    return 0;
}

