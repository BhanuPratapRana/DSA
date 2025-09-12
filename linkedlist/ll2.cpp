#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    node* prev;
    int data;
    node* next;

    //constructor
    node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }


};

void insertathead(int value, node* &head, node* &tail){
    //LL is empty
    if(head==NULL && tail==NULL){
        node* newnode =new node(value);
        head= newnode;
        tail =newnode;
    }
    else{
        // LL is not empty
        //step 1: create a new node
        //step 2: connect new node with head
        //step 3: head ko new node pr lagado
        
        node* newnode = new node(value);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void insertAtTail(int value, node* &head, node* &tail){
    //LL is empty
    if(head==NULL &&tail==NULL){
        node* newnode = new node(value);
        head=newnode;
        tail = newnode;
    }
    else{
        //LL is not empty
        node* newnode = new node(value);
        tail->next = newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}
int getlength(node* head){
    node* temp = head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
     

    }
    return len;
}

void insertAtAnyPosition(int value,int position, node* &head, node* &tail){
//insert at pos 1
int len =getlength(head);
if(position==1){
    insertathead(value,head,tail);
}
else if(position== len+1){
    insertAtTail(value, head, tail);
}
else{
    //insert at any position
    node* temp = head;

    for(int i=0;i<position-2;i++){
        temp=temp->next;
    }
    node* newnode = new node(value);
    node* forward = temp->next;

    
    newnode->prev=temp;
    temp->next =newnode;
    forward->prev=newnode;
    newnode->next=forward;
     
}

}

void searchtarget(int target,node* head, node* tail){
    node*temp =head;
    while(temp!=NULL){
        if(temp->data==target){
            cout<<"Element found: " << temp->data << endl;
            return;
        }
        temp=temp->next;

    }
    cout<<"Element not found"<<endl;

}

void deletefromposition(int position, node* &head, node* &tail){
    //LL is empty
    if(head==NULL&&tail==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    //single element
    else if(head ==tail){
        node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if(position==1){
        //delte head
        node* temp = head;
        head=head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else{
        //delete middle or tail
        node* backward = head;

      for(int i=0; i<position-2;i++){
        backward=backward->next;
      }
      node* curr = backward->next;
      node* forward = curr->next;
        
        if(forward!=NULL){
            forward->prev=backward;
        }
        else{
            tail = backward; //updating tail if we are deleting the last element
        }
        backward->next=forward;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;


    }
}


void printll(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<"NUll"<<endl;
}

void printback(node* tail){
    node* temp =tail;
    while(temp!= NULL){
        cout<<temp->data<<"-> ";
        temp=temp->prev;
    }
    cout<<"NULL"<<endl;
}
 
int main(){
    // node* head= NULL;
    // node* tail = NULL;

    // insertathead(10,head, tail);
    // printll(head);

    // insertathead(20,head, tail);
    // printll(head);

    // insertathead(30,head, tail);
    // printll(head);
    // printback(tail);

    node* head= NULL;
    node* tail =NULL;

    insertAtTail(10, head, tail);
    printll(head);

    insertAtTail(20, head, tail);
    printll(head);

    insertAtTail(30, head, tail);
    printll(head);

    insertAtAnyPosition(25, 3, head, tail);
    printll(head);

    // searchtarget(20, head, tail);
     deletefromposition(4, head, tail);
    printll(head);
     
    return 0; 
}