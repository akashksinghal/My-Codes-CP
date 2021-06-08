#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

Node* LoopDetect(Node *head){
    Node* slow = head, *fast = head;
    // if(head!=NULL or head->next!=NULL) return NULL;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    } 
    if(slow!=fast) 
        return NULL;
    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

int main(){
    Node* head = new Node(50);
    head->next = new Node(20);
    head->next->next = new Node(15);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(10);
 
    head->next->next->next->next->next = head->next->next;
    // print(head);
 
    Node* res = LoopDetect(head);
    if (res == NULL)
        cout << "Loop does not exist";
    else
        cout << "Loop starting node is " << res->data;

}
