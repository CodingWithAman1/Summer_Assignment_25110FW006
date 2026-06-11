//Write a program to Find diagonal sum.
#include <stdio.h>
void matIn(int matrix[10][10], int rows, int col){
    for (int i=0; i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
}

void matOut(int matrix[10][10], int rows, int col){
    for (int i=0; i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[10][10], rows, col, diagSum = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &col);
    printf("Enter the elements of the matrix: \n");
    matIn(mat, rows, col);
    printf("Matrix: \n");
    matOut(mat, rows, col);
    for (int i=0; i<rows;i++){
        for(int j=0;j<col;j++){
            if(i == j) {
                diagSum += mat[i][j];
            }
        }
    }
    printf("Diagonal sum of the matrix is: %d", diagSum);
    return 0;
}