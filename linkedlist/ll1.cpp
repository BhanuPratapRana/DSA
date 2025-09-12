#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int value){
        this->data= value;
        this->next = NULL;
        
    }
};

//this func will return the head
node* insertathead(int value, node* &head, node* &tail){
    //LL is empty-->jab head and tail NULL ko point krre honge
    //we are creating first node of ll
     
    if(head==NULL && tail ==NULL ){
    //step !: create a new node
    node* newnode = new node(value);

    //step 2: head ko newNode pe lagado
    head = newnode;

    //step 3: tail ko newNode pr lagado
    tail = newnode;
}
else{
    // LL is not empty
    // step 1: create a node
    node* newnode = new node(value);

    //step 2:connectnew node with head
    newnode->next = head;

    //step 3: head ko new node pr lagado
    head =newnode;
}

    return head;
}

node* insertattail(int value, node* &head, node* &tail){
    //LL is empty
    if(head==NULL && tail==NULL){
        //step 1 create a node
        node* newnode= new node(value);
        
        // head and tail  ko newnode pr lagado
        head = newnode;
        tail = newnode;
    }
    else{
        //LL is not empty
        //step 1 : create a newnode
        node* newnode = new node(value);

        //step 2 : connect tail with newnode
        tail->next =newnode;

        //step 3:  tail ko newnode pr lagado
         tail =newnode;
    }
    return head;
}

void print(node *head){
    node* temp =head;
    //jb tk temp null ke equal nhi ho jata, tb tk nose pr traverse krte rho
    while(temp!=NULL){
        cout<<temp->data<<"->  ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int getlength(node* head){
    node* temp =head;
    int len =0;

    while(temp!=NULL){
        temp=temp->next;
        len++;

    }
    return len;
}

void insertatposition(int position, int value, node* &head, node* &tail){
    int length = getlength(head);

    if(position==1){
    head= insertathead(value,head,tail);
    }
    else if(position==length+1){
        head= insertattail(value,head,tail);
    }
    else{
        //insert at middle        
        node* temp =head;

        for(int i=0; i<position-2;i++){
            temp=temp->next;
        }
        node* newnode = new node(value);

        newnode->next=temp->next;
        temp->next=newnode;
    }

}

bool searching(int target, node* head){
    node* temp =head;

    while(temp!=NULL){
        if(temp->data==target){
            return true;
        }
        temp=temp->next;
    }
    return false;

}

void deleteLL(int position,node* &head, node* &tail){
    //if ll is empty
    if(head==NULL && tail==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    //for head
    if(position==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    //for tail and middle
    else{
        node* prev=head;
        for(int i=0;i<position-2;i++){
            prev=prev->next;
        }
        node* curr=prev->next;
        node* forward=curr->next;
        prev->next=forward;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    //stack memory
    // node first;

    //dyanmic memory
    // node* first = new node(10);

    // node* head= NULL;
    // node* tail = NULL;

    //LL is empty
    // insertathead(10,head , tail);
    // print (head);

    // insertathead(20,head , tail);
    // print (head);

    // insertathead(30,head , tail);
    // print (head);

    //tail pr insert krte hain
    
    node* head= NULL;
    node* tail = NULL; 
   head= insertattail(10,head , tail);   
    print(head);

   head= insertattail(20,head , tail);
    print(head);

   head= insertattail(30,head , tail);
    print(head);

    insertatposition(2, 25, head, tail);
    print(head);

    //searching in ll
    // int target =31;
    // searching(target,head) ? cout<<"element found : "<<searching(target,head) : cout<<"element not found :"<<searching(target,head)<<endl;

    //deleting from ll
    int position = 4;
    deleteLL(position, head, tail);
    print(head);






    return 0;
}