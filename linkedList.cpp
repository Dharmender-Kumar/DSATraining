#include <bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next;

    node(int val){
        this->data = val;
        this->next = NULL;
    }
};

void singlyLinkedList(node* &root, int val){
    node* n = new node(val);
    if(root == NULL){
        root = n;
        return;
    }
    node* temp = root;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next = n;


}

void displayNode(node* head){
    node* temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=  temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {

    node* root=NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        singlyLinkedList(root,x);
    }
    displayNode(root);
}