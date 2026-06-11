// Write a program to Subtract matrices.
#include <Stdio.h>
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
void matSub(int matrix1[10][10],int matrix2[10][10],int matrix3[10][10], int rows, int col){
    
    for (int i=0; i<rows;i++){
        for(int j=0;j<col;j++){
            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}
int main(){
    int mat1[10][10], mat2[10][10], mat3[10][10], rows, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &col);
    printf("Enter the elements of first matrix: \n");
    matIn(mat1, rows, col);
    printf("Enter the elements of second matrix: \n");
    matIn(mat2, rows, col);
    printf("First matrix: \n");
    matOut(mat1, rows, col);
    printf("Second matrix: \n");
    matOut(mat2, rows, col);
    matSub(mat1, mat2, mat3, rows, col);
    printf("Difference of the two matrices is: \n");
    matOut(mat3, rows, col);
    return 0;
}