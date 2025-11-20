#include <iostream>
#include <thread>
using namespace std;

int globalVar = 0;

void add(int value) {
    globalVar += value;
    cout << "Added " << value << ", GlobalVar = " << globalVar << endl;
}

int main() {
    thread t1(add, 5);
    thread t2(add, 10);
    thread t3(add, 20);

    cout << "Before joining threads, GlobalVar = " << globalVar << endl;
    t1.join();
    cout << "After T1.join(), GlobalVar = " << globalVar << endl;
    t2.join();
    cout << "After T2.join(), GlobalVar = " << globalVar << endl;
    t3.join();
    cout << "After T3.join(), GlobalVar = " << globalVar << endl;

    return 0;
}
