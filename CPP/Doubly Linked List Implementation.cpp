#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* prev;
	Node* next;

	Node(int data){
		this->data = data;
		this->prev = NULL;
		this->next = NULL;
	}	
};

void insertAtHead(Node* & head, Node* & tail, int data){
	if(head==NULL){
		Node* temp = new Node(data);
		tail = temp;
		head = temp;
		return;
	}

	Node* temp = new Node(data);
	temp->next = head;
	head->prev = temp;
	head = temp;
	return;
}

void insertAtTail(Node* &tail, Node* & head, int data){
	if(tail==NULL){
		Node* temp = new Node(data);
		tail = temp;
		head = temp;
		return;
	}

	Node* temp = new Node(data);
	temp->prev = tail;
	tail->next = temp;
	tail = temp;
	return;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){

	if(position==1){
		insertAtHead(head, tail, data);
		return;
	}

	Node* temp = head;
	int cnt = 1;
	while(cnt<position){
		if(!temp){
			cout<<"Enter Valid position for deletion!!";
			return;
		}
		temp = temp->next;
		cnt++;
	}

	if(!temp){
		insertAtTail(tail, head, data);
		return;
	}

	Node* newNode = new Node(data);
	newNode->prev = temp->prev;
	newNode->next = temp;
	temp->prev = newNode;
	newNode->prev->next = newNode;

	return;
}

void deleteNode(Node* &head, Node* &tail, int position){
	if(position==1){
		Node* temp = head;
		head = head->next;
		head->prev = NULL;
		delete temp;
		return;
	}

	Node* temp = head;
	int cnt = 1;

	while(temp && cnt<position){
		temp = temp->next;
		cnt++;
	}

	if(!temp){
		cout<<"Enter Valid position for deletion!!"<<endl;
		return;
	}
	if(!temp->next) tail = temp->prev;
	
	temp->prev->next = temp->next;
	delete temp;
}

void print(Node* head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
	return;
}

void getLength(Node* head){
	int cnt = 0;
	while(head){
		head = head->next;
		cnt++;
	}
	cout<<cnt<<endl;
	return;
}

int main(){
	Node* head = new Node(13);
	Node* tail = head;
	print(head);
	insertAtHead(head, tail, 4);
	print(head);
	cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

	insertAtTail(tail, head, 20);
	insertAtTail(tail, head, 33);
	print(head);
	cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

	insertAtPosition(head, tail, 31, 1);
	print(head);
	getLength(head);
	cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

	deleteNode(head, tail, 5);
	print(head);
	getLength(head);
	cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
	return 0;
}