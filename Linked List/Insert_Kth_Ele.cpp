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

//Insert val at kth place
Node* InsertvalKth(Node*head , int val , int k){
    if(head == NULL){
        if(k == 1){
            return new Node(val);
        }else{
            return head;
        }
    }
    if(k == 1) return new Node(val , head);
    
    int cnt = 0;
    Node* temp = head;
    while(temp != nullptr){
        cnt++;
        if(cnt == k-1){
            Node* newnode = new Node(val , temp->next);
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
 vector<int> arr = {1,2,3,4,10};
 Node*head = convertArrtoLL(arr);

// head = InsertHead(head , 5);  //inserting at front
// printLL(head);

// head = InsertTail(head , 120);
// printLL(head);

head = InsertvalKth(head , 16 , 1);
printLL(head);
}