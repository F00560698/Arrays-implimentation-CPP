#include <iostream>
using namespace std;
int main()
{
  int s=0,x=0,i,j;
    int sparse_matrix[4][5]={
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };   
    
    for(i=0; i<4; i++){
        for(j=0; j<5; j++){
            if(sparse_matrix[i][j]!=0){
                s++;
            }
        }
    }
    int compact_matrix[3][s];
    for( i=0; i<4; i++){
        for(j=0; j<5; j++){
            if(sparse_matrix[i][j]!=0)
            {
                compact_matrix[0][x] = i;
                compact_matrix[1][x] = j;
                compact_matrix[2][x] = sparse_matrix[i][j];
                x++;
            } 
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<s; j++){
            cout <<" "<< compact_matrix[i][j];
        }
 
        cout <<"\n";
    }
    return 0;
}
