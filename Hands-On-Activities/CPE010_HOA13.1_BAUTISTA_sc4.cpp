#include <iostream>
#include <thread>
#include <vector>
using namespace std;

int result1 = -1, result2 = -1;

void searchPart(const vector<int>& arr, int start, int end, int target, int& result) {
    for (int i = start; i < end; i++) {
        if (arr[i] == target) {
            result = i;
            break;
        }
    }
}

int main() {
    vector<int> arr = {5, 12, 8, 20, 7, 15, 3, 10, 25, 18};
    int target = 15;

    int mid = arr.size() / 2;

    thread t1(searchPart, cref(arr), 0, mid, target, ref(result1));
    thread t2(searchPart, cref(arr), mid, arr.size(), target, ref(result2));

    t1.join();
    t2.join();

    if (result1 != -1)
        cout << "Element found at index (thread 1): " << result1 << endl;
    else if (result2 != -1)
        cout << "Element found at index (thread 2): " << result2 << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
