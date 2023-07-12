#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<map>
using namespace std;
//--------------learning PAIRS----------------
void explainpair(){
    pair<int , int>p = {2 , 3};
    cout<<p.first<<p.second<<endl;
    pair<int , pair<int , int>> s = {1 ,{4,5}};
    cout<<s.first<<" "<<s.second.first<<"  "<<s.second.second<<endl;
    pair<int , int> arr[] = { {1,2}, {2,3}, {3,4}};
    cout<<arr[1].second<<endl;



}
//---------learning VECTORS-----------------
void explainVectors(){
    vector<int>v;

    v.push_back(3);
    cout<<v[0]<<endl;
    v.emplace_back(4);//emplaceback is faster than push back
    vector<pair<int,int>>vec = {{1,2},{3,4},{5,6}};
    //for printing vector of pairs;
    for(auto d : vec ){
        cout<<d.first<<" "<<d.second<<endl;
    }
    //copy of vector
    vector<pair<int , int>> v2(vec);
    for(auto g : v2){
        cout<<g.first<<g.second<<endl;
    }
    vector<int>c(5,100);
    for(auto it : c){
        cout<<it<<endl;
    }
    //another method to print
    vector<int>::iterator it = c.begin();
    it++;
    cout<<*(it)<<endl;
    //another method to print
    for(auto it = c.begin(); it!=c.end();it++){
        cout<<v.back()<<" ";

    }
    vector<int>z = {1 ,2 , 4, 5,6};
    //erase function
    z.erase(z.begin()+1 );
    for(auto f : z){
        cout<<f<<endl;
    }

    z.erase(z.begin()+ 2 , z.begin() + 4);//erase(start add , end add)
    for(auto f : z){
        cout<<f<<endl;
    }

    

    //insert function
    vector<int>x(2,100);
    //{100 , 100}
    x.insert(x.begin() ,  300 );
    //{300,100,100}
    x.insert(x.begin()+1,2 ,10);
    //{300, 10 , 10 ,100,100}
    vector<int>copy(2,50);
    //{50 ,50}



    x.insert(x.begin() , copy.begin() , copy.end());
    cout<<"x size "<<x.size()<<endl;
    for(auto f : x){
        cout<<f<<" ";
    }
    cout<<endl;
    x.pop_back();
    for(auto f : x){
        cout<<f<<" ";
    }
    //-------------SWAPPING OF VECTORS--------------
    vector<int>h ={2 ,3,4};
    vector<int>m = {5 ,6 ,7};
    m.swap(h); 
    for(auto f : m){
        cout<<f<<" ";
    }
    for(auto f : h){
        cout<<f<<" ";
    }



}
void explainlist(){
    //similar to vector but it gives front operation also
    //is a conttainer dynamic in nature
    //internal opertaions are done through doublylinked list 
    //so pushfront operation is faster than insert function in vector
    
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(3);
    //functions are similar to vectors

}
void explainDeque(){
    //similar to list and vector
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
    //rest functions are same as vector
    //begin , end, rbegin, rend,clear,size , swap



}
void explainStack(){
    stack<int>st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.emplace(5);//similar to push_back {5,3,2,1}
    cout<<st.top();//prints 5
    st.pop();//st looks like {3,2,1}
    cout<<st.top();//3
    cout<<st.size();//4
    cout<<st.empty();
    stack<int>st1 , st2 ;
    st1.swap(st2); 
    // all operations are O(1)



}
void explainQueue(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(4);//{1 , 2, 4}
    q.back() +=5;
    cout<<q.back(); //prints 9
    cout<<q.front();//prints 1
    q.pop();//{2,9}
    cout<<q.front();// prints 2
    //size swap empty same as stack 

}
void explainPQ(){
    //the largest element stays at the top
    // tree data structure is maintained
    //also called as max heap
    priority_queue<int>pq;
    pq.push(1);
    pq.push(2);
    pq.push(5);
    pq.push(10); // {10 , 5  , 2 , 1}
    pq.top(); // 10
    pq.pop();// {5 , 2 ,1}
    cout<<pq.top();// prints 5
    // size swap empty function are same as others

    //MINIMUM HEAP
    priority_queue<int , vector<int> , greater<int>> pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}
    cout<<pq.top(); // prints 2
    //push in O(logn)
    //top in O(1)
    //pop in O(logn)




    




}
void explainSet(){
        //  A set is a container which stores unique value in sorted order
        // a tree is maintained in a set to store elements

    set<int>s;
    s.insert(1);//{1}
    s.insert(2);//{1,2}
    s.insert(2);//{1,2}
    s.emplace(3);//{1,2,3}
    s.insert(4);
    s.insert(5);//{1,2,3,4,5}
    auto it = s.find(3);
    auto it = s.find(6); // return iterator after end
    s.erase(5);
    int cnt = s.count(1);
    auto it = s.find(3);
    s.erase(it); 
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1 , it2);//{1,4,5}
    auto it = s.lower_bound(2);
    auto it = s.upper_bound(3);
// everything happens in O(logn)


}
void explainMultiset(){
    multiset<int>m;
    m.insert(1);
    m.insert(1);
    m.insert(1);//{1,1,1}
    //erase function when element
    m.erase(1); // erases all elements
    m.erase(m.find(1)); // only a single element will be erased
    //m.erase(m.find(1) , m.find(1)+2); //


     

}
void explainUnorderedSet(){
    // all operations are similar to set
    //but lower boind and upper bound does not work
    //stores unique element in any order
    unordered_set<int>st;
}
void explainMaps(){
    // map stores unique key in sorted order
    map<int, int>mpp;
    map<int , pair<int , int>>mpp;
    map<pair<int, int> ,int>mpp;
    //mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp[1] = 2;
    //mpp[{2,3}] = 10;
    for(auto it :mpp){
        cout<<it.first<<" "<<it.second<<endl;

    }
    cout<<mpp[1];
    cout<<mpp[5]; // 5 does not exist it returns 0 or null
    auto it = mpp.find(3);
   // cout<<*(it).second;
   auto it = mpp.find(5);// points to a  position after the end
   auto it = mpp.lower_bound(2);
   auto it = mpp.upper_bound(3);
   //earse swap size empty works same as above



}
void explainMultimap(){

}
void explainUnorderedMap(){
    // same as unordered and set difference

}
bool comp(pair<int, int> p1 , pair<int , int>p2){
    if(p1.second<p2.second){
        return true;
    }
    else if (p1.second == p2.second){
        if(p1.first>p2.second) return true;

    }
    return false;
}
//void explainExtra(int a[] , int n){
  //  sort(a+2, a+4);
    //sort(a, a+n , greater<int>);

//}
bool comaparator(pair<int, int>p1 , pair<int, int>p2){
    if(p1.second < p2.second) return true;
    else if(p1.second == p2.second){
        if(p1.first>p2.second)
        return true;
        else return false;
    }
    else 
    return false;

}
int main(){
     explainpair();
     explainVectors();  





    return 0;

}