#include<iostream>
using namespace std;
// parameterised
void f(int i , int sum){
    if(i<1) 
    {
        cout<<sum;
        return;
    }
    f(i-1 , sum +i);

}
//functional we wan tthe function to give us back some value
 int sum3(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return  (n + sum3(n-1));
 }

/*void c(int i , int fact){
    if(i<1){
        cout<<fact<<endl;
        return; 
    }
    c(i-1 , fact*(fact-1));
    
}PROBLEM IN CODE*/
int fact(int n){
    if(n==0)
    return 1;
    else return n*fact(n-1);
}
int fibo(int n){
    if(n==0) return 0;
    else if(n==1)
    return 1;
    if (n>1 )
    return fibo(n-1) + fibo(n-2);  
}

void sum2(int i , int sum){

    if(i<1) {
    cout<<sum;
    return;
    }
    sum2(i-1 , sum +i);
    


}

int main(){
    int n;
    cin>>n;
    //f(n , 0);
   int fact2 =  fact(5);
   cout<<fact2<<endl;
   int fibo2 = fibo(5);
   cout<<fibo2<<endl;
   sum2(3,0);
   cout<<endl;
   f(3,0);
  cout<<endl;
   int s = sum3(3);
   cout<<s;
   cout<<endl;
   //c(5,5);
    

}