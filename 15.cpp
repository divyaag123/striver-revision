#include<iostream>
using namespace std;
int swap(int i , int j){
    int temp = i;
    i = j;
    j=temp;
}
void selectionSort(int a[] , int n){
   
    for(int i=0 ; i<n-2 ; i++){
        int min = i;
        for(int j = i ; j<=n-1; j++){
           
            if(a[j] <a[min]){
            min =j;
            }
          

            

        }
        int temp ; a[min];
        a[min] = a[i];
        a[i] = temp;

    }
}
int main(){
   
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    selectionSort(a,n);    
    for(int i= 0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }

}