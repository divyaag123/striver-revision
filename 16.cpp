#include<iostream>
using namespace std; 
int count =0;
void print(){
    if(count ==3)
    return;
    cout<<count<<endl;
    count++;
    print();

}

void name(int i , int n){
    
    if(i>n){
  
    return;
    }
    cout<<"DIVYA" <<endl;
    i++;
    name(i ,n);
    

    

}
void counting(int i , int n){
    if(i>n) return ;
    cout<<i<<endl;
    counting(i+1 , n);
}
void reverse(int n , int i ){
    if(n<i)return ;
    cout<<n<<endl;
    reverse(n-1 , i);
}
//backtrack
void abd(int i ,int n ){
    if(i<1)return;
    abd(i-1,n);
    cout<<i<<endl;
}
//backtrack
void dgh(int i , int n){
    if(i<0) return ;
    dgh(i-1 , n);
    if(i!=n){
    cout<<n-i<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    
    
    dgh(4,4);
}





