#include "LinkedList.h"
#include <bits/stdc++.h>
using namespace std;

Node *Reverse(Node *head) {
    Node *next;
    Node *prev = NULL, *cur = head;
    int i = 0;
    while (cur != NULL) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
    return head;
}
/*
S-1: Reverse
S-2: Add 1 and check carry
S-3: Reverse
*/
Node *addOne(Node *head) {
    Node *temp = Reverse(head);
    Node *temp2 = temp, *temp3 = temp, *prev = NULL;
    int carry = 0;
    if (temp2) {
        carry = (temp2->data + 1) / 10;
        temp2->data = (temp2->data + 1) % 10;
        prev = temp2;
        temp2 = temp2->next;
    }
    while (temp2) {
        int add = (temp2->data + carry) / 10;
        temp2->data = (temp2->data + carry) % 10;
        carry = add;
        prev = temp2;
        temp2 = temp2->next;
    }
    while (carry != 0) {
        Node *node = new Node();
        node->data = carry % 10;
        node->next = NULL;
        prev->next = node;
        prev = prev->next;
        carry /= 10;
    }
    return Reverse(temp3);
}

int main() {
    Node *head = NULL;
    pushFront(&head, 1);
    pushFront(&head, 2);
    pushFront(&head, 3);
    pushFront(&head, 4);
    pushFront(&head, 5);
    pushFront(&head, 6);
    pushFront(&head, 7);
    pushFront(&head, 8);
    print(head);
    head = addOne(head);
    print(head);
}
