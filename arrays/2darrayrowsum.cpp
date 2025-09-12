#include <bits/stdc++.h>
using namespace std;

void printrowsum(int arr[][4], int colsize, int rowsize)
{
    for (int i = 0; i < rowsize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colsize; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }

}

    void printcolsum(int arr[][4], int colsize, int rowsize)
    {
        for (int j = 0; j < colsize; j++)
        {
            int sum = 0;
            for (int i = 0; i < rowsize; i++)
            {
                sum = sum + arr[i][j];
            }
            cout <<sum << endl;
        }
        
    }


    void printdiogonalsum(int arr[][3], int csize, int rsize)
 {
     int sum =0; 
    for(int i=0; i<rsize; i++){
                 
            sum = sum +arr[i][i];
        
    }
    
        cout<<sum<<endl;
 }

  void printantidiogonalsum(int arr[][3], int csize, int rsize)
 {
     int sum =0; 
    for(int i=0; i<rsize; i++){
                 
            sum = sum +arr[csize-i-1][i];
        
    }
    
        cout<<sum<<endl;
 }


 
    void transposearray(int arr2[][3], int csize, int rsize)
    {
        //same array
        for (int i = 0; i < rsize; i++)
        {
            
            for (int j = i; j < csize; j++)
            {
                swap(arr2[i][j],arr2[j][i]);
            }
        }

          for (int i = 0; i < rsize; i++)
        {
            
            for (int j = 0; j < csize; j++)
            {
                cout<<arr2[i][j]<<" ";
            }cout<<endl;
        }
            




        // int ans[100][100] = {0};
        // for (int i = 0; i < rsize; i++)
        // {
            
        //     for (int j = 0; j < csize; j++)
        //     {
        //         arr2[i][j] =arr2[j][i];
        //     }
            
        // }

        //  for (int i = 0; i < rsize; i++)
        // {
            
        //     for (int j = 0; j < csize; j++)
        //     {
        //         cout<<ans
        //         [i][j]<<" ";
        //     }cout<<endl;
            
        // }
        
    }

 
    int main()
    {
        int arr[3][4] = {
            {10, 100, 110, 101},
            {20, 200, 220, 202},
            {30, 300, 330, 303},
        };

         int arr2[3][3] = {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18},
        };

        int rowsize = 3;
        int colsize = 4;


        int rsize=3;
        int csize=3;



         cout << "rowsum :"<<endl;  

        printrowsum(arr, colsize, rowsize);

        cout<<endl;

        cout<<"colsum :"<<endl;                

        printcolsum(arr, colsize, rowsize);

        cout<<endl;

         cout << "diogonalsum :"<<endl;

        printdiogonalsum(arr2, csize, rsize);

        cout<<endl;

         cout << "antidiogonalsum :"<<endl;

        printantidiogonalsum(arr2, csize, rsize);

        cout<<endl;

        transposearray(arr2, csize, rsize);

        return 0;
    }