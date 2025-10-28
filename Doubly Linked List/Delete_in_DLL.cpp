#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node*next1 , Node*back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr; 
    }
};
Node* convertArrtoDll(vector<int>&arr){
    Node*head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i] , nullptr , prev);
        prev->next = temp;
        prev = temp;  //this can be also written as "prev = prev->next"
    }
    return head;
}

//print Dll
void printDll(Node* head){
    while(head != nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}

//Delete the head
Node* DeleteHead(Node*head){
    if(head == NULL || head->next == nullptr){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    free(prev);
    return head;
}
//Delete Tail
Node* DeleteTail(Node*head){
    if(head == NULL || head->next == nullptr){
        return NULL;
    }
    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    Node*prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    free(tail);
    return head;
}

int main(){
    vector<int>arr = {1,3,2,4,8 , 15};
    Node* head = convertArrtoDll(arr);

    // head = DeleteHead(head);
    head = DeleteTail(head);
    printDll(head);
} 