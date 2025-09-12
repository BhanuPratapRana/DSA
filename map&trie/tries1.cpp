#include<bits/stdc++.h>
using namespace std;

class trienode{
    public:
    char value;
    unordered_map<int,trienode*>children;
    bool isterminal; 

    trienode(char data){
        this->value = data;
        this->isterminal = false;
    }
};

void insertintotrie(trienode* root, string word){
    //base case
    if(word.length()==0){
        root->isterminal=true;
        return;
    }

    //1 case solve krna
    char ch= word[0];
    trienode* child;

    //present h toh wha chale jao
    //absent h toh create krdo

    if(root->children.count(ch)==1){
        child = root->children[ch];
    }
    else{
        //absent
        child = new trienode(ch);
        //link
        root->children[ch]= child;
    }

    //baaki recursion dekh lega
    insertintotrie(child,word.substr(1));
}

bool searchintrie(trienode* root, string word){
    //base case
    if(word.length()==0){
        // return root->isterminal;
        if(root->isterminal==true){
            return true;
        }
        else{
            return false;
        }
    }

    //1 case solve krna
    char ch= word[0];
    trienode* child;

    //present h toh wha chale jao
    //absent h toh create krdo

    if(root->children.count(ch)==1){
        child = root->children[ch];
    }
    else{
        //absent
        return false;
    }

    //baaki recursion dekh lega
    return searchintrie(child,word.substr(1));
}

void deletfromtrie(trienode* root, string word){
    //base case
    if(word.length()==0){
        root->isterminal=false;
        return;
    }

    //1 case solve krna
    char ch= word[0];
    trienode* child;

    //present h toh wha chale jao
    //absent h toh create krdo

    if(root->children.count(ch)==1){
        child = root->children[ch];
    }
    else{
        //absent
        return;
    }

    //baaki recursion dekh lega
    deletfromtrie(child,word.substr(1));

}
 
int main(){
    trienode* root = new trienode('-');
    insertintotrie(root, "apple");
    insertintotrie(root, "app");
    insertintotrie(root, "bat");
    insertintotrie(root, "batman");
     
     
    return 0; 
}