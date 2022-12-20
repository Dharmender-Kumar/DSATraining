#include <bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* right;
    node* down;

    node(int val){
        this->data = val;
        this->down = NULL;
        this->right= NULL;
    }
};

void insertAtPoint(node* &root,int val,int pos){
    // node* n = new node(val);
    if(root==NULL){
        root=new node(val);
        return;
    }
    node*temp=root;
    int count=0;
    while(count!=pos){
        count++;
        temp=temp->right;
    }
    cout<<pos<<endl;
    if(temp==NULL){ 
       temp = new node(val);
       cout<<val<<" ";
       return;
    }
    while(temp->down!=NULL){
        temp=temp->down;
        // cout<<temp->data<<" ";
    }
    temp->down=new node(val);
    return;

}

void displayFlatten(node* root){
    node* temp=root;
    while(temp!=NULL){
        node* tempx = temp;
        while(tempx!=NULL){
           cout<<tempx->data<<"->";
           tempx=tempx->down;
        }
        temp=temp->right;
    }
    cout<<"NULL"<<endl;
}




int main() {
    node* root = NULL;
    int n;cin>>n;
    for(int i=0;i<n;i++){
       int val,pos;cin>>val>>pos;
       insertAtPoint(root,val,pos);
    }
    // node * root = new node(2);
    // root->right = new node(3);
    // root->down = new node(5);
    // root->right->down=new node(6);
    displayFlatten(root);
    // node* res = flatten(root);
    // display(res);
}