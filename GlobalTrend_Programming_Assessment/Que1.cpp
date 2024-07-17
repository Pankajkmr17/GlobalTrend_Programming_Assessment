// Write a function to reverse a singly linked list.The function should take the head of the list and return the new head of the reversed list.

#include <iostream> 

using namespace std; 

  

// Definition for singly-linked list node 

struct ListNode { 

    int value; 

    ListNode* next; 

    ListNode(int x) : value(x), next(nullptr) {} 

}; 

  

ListNode*  reverseLinkedList(ListNode* head) { 

    ListNode* prev = nullptr; 

    ListNode* current = head; 

  

    while (current != nullptr) { 

        ListNode* next_node = current->next;  // Save the next node 

        current->next = prev;                 // Reverse the link 

        prev = current;                       // Move prev to the current node 

        current = next_node;                  // Move to the next node 

    } 

  

    return prev;  // New head of the reversed list 

} 

  

// Helper function to print the list 

void printList(ListNode* head) { 

    ListNode* current = head; 

    while (current != nullptr) { 

        cout << current->value << " -> "; 

        current = current->next; 

    } 

    cout << "nullptr" << endl; 

} 

  

int main() { 

    // Creating a sample linked list: 1 -> 2 -> 3 -> nullptr 

    ListNode* head = new ListNode(1); 

    head->next = new ListNode(2); 

    head->next->next = new ListNode(3); 

  

   cout << "Original list:" << endl; 

    printList(head); 

  

    // Reversing the linked list 

    ListNode* reversed_head = reverseLinkedList(head); 

  

    std::cout << "Reversed list:" << std::endl; 

    printList(reversed_head); 

  

    // Free the allocated memory 

    ListNode* current = reversed_head; 

    while (current != nullptr) { 

        ListNode* next = current->next; 

        delete current; 

        current = next; 

    } 

  

    return 0; 

} 