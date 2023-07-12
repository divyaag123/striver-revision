#include<iostream>
using namespace std;
//wap to find the largest element in an array
int main(){
    // to find the largest element in an array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int  i=0 ; i<n ; i++){
        if(arr[i] >largest)
        largest = arr[i];
    }
    cout<<largest<<endl;
}