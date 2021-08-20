#include<iostream>
//Sparse Matrix Problems
using namespace std;
int main()
{
    int sparseMatrix[4][4] = {{0,0,0,1},
                              {2,0,0,1},
                              {0,1,0,0},
                              {0,0,0,0}};
    int size = 0;
    for(int i = 0;i<4;i++)
        for(int j = 0;j<4;j++)
            if(sparseMatrix[i][j] != 0)
                size++;          //to count number of non-zero elements in an array

    int compactMatrix[3][size];
    int k=0;
                                //to store non-zero elements
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(sparseMatrix[i][j] != 0)
            {
                compactMatrix[0][k] = i;
                compactMatrix[1][k] = j;
                compactMatrix[2][k] = sparseMatrix[i][j];
                k++;
            }
/*
                Now compactMatrix is having only non-zero elements
                row =  0,1,1,2
                col =  3,0,3,1
                val =  1,2,1,1
*/
            for (int i=0; i<3; i++)
            {
            for (int j=0; j<size; j++)
                cout<<compactMatrix[i][j];
                cout<<endl;
            }

}
