// lc 48
#include<bits/stdc++.h>
using namespace std;

// tc ---> o(n^2)

void rotateimage(vector<vector<int>> &matrix){
    //step 1 transpose
    int nrows = matrix.size();
    int ncols = matrix[0].size();

    for(int i=0; i<nrows; i++){   //n2
        for(int j=i;j<ncols; j++){
          swap(matrix[i][j], matrix[j][i]);  
        }
    }

    //step 2 reverse row wise
    for(int i=0; i<nrows; i++){     //n2
        reverse(matrix[i].begin(), matrix[i].end());
    }



}


void printmatrix(vector<vector<int>> &matrix){
       // Print the matrix directly
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " "; // Print each value in the row
        }
        cout << endl; // New line after each row
}
}
 
int main(){
       vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 
    rotateimage(matrix);

    cout<<"rotated matrix :"<<endl;
    printmatrix(matrix);
    

      
     
    return  0; 
}