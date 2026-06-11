//Write a program to Transpose matrix.
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
void matTrans(int matrix[10][10],int trans[10][10], int rows, int col){
    
    for (int i=0; i<rows;i++){
        for(int j=0;j<col;j++){
            trans[j][i] = matrix[i][j];
        }
    }
}
int main(){
    int mat[10][10], trans[10][10], rows, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &col);
    printf("Enter the elements of the matrix: \n");
    matIn(mat, rows, col);
    printf("Original matrix: \n");
    matOut(mat, rows, col);
    matTrans(mat, trans, rows, col);
    printf("Transpose of the matrix is: \n");
    matOut(trans, col, rows);
    return 0;
}