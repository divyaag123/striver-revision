#include<iostream>
using namespace std;
int main(){
    float month1 = 100;
    float month2 = 220;
    float month3 = 300;
    float month4 = 0;
    float month5 = 200;
    float month6 = 250;
    float total = month1 + month2 + month3+month4 + month5+month6;
    float average = total / 6;
    float inTwoyears = average *24;
    cout<<"total"<<total<<endl;
    cout<<"inTwoYears"<<inTwoyears<<endl;
    cout<<"average"<<average<<endl;
    float months[6] = {100 , 220 , 300 , 0 ,200 , 250};
    float sum = months[0] + months[1] + months[2]+ months[3] +months[5] +months[6];
    float average1 = sum /6;
    float inTwoYears = average1*24;
    cout<<"total"<<total<<endl;
    cout<<"inTwoYears"<<inTwoYears<<endl;
    cout<<"average"<<average1<<endl;



    

    



}