#include<bits/stdc++.h>
using namespace std;

struct Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArrtoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}



void printLL(Node* head){
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    
}

//Insert ele in the starting
Node* InsertHead(Node* head , int val){
    Node* temp = new Node(val , head);
    return temp;
}
//Insert Ele in the ending
Node* InsertTail(Node* head , int val){
    if(head == NULL){
        return new Node(val , nullptr);
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    //crete a new node
    Node* newnode = new Node(val , nullptr);
    temp->next = newnode;
    return head;
}

int main(){
 vector<int> arr = {1,2,3,4,10};
 Node*head = convertArrtoLL(arr);

// head = InsertHead(head , 5);
// printLL(head);

head = InsertTail(head , 12);
printLL(head);
}