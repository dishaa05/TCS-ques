//Problem 3: Maximum Subarray Sum Problem 
//Description: Given an integer array nums ,
// find the contiguous subarray with the largest sum and return that sum.

#include<iostream>
#include<vector>

using namespace std;

int main() {

    int N;

    cout << "N = ";
    cin >> N;

    vector<int> nums(N);

    for(int i = 0; i < N; i++) {
        cout << "nums[" << i << "] = ";
        cin >> nums[i];
    }

    int maxSum = nums[0];

    for(int i = 0; i < N; i++) {

        int sum = 0;

        for(int j = i; j < N; j++) {

            sum += nums[j];

            if(sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum;

    return 0;
}