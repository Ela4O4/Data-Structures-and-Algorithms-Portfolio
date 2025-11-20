#include <iostream>
#include <vector>
using namespace std;

int recursiveSum(const vector<int>& nums, int index) {
    if (index >= static_cast<int>(nums.size())) return 0;
    return nums[index] + recursiveSum(nums, index + 1);
}

int iterativeSum(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
}

int recursiveFib(int n) {
    if (n <= 1) return n;
    return recursiveFib(n - 1) + recursiveFib(n - 2);
}

int iterativeFib(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "Task 1 - Sum of List:" << endl;
    cout << "Recursive Sum: " << recursiveSum(nums, 0) << endl;
    cout << "Iterative Sum: " << iterativeSum(nums) << endl;

    cout << "\nTask 2 - Fibonacci:" << endl;
    int n = 10;
    cout << "Recursive Fib(" << n << "): " << recursiveFib(n) << endl;
    cout << "Iterative Fib(" << n << "): " << iterativeFib(n) << endl;

    return 0;
}
