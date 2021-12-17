#include<stdio.h>
#include "my_mat.h"
#include<stdbool.h>
#include<limits.h>
#define  N 10
int g[N][N];

int floydWarshall(int x , int y ){
int matrix [N][N],i,j,k;
for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        matrix[i][j]=g[i][j];
    }
}

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i != j && matrix[i][j] == 0)
            {
                matrix[i][j] = INT_MAX;
            }
        }
    }
    
for(k=0;k<N;k++){
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(matrix[i][k]+matrix[k][j]<matrix[i][j])
                matrix[i][j]=matrix[i][k]+matrix[k][j];
        }
    }
}   


if(matrix[x][y] == 0 || matrix[x][y] == INT_MAX){
return - 1;
}

return matrix[x][y];




}



void NEW_INPUT()
{
            for(int i =0;i< N;i++)
            {
                for(int j=0;j<N;j++)
                {
                   
                    scanf("%d \n",&g[i][j]);
                }
                
            }  

}
bool Exists_PATH(int i,int j)
{   
       int result = floydWarshall(i , j);
        if(result == -1){
           return  false;
        }


    return true;
    
}