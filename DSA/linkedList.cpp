#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        // Destructor to free allocated memory
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    // Function to display the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Function to insert a node at the beginning of the linked list
    void insert_at_beginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        cout << "Inserted " << value << " at the beginning." << endl;
    }

    // Function to insert a node at the end of the linked list
    void insert_at_end(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }

        cout << "Inserted " << value << " at the end." << endl;
    }

    // Function to delete a node with a specific value from the linked list
    void delete_node(int value) {
        Node* current = head;
        Node* previous = nullptr;

        // Search for the node with the given value
        while (current != nullptr && current->data != value) {
            previous = current;
            current = current->next;
        }

        // If the node is found, delete it
        if (current != nullptr) {
            if (previous != nullptr) {
                previous->next = current->next;
            } else {
                // If the node to be deleted is the head
                head = current->next;
            }

            cout << "Deleted node with value " << value << "." << endl;
            delete current;
        } else {
            cout << "Node with value " << value << " not found. Cannot delete." << endl;
        }
    }
};

int main() {
    LinkedList linkedList;

    linkedList.insert_at_beginning(10);
    linkedList.insert_at_end(20);
    linkedList.insert_at_end(30);
    linkedList.display();

    linkedList.delete_node(20);
    linkedList.display();

    linkedList.delete_node(40); // Trying to delete a non-existent node
    linkedList.display();

    return 0;
}
