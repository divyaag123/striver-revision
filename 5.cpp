#include<iostream>
using namespace std;
int main(){
   /*double  arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3]<<endl;
    arr[3]+=10;
    cout<<arr[3];
    */
    // address array is stired in consecutive loc 
    //but we don't know that where would be the statrting location
    //2d array
    int a[3][5];
     a[1][3] = 78;
    cout<<a[1][2]; //will print garbage value;
    return 0;



    
}