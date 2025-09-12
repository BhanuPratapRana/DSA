 #include<bits/stdc++.h>
using namespace std;

  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

 

class Solution {
  public:
  void insertatTail(Node* &toMove,Node* &head, Node* &tail){
      //linked list is empty
      if(head==NULL && tail==NULL){
          head=toMove;
          tail=toMove;
      }
      else{
          //Lonked List is not empty
          tail->next=toMove;
          tail=toMove;
      }

  }
    Node* segregate(Node* head) {
      
        Node* zeroHead =NULL;
        Node* zeroTail=NULL;
        
        Node* oneHead =NULL;
        Node* oneTail=NULL;
        
        Node* twoHead =NULL;
        Node* twoTail=NULL;
        
        
    
        Node* temp=head;
        
        while(temp!=NULL){
              //iso late the node -- toMove waali
            Node* toMove=temp;
            temp=temp->next;
            toMove->next=NULL;
            
            if(toMove->data==0){
               insertatTail(toMove,zeroHead,zeroTail);
                
            }
             if(toMove->data==1){
                insertatTail(toMove,oneHead,oneTail);
                
            }
             if(toMove->data==2){
                insertatTail(toMove,twoHead,twoTail);
            }
            
        }
        
        //yha pahunch kr 3no list ko merge krdo
        //ye bhoolna mat nhi to fatt ke haath mein aa jaaegi
        
        
        //zerolist is not empty
        if(zeroHead!=NULL){
            //onelist is not empty
            if(oneHead!=NULL){
                zeroTail->next=oneHead;
                oneTail->next=twoHead;
                
            }
            else{
                //one list is empty
                zeroTail->next=twoHead;
            }
            return zeroHead; //--------------------------ye bhoool gya tha
            
        }
        else{
            //zerolist is empty
            //one list not empy
            if(oneHead!=NULL){
                oneTail->next=twoHead;
                return oneHead;
                
            }
            else{
                //onelist is empty
                return twoHead;
            }
        }
    }
};

