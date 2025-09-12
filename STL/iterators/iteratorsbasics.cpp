#include<bits/stdc++.h>
using namespace std;
 
int main(){


    //iterator revision
     vector<int> arr;
     arr.push_back(10);
     arr.push_back(20);
     arr.push_back(30);

     //traverse using iterator
     //create iterator

     vector<int> :: iterator it= arr.begin();
     while(it!=arr.end()){
        cout<<*it<<" ";
        it++;}
        cout<<endl;
     


     // 1. forward iterator
     forward_list<int> mylist;
     mylist.push_front(10);
     mylist.push_front(20);
     mylist.push_front(30);

     forward_list<int> ::iterator it2 = mylist.begin();
     while (it2 != mylist.end())
     {
       // cout<<*it2<<" ";
       (*it2)+=5;
        it2++;
     }
     cout<<endl;
     

     it2=mylist.begin();
     while (it2 !=mylist.end())
     {
        cout<<*it2<<" ";
        it2++;
     }cout<<endl;


     // 2. biderectional itrator
     list<int> list2;
     list2.push_back(10);
     list2.push_back(20);
     list2.push_back(30);

     //traverse using iterator
     list<int> :: iterator it3 = list2.begin();
     while (it3 != list2.end())
     {//writing
      (*it3) = (*it3)+2;
      cout<<*it3<<" ";
      it3++;
     }
     cout<<endl;


     //moving backward

     list<int> :: iterator it4 = list2.end();
     while (it4 != list2.begin())
     {//writing
       it4--;
      // (*it3) = (*it3)+2;
      cout<<*it4<<" ";
    
     }
     cout<<endl;


     // 3. random access iterator         vector  array deque
     vector<int> arr2={10, 20, 30, 40, 50};

     //travere using vector
     vector<int> :: iterator it5 =  arr2.begin();

     while ((it5 != arr2.end()))
     {
      //write
      *it5 += 7;

      //read
      cout<<*it5<<" ";
      it5++;
     }cout<<endl;

     //backward movement 
      vector<int> :: iterator it6 =  arr2.end();
      while (it6 !=arr2.begin())
      {
         it6--;
         cout<<*it6<<" ";
         

      }cout<<endl;


      //random access iterator
       vector<int> :: iterator it7 =  arr2.begin()+3;
       cout<<*it7<<" ";
       
 
    return 0; 
}