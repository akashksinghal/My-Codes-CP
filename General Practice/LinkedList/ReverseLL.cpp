#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

Node* Reverse(Node *head){
    Node *next;
    Node *prev = NULL, *cur = head;
    int i=0;
    while(cur!=NULL ){
        next = cur->next;
        cur -> next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
    return head;
}

Node* Reverse_In_Group(Node *head, int n){
    Node *next;
    Node *prev = NULL, *cur = head;
    int i=0;
    while(cur!=NULL and i<n){
        next = cur->next;
        cur -> next = prev;
        prev = cur;
        cur = next;
        i++;
    }
    if(next!=NULL){
        head->next = Reverse_In_Group(next, n);
    }
    head = prev;
    return head;
}

Node* reverse_Stack(struct Node *head)
{
    stack<Node*> st;
    Node* temp = head;
    while(temp){
        st.push(temp);
        temp=temp->next;
    }
    head = st.top();
    temp = head;
    st.pop();
    while(!st.empty()){
        temp->next = st.top();
        st.pop();
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

int main(){
    Node *head = NULL;
    pushFront(&head, 8);
    pushFront(&head, 7);
    pushFront(&head, 6);
    pushFront(&head, 5);
    pushFront(&head, 4);
    pushFront(&head, 3);
    pushFront(&head, 2);
    pushFront(&head, 1);
    print(head); // 1 2 3 4 5 6 7 8
    // Node *h2 = Reverse(head);
    // print(h2); // 8 7 6 5 4 3 2 1

    Node *h3 = Reverse_In_Group(head,3);
    print(h3); // 3 2 1 6 5 4 8 7
}
