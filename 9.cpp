#include<iostream>
using namespace std;
//pattern solving


void print(int n){
// pattern one
for(int i=0; i<n;i++){
    for(int j =0 ; j<n; j++){
        cout<<"*";

    }
    cout<<endl;
}
}




int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        print(n);

    }




}



