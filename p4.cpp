//Problem 4: Generate All Combinations 
// Description: Given an array of integers nums , 
// print all possible combinations of the elements.
// Each combination should include any subset of elements, from the empty set to the entire array.

#include<iostream>
#include<vector>

using namespace std;

void combination(vector<int>& nums, vector<int>& ans, int index) {

    // Print subset
    if(index == nums.size()) {

        cout << "{ ";

        for(int x : ans) {
            cout << x << " ";
        }

        cout << "}" << endl;

        return;
    }

    // Include element
    ans.push_back(nums[index]);

    combination(nums, ans, index + 1);

    // Remove element
    ans.pop_back();

    // Exclude element
    combination(nums, ans, index + 1);
}

int main() {

    int N;
    cin >> N;

    vector<int> nums(N);

    for(int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    vector<int> ans;

    combination(nums, ans, 0);

    return 0;
}