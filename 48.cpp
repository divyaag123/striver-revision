#include<iostream>
#include<vector>
using namespace std;

int main(){
 // practise hashing
 int n;
 cin>>n;
 int arr[ n];
 for(int i=0; i<n ; i++){
    cin>>arr[i];


 }
 // precompute 
 int hash[13] = {0};
for(int i=0 ; i< n ; i++){
    hash[arr[i]]++;

}





 int q;
 cin >>q;
 while(q--){
    int num ;
    cin>>num ;
    cout<<hash[num]<<endl;
   
 }




}