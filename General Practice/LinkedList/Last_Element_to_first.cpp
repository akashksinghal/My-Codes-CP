#include <bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

Node* LastElementToFirst(Node *head){
	Node *start = head, *second_last = NULL, *last = head;
	while(last->next!=NULL){
		second_last = last;
		last= last->next;
	}
	second_last -> next = NULL;
	last->next = head;
	head = last;
	return head;
}

int main(){
	Node *head = NULL;
	pushFront(&head, 1);
	pushFront(&head, 2);
	pushFront(&head, 3);
	pushFront(&head, 4);
	pushFront(&head, 5);
	pushFront(&head, 6);
	pushFront(&head, 7);
	pushFront(&head, 8);
	head = LastElementToFirst(head);
	print(head);
}
