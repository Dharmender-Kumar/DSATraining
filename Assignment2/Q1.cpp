#include <bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next;

    node(int val){
        this->data = val;
        this->next=NULL;
    }
};

node* head = NULL;
void insertion(int val){
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node* sergregateEvenOdd(node* head){
    node *odd = NULL, *headodd = NULL, *even = NULL, *headeven = NULL;
    if(!head || !head->next || !head->next->next)
        return head;
    odd = head; headodd = odd;
    even = head->next; headeven = even;
    
    while(even && even->next){
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    
    odd->next = headeven;
    return headodd;

}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
// In the linked list delete every alternate node

void deleteAlt(){
    if (head == NULL)
        return;
    node* temp =head;
    bool flag = true;
    while(temp->next!=NULL){
        if(flag){
            node* todel = temp->next;
            temp->next = todel->next;
            todel->next = NULL;
            delete todel;
             flag=!flag;
             temp=temp->next;
        }else{
            flag=!flag;
            temp=temp->next;
        }
       
    }
    if(temp->next){
        node* todel = temp->next;
        temp->next = NULL;
        todel->next = NULL;
        delete todel;
    }

    
}
int main() {
   
   
   int n;cin>>n;
   while(n--){
       int x;cin>>x;
       insertion(x);
   }
   print(head);
   deleteAlt();
//    deleteAlt(head);
   print(head);
}