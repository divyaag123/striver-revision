#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    if(age<18)
        cout<<"not eligible for job";
    else if(age<=57){
        cout<<"Eligible for the job";
        if(age>=55){
            cout<<" , but retirement soon";
        }
    }
    
    else 
        cout<<" retirement time";

}