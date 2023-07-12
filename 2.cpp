#include<iostream>
using namespace std;
int main(){
    
    
   // int float 9 , double , string , getline, char 
  //  long long 18  x = 15000000;
    //string s1 , s2;

    //cin>> s1 >>s2;
    //cout<<s1<<" "<<s2;
    //string str;
    /*getline(cin , str);
    cout<<str<<endl;
    char g = 'g';
    cout<<g<<endl;
    //if else statement
    int age;
    cin>>age;
    if(age>=18)
    {
    cout<<"You are an adult"<<endl;
    }
    else
    {
    cout<<" you are not an adult";
    }*/
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F"<<endl;



    }else if( marks <= 44)
    {
        cout<<"E"<<endl;        
    }
    else if( marks<=49){
        cout<<"D"<<endl;
    }
    else if( marks <= 59)
    {
        cout<<"C"<<endl;        
    }
    else if( marks <= 79)
    {
        cout<<"B"<<endl;        
    }
    else if( marks <=100 )
    {
        cout<<"A"<<endl;        
    }
    return 0;


}