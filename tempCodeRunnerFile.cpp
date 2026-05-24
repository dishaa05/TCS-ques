#include<iostream>
#include<vector>

using namespace std;
int main(){
int N;
cin>>N;

vector<int> nums(N);

for(int i=0; i<N; i++) {
    cin>>nums[i];
}
int k;
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
cout<<count;
return 0;
}