//Problem 5: Find Highest Scorer.
// Description Given two arrays score (integers) and names (strings), 
//where each names[i] corresponds to score[i] ,
// print the name of the candidate with the highest score.

#include<iostream>
#include<vector>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> score(N);
    vector<string> names(N);

    // Input scores
    for(int i = 0; i < N; i++) {
        cin >> score[i];
    }

    // Input names
    for(int i = 0; i < N; i++) {
        cin >> names[i];
    }

    int maxIndex = 0;

    // Find highest score
    for(int i = 1; i < N; i++) {

        if(score[i] > score[maxIndex]) {
            maxIndex = i;
        }
    }

    // Print name
    cout << names[maxIndex];

    return 0;
}