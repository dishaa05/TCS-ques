//Problem 1: Subarrays with Given Sum Problem 
//Description :Given an array of integer nums and an integer k , 
//return the total number of subarrays whose sum equals k .

#include<iostream>
#include<vector>

using namespace std;
int main(){
int N;
cout<<"N=";
cin>>N;

vector<int> nums(N);

for(int i=0; i<N; i++) {
    cout<<"nums["<<i<<"]=";
    cin>>nums[i];
}
int k;
cout<<"k=";
cin>>k;

int count =0;
for(int i=0; i<N; i++){
    int sum=0;
    for(int j=i; j<N; j++){
        sum+=nums[j];
        if(sum==k){
            count++;
        }
    }
}
cout<<"Number of subarrays with sum "<<k<<" is: "<<count<<endl;
return 0;
}


