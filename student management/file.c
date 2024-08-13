#include<stdio.h>
void main(){
   int matrix[][5] = {
    {1, 2, 3, 4, 5},
    {2, 52, 923, 11, 23},
    {11, 23, 42, 23, 64},
    {53, 643, 23, 23, 34},
    {64, 92, 3822, 343, 23}
   };

   int num = matrix[0][0];

   for(int i = 0; i<5; i++){
    for(int j = 0; j<5; j++){
        if(matrix[i][j] > num)
            num = matrix[i][j];
    }
   }

   printf("%d\n", num);
}