#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

void pushFront(Node **head, int val){
	struct Node* new_node = new Node();
	new_node->data = val;
   	new_node->next = (*head);
   	(*head) = new_node;

}

void print(Node *head){
	Node* temp = head;
	while(temp!=NULL){
		cout << temp->data <<' ';
		temp = temp->next;
	}
	cout << '\n';
}

// int main(){
// 	Node *head = NULL;
// 	push(&head, 1);
// 	push(&head, 2);
// 	push(&head, 3);
// 	push(&head, 4);
// 	push(&head, 5);
// 	push(&head, 6);
// 	push(&head, 7);
// 	push(&head, 8);
// 	print(head);
// }