#include <iostream>
using namespace std;

// node struct
template <typename T>
class Node {
public:
    T data;
    Node *next;
};

// make new node
template <typename T>
Node<T>* new_node(T newData) {
    Node<T> *newNode = new Node<T>;
    newNode->data = newData;
    newNode->next = NULL;
    return newNode;
}

// binary search for array
int binarySearch(int arr[], int n, int key) {
int low = 0, high = n - 1;

while (low <= high) {
    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        cout << "Search element " << key << " is found at index " << mid << "\n";
        return mid;
    }
    else if (arr[mid] > key) {
        high = mid - 1;
    }
    else {
        low = mid + 1;
    }
}
cout << "Search element " << key << " is not found\n";
return -1;
}

// get middle node (linked list)
template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>* end) {
if (start == NULL) return NULL;

Node<T>* slow = start;
Node<T>* fast = start->next;

while (fast != end) {
    fast = fast->next;
    if (fast != end) {
        slow = slow->next;
        fast = fast->next;
    }
}
return slow;
}

// binary search for linked list
template <typename T>
Node<T>* binarySearchLL(Node<T>* head, int key) {
Node<T>* start = head;
Node<T>* last = NULL;

do {
    Node<T>* mid = getMiddle(start, last);

    if (mid == NULL) return NULL;

    if (mid->data == key) {
        cout << "Search element " << key << " is found in the list.\n";
        return mid;
    }
    else if (mid->data < key) {
        start = mid->next; // go right
    }
    else {
        last = mid; // go left
    }
} while (last == NULL || last != start);

cout << "Search element " << key << " is not found in the list.\n";
return NULL;
}

int main() {
// test array search
int arr[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
int n = sizeof(arr) / sizeof(arr[0]);

cout << "=== Binary Search on Array ===\n";
binarySearch(arr, n, 8);   // found
binarySearch(arr, n, 3);   // found
binarySearch(arr, n, 20);  // not found

// test linked list search
cout << "\n=== Binary Search on Linked List ===\n";
Node<int>* head = new_node(3);
head->next = new_node(5);
head->next->next = new_node(6);
head->next->next->next = new_node(8);
head->next->next->next->next = new_node(11);
head->next->next->next->next->next = new_node(12);
head->next->next->next->next->next->next = new_node(14);
head->next->next->next->next->next->next->next = new_node(15);
head->next->next->next->next->next->next->next->next = new_node(17);
head->next->next->next->next->next->next->next->next->next = new_node(18);

binarySearchLL(head, 8);   // found
binarySearchLL(head, 3);   // found
binarySearchLL(head, 20);  // not found

return 0;
}
