#include<iostream>

using namespace std;
    void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7, 1};
    sort(arr, arr+8);

    print(arr, 8);
    return 0;
}