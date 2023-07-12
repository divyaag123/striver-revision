#include<iostream>
using namespace std;
void printName(string name){
    cout<<"Hey "<<name<<endl;

}
int sum(int num1 , int num2){
    int num3 = num1 + num2;
    return num3;
}
int max(int num1 , int  num2){
    if(num1>num2)
        return num1;
    else 
        return num2;
}
//pass by value;

void doSomething(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
/*void doSomething(string &s){
    s[0] ='t';
    cout<<s;

}*/
int main(){
    
    /*printName("Divya ");

    string name2;
    cin>>name2;
    printName(name2);
    */

    int num1 , num2 ;
    cin>>num1 >>num2;
    /*int num3 = num1 + num2;
    cout<<num3;
    */
   int res = sum(num1 , num2);
   cout<<res<<endl;

   int s = max(num1 , num2);
   cout<<s<<endl;
    int num4 ;
    cin>>num4;
    
    //string s = "raj";
   doSomething(num4);
   cout<<num4<<endl;




    return 0;


}