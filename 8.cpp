#include<iostream>
using namespace std;
void doSomething(int arr[] , int n){
    arr[0] += 100;
    cout<<"Value of function"<<arr[0]<<endl;
}
int main(){
    int arr[5];
    int n= 5;
    for(int i=0 ; i<5 ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i];
    }
    doSomething(arr,n);
    cout<<"value inside int main"<<arr[0]<<endl;

    // hece array is always passed by reference
    //vector, lists , maps are passed wit & operator
    return 0;



}