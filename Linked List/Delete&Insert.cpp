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
    for(int i = 0; i<arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* Delete_Insert(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
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
int main(){
 vector<int> arr = {1,2,3,4,10};
 Node*head = convertArrtoLL(arr);
Node* temp = head;    //printing whole LL
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}