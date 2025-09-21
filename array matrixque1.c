//WAP to find the sum and product of the elements of anti-diagonals of a matrix.
#include <stdio.h>
int main() 
{
    int matrix[10][10], rows, cols;
    int sum = 0, product = 1;
    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i + j == cols - 1) 
            { 
                sum += matrix[i][j];
                product *= matrix[i][j];
            }}}
    printf("Sum of anti-diagonal elements: %d\n", sum);
    printf("Product of anti-diagonal elements: %d\n", product);

    return 0;
}
