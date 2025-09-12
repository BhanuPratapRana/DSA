#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //creation
    list<int> mylist;

    //insertion
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);

    mylist.push_front(5);

    //removal
    mylist.pop_back();
    mylist.pop_front();

    cout<<mylist.size();
    //mylist.clear();


    if(mylist.empty() ==true ){
        cout<<"list is empty "<<endl;

    }

    else{
        cout<<"list is not empty"<<endl;
    }

    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;

    list<int> :: iterator it = mylist.begin();
    while(it != mylist.end()){
        cout<<*it << " ";
        it++;

    }cout<<endl;

    mylist.remove(10); //remove every 10 inn list\\\

     list<int> first;
     list<int> second;

     first.push_back(10);
     first.push_back(20);
     first.push_back(30);

     second.push_back(100);
     second.push_back(200);
     second.push_back(300);

     list<int> :: iterator it2 = first.begin();
     while (it2 != first.end())
     {
        cout<<*it2<<" ";
        it2++;
     }cout<<endl;
     

     first.swap(second); 


     list<int> :: iterator it3 = first.begin();
     while (it3!= first.end())
     {
        cout<<*it3++<<" ";
        
     }cout<<endl;


     //insert
     mylist.insert(mylist.begin(), 100);

     //mylist.erase(mylist.begin(),mylist.end());

     





    return 0; 
}