#include<iostream>
using namespace std;


struct Node{
	int data;
	Node *next;
};

class List{
	public:
		Node *root;
		int size;
		void show();
		void append(int);
		void insert(int,int);
		void remove(int);
		void swap(int,int);
};

void List::swap(int idx1,int idx2){
	int data1;
	int data2;
	Node *current = root;
	Node *temp;
	for(int i = 0;i < idx2;i++){
		current = current->next;
		if(i == idx1 - 1)data1 = current->data;
	}
	data2 = current->data;
	current->data = data1;
	current = root;
	for(int i = 0;i < idx1;i++){
		current = current->next;
	}
	current->data = data2;
}

void List::insert(int d,int idx){
	Node *n = new Node;
	n->data = d;

	if(idx == 0){
		n->next = root;
		root = n;
		return;
	}
	Node *current = root;
	for(int i = 0; i < idx-1;i++){
		current = current->next;
	}
	n->next = current->next;
	current->next = n;
}

void List::show(){
	Node *current = root;
	cout << current->data << " ";
	while(current->next){
		current = current->next;
		cout << current->data << " ";
	}
}

void List::append(int d){
	Node *n = new Node;
	n->data = d; n->next = NULL;
	if(root == NULL) root = n;
	else{
		Node *current = root;
		while(current->next){
			current = current->next;
		}
		current->next = n;
	}
	size++;
}

//Write List::remove() here
void List::remove(int index){
	if(size > 0){
		size--;
		Node *current = root;
		Node *temp;
		if(index != 0){
			for(int i = 0;i < index;i++){
				current = current->next;
			}
			temp = current->next;
			current = root;
			for(int i = 0;i < index - 1;i++){
				current = current->next;
			}
			current->next = temp;
		}
		else if(index == 0){
			root = root->next;
		}
	}
}

int main(){
	List myList = {0,0};
	myList.append(5);
	myList.append(7);
	myList.append(11);
	myList.append(4);
	myList.append(12);
	myList.append(45);

	myList.insert(29,2);
	myList.insert(33,3);
	myList.insert(77,5);
	myList.insert(69,0);
	myList.show();	cout << "\n";

	myList.remove(2);
	myList.show();	cout << "\n";
	myList.remove(4);
	myList.show();	cout << "\n";
	myList.remove(0);
	myList.show();	cout << "\n";
	myList.swap(2,5);
	myList.show();	cout << "\n";

	return 0;
}
