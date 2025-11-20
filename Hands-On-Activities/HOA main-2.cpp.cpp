#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int SIZE = 100;
    int votes[SIZE];
    int counts[6] = {0}; // index 1..5 used

    srand((unsigned)time(NULL));

    // generate random votes 1..5
    for (int i = 0; i < SIZE; i++) {
        votes[i] = rand() % 5 + 1;
    }

    // print original (formatted)
    cout << "Original votes:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << votes[i] << ' ';
        if ((i + 1) % 20 == 0) cout << '\n';
    }
    cout << "\n\n";

    // sort
    insertionSort(votes, SIZE);

    // print sorted (formatted)
    cout << "Sorted votes:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << votes[i] << ' ';
        if ((i + 1) % 20 == 0) cout << '\n';
    }
    cout << "\n\n";

    // count
    for (int i = 0; i < SIZE; i++) {
        counts[votes[i]]++;
    }

    // show counts
    cout << "Vote counts:\n";
    cout << "Candidate 1: STEPHEN CURRY | " << counts[1] << '\n';
    cout << "Candidate 2: LEBRON JAMES | " << counts[2] << '\n';
    cout << "Candidate 3: RAY ALLEN | " << counts[3] << '\n';
    cout << "Candidate 4: KEVIN DURANT | " << counts[4] << '\n';
    cout << "Candidate 5: KYRIE IRVING | " << counts[5] << '\n';

    // winner
    int winner = 1;
    for (int i = 2; i <= 5; i++) {
        if (counts[i] > counts[winner]) winner = i;
    }
    cout << "\nWinner: Candidate " << winner << '\n';

    return 0;
}

