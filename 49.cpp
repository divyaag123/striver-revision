#include<iostream>
#include<vector>
using namespace std;
int main(){
//let's do some coding
//lets iterate over a simple loop
int n;
cin>>n;
vector<int>v;

for(int i = 0 ; i<n ; i++){
    cin>>v[i];
}


for(auto it : v){
    cout<<it<<endl;
}
}