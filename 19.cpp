#include<iostream>//revision of basic recursion
using namespace std;
int count =0;
int sum =0;
void f(int n){
    if(n<1)
    return ;
    else{
       cout<<n;
       n--;
       f(n);
    }
}
void g(int n){
    if(count== n) return;
    else{
         count++;
        cout<<count<<" ";
       
        g(n);
    }
   

}

void sum_fun(int i , int n){
    if(n<1){
        cout<<sum;
    }
    else{
        i--;
        sum_fun( i , sum + i);
    }

  


}
int main(){
    f(4);
    cout<<endl;
    g(5);
    cout<<endl;
    sum_fun(5,5);



}