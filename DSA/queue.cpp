#include <iostream>
#include <queue>

using namespace std;

class QueueOperations {
private:
    queue<int> myQueue;

public:
    void enqueue(int value) {
        myQueue.push(value);
        cout << "Enqueued " << value << " into the queue." << endl;
    }

    void dequeue() {
        if (!myQueue.empty()) {
            int frontValue = myQueue.front();
            myQueue.pop();
            cout << "Dequeued " << frontValue << " from the queue." << endl;
        } else {
            cout << "Queue is empty. Cannot dequeue." << endl;
        }
    }

    void display() {
        if (myQueue.empty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue: ";
            queue<int> tempQueue = myQueue; // Create a temporary queue for display
            while (!tempQueue.empty()) {
                cout << tempQueue.front() << " ";
                tempQueue.pop();
            }
            cout << endl;
        }
    }
};

int main() {
    QueueOperations queueOps;

    queueOps.enqueue(10);
    queueOps.enqueue(20);
    queueOps.enqueue(30);
    queueOps.display();

    queueOps.dequeue();
    queueOps.display();

    queueOps.dequeue();
    queueOps.dequeue(); // Trying to dequeue from an empty queue
    queueOps.display();

    return 0;
}
