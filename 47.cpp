#include<iostream>
#include<bits/stdtr1c++.h>
#include<fstream>
using namespace std;
int main(){
    string st = "Divya";
    // creating a file in c++
    //opening file using constructor
    ofstream out("abc.txt");
    out<<st;
    out.close();

     return 0;

}