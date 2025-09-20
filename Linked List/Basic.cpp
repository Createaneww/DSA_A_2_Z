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
    Node(int data1 ){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; 
    }
    return head;   
}

//how to print the length of LL
int lengthofLL(Node*head){
    int cnt = 0;
    Node* temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt; 
}

//search in a LL (will given head and the ele to be check)
int checkforele(Node* head , int ele){
    int cnt = 0;
    Node* temp = head;
    while (temp)
    {
        if(temp->data == ele){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
    
}
int main(){
    vector<int>arr = {2,3,4,56};
    Node* head = convertArr2LL(arr);  //we will get the head data and next pointer
    Node* temp = head;    //printing whole LL
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    //printing the length of LL
    cout<<"The length is - "<<lengthofLL(head)<<endl;


    //check for ele
    cout<<checkforele(head , 11);
}