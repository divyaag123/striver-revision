#include<iostream>
using namespace std;
int main(){
    //extraction of digits
    // to count number od digits in a number
    int t;
    cin>>t;
    int n;
    while(t--){
      
         cin>>n;
        int count = 0;
      
         while(n>0){
            count += 1;
            n = n/10;
         }
         cout<<count<<endl;
    }
    
    return 0;




}