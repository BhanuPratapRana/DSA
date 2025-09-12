#include <bits/stdc++.h>
using namespace std;


 void hollowpyramid(int n){
    for(int row=0; row < n; row++){
        //spaces
        for( int col = 0; col < n-row-1; col++ ){
            cout<<" ";
        }

        //stars
        for(int col = 0; col < row + 1; col++){
            if(row ==0 ||/* row== n-1 ||*/ col==0 ||col == row +1-1){
            cout <<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
 }

void invertedhollowfullpyramid(int n){
    
     for(int row =0; row <n; row++){
        //spaces
        for(int col =0; col <row; col++){
            cout <<" ";
        }

        //stars
        for(int col = 0; col < n-row; col++){
            if(/* row==n-1||*/col==0 || col ==n-row -1){
            cout<<"* ";
        }
        else{
            cout<< "  ";
        }
        
        }
        cout<< endl;
     }

}
void hollowdiamond(int n){
    hollowpyramid(n);
    invertedhollowfullpyramid(n);
    
}

int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;
    hollowdiamond(n);

    return 0;
}