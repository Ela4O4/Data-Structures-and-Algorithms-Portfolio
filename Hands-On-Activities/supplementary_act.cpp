#include <iostream>
using namespace std;

#define R 4
#define C 4

int countPaths(int cost, int m, int n, int mat[R][C]) {
    if (cost < 0) return 0;
    if (m == 0 && n == 0) return (mat[0][0] == cost);
    if (m == 0) return countPaths(cost - mat[m][n], m, n - 1, mat);
    if (n == 0) return countPaths(cost - mat[m][n], m - 1, n, mat);

    return countPaths(cost - mat[m][n], m - 1, n, mat) +
           countPaths(cost - mat[m][n], m, n - 1, mat);
}

int main() {
    int mat[R][C] = {
        {4, 7, 1, 6},
        {6, 7, 3, 9},
        {3, 8, 1, 2},
        {7, 1, 7, 3}
    };
    int cost = 25;

    cout << "Number of paths with cost " << cost << ": "
         << countPaths(cost, R - 1, C - 1, mat) << endl;

    return 0;
}
//
// Created by Mariela on 10/30/2025.
//