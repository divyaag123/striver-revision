#include<iostream>
using namespace std;

void print1(int n){
// pattern one
for(int i=0; i<n;i++){
    for(int j =0 ; j<n; j++){
        cout<<"*";

    }
    cout<<endl;
}
}


void print2(int n){
    for(int i=0 ; i<n ; i++){
        for(int j =0 ; j <=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
void print3(int n){
    for(int i=0 ; i<n ; i++){
        for(int j =0 ; j <=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }

}
void print4(int n){
    for(int i=0 ; i<n ; i++){
        for(int j =0 ; j <=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }

}
void print5(int n){
    for(int i=0 ; i<n ; i++){
        for(int j = 0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void print6(int n){
    for(int i=0 ; i<n ; i++){
        for(int j = 0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }

}
void print7(int n){
    for(int i= 0 ; i<=n ; i++){
        for(int j = 0 ; j<n-i; j++){
            cout<<" ";

        }
        for(int j=0 ; j<2*i-1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    }
void print7b(int n){
    for(int i= 0 ; i<n; i++){
        //spaces
        for(int j = 0 ; j<n-i-1; j++){
            cout<<" ";

        }
        //stars
        for(int j=0 ; j<2*i+1 ; j++){
            cout<<"*";
        }
        //spaces
        for(int j = 0 ; j<n-i-1; j++){
            cout<<" ";

        }

        cout<<endl;
    } 
    }
void print8(int n){
    for(int i=0 ; i<n ; i++){
        //spaces
        for(int k =0 ;k<i ; k++){
            cout<<" ";
        }
        //for printing stars
        for(int j =0 ; j<2*(n-i)-1; j++){
            cout<<"*";
        }
        //spaces
        for(int k =0 ;k<i ; k++){
            cout<<" ";
        }
    
        cout<<endl;

    }
    ;
}

void print8b(int n){
    for(int i=0 ; i<n-1 ; i++){
        //spaces
        for(int k =0 ;k<i+1 ; k++){
            cout<<" ";
        }
        //for printing stars
        for(int j =0 ; j<2*(n-1-i)-1; j++){
            cout<<"*";
        }
        //spaces
        for(int k =0 ;k<i+1 ; k++){
            cout<<" ";
        }
    
        cout<<endl;

    }
    cout<<endl;
}
void print10(int n){
    // for printing stars
     
    }








int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<"pattern 1"<<endl;
        print1(n);
        cout<<"pattern 2"<<endl;
        print2(n);
        cout<<"pattern 3"<<endl;
        print3(n);
        cout<<"pattern 4"<<endl;
        print4(n);
        cout<<"pattern 5"<<endl;
        print5(n);
        cout<<"pattern 6"<<endl;
        print6(n);
        cout<<"pattern 7"<<endl;
        print7(n);
        cout<<"pattern 8"<<endl<<endl;
        print8(n);
        cout<<"pattern 9"<<endl;
        print7(n);
        print8(n);
        cout<<"pattern barfi"<<endl;
        print7b(n);
        print8b(n);
        cout<<"pattern 10"<<endl;
        print10(10);




    }

}