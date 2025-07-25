#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue {
public:
    int f;   // front pointer
    int b;   // back pointer (next insertion index)
    int s;   // current size
    int c;   // capacity
    vector<int> arr;

    // Constructor
    MyCircularQueue(int k) {
        f = 0;
        b = 0;
        s = 0;
        c = k;
        arr.resize(k);
    }
    
    // Insert an element into the circular queue.
    bool enQueue(int value) {
        if (isFull()) return false;   // queue is full
        arr[b] = value;
        b = (b + 1) % c;
        s++;
        return true;
    }
    
    // Delete an element from the circular queue.
    bool deQueue() {
        if (isEmpty()) return false;  // queue is empty
        f = (f + 1) % c;
        s--;
        return true;
    }
    
    // Get the front item.
    int Front() {
        if (isEmpty()) return -1;
        return arr[f];
    }
    
    // Get the last item.
    int Rear() {
        if (isEmpty()) return -1;
        int index = (b - 1 + c) % c;
        return arr[index];
    }
    
    // Check whether the circular queue is empty.
    bool isEmpty() {
        return (s == 0);
    }
    
    // Check whether the circular queue is full.
    bool isFull() {
        return (s == c);
    }
};

int main() {
    // Create queue of size 3
    MyCircularQueue q(3);

    cout << boolalpha; // prints true/false instead of 1/0

    cout << "Enqueue 1: " << q.enQueue(1) << endl; // true
    cout << "Enqueue 2: " << q.enQueue(2) << endl; // true
    cout << "Enqueue 3: " << q.enQueue(3) << endl; // true
    cout << "Enqueue 4: " << q.enQueue(4) << endl; // false (full)
    
    cout << "Rear: " << q.Rear() << endl;          // 3
    cout << "Is Full? " << q.isFull() << endl;     // true

    cout << "Dequeue: " << q.deQueue() << endl;    // true

    cout << "Enqueue 4: " << q.enQueue(4) << endl; // true
    cout << "Rear: " << q.Rear() << endl;          // 4
    cout << "Front: " << q.Front() << endl;        // 2
    cout << "Is Empty? " << q.isEmpty() << endl;   // false

    return 0;
}
