//Problem 2: Calculate Shipping Cost Problem 
//Description: Calculate the total shipping cost based on weight and distance.

#include<iostream>
using namespace std;
int main(){
    int weight;
    int distance;
    double totalCost;

    cout<<"Weight(in kg)=";
    cin>>weight;

    cout<<"Distance(in km)=";
    cin>>distance;

    totalCost= 5+ (weight*2)+(distance *0.5/10);
    cout<<"Total shipping cost is: "<<totalCost<<endl;
return 0;
}