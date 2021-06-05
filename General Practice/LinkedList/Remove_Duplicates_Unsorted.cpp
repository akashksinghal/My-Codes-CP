#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

Node * removeDuplicates( Node *head) 
{
    Node *cur = head, *prev = NULL;
    unordered_set<int> st;
    if(!head) 
        return NULL;
    while(cur!=NULL){
        if(st.find(cur->data)!=st.end()){
            prev->next = cur -> next;
            delete(cur);
        }
        else{
            st.insert(cur->data);
            prev = cur;
        }
        cur = prev->next;
    }
    return head;
}

int main(){
    Node *head = NULL;
	pushFront(&head, 1);
	pushFront(&head, 2);
    pushFront(&head, 6);
    pushFront(&head, 2);
    pushFront(&head, 2);
	pushFront(&head, 3);
	pushFront(&head, 4);
	pushFront(&head, 5);
	pushFront(&head, 6);
	pushFront(&head, 7);
	pushFront(&head, 8);
	head = removeDuplicates(head);
	print(head);
}