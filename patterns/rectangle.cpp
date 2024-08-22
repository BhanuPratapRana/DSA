#include<bits/stdc++.h>
using namespace std;

int main(){

int length, width;
cout<<"enter the lenght of the rectangle:";
cin>>length;
cout<<"enter the width of the rectangle:";
cin>>width;

    for(int row=0; row<length; row++){

        for(int c=0; c<width; c++){

            cout<<"* ";

        }
        
        cout<<endl;
    }


    return 0;
}