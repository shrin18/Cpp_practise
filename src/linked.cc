#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insert(int new_data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;

}

void display(){
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main(){
    insert(3);
    insert(12);
    insert(67);
    insert(90);
    insert(54);
    insert(4);
    insert(18);
    insert(4);

    cout << "The linked list in LIFO is :";
    display();
    return 0;
}