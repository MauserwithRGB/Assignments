#include <stdio.h>
int main(void)
{
    int A, B; 
    printf("Enter A, then B: "); 
    scanf("%d %d", &A, &B); 
    A = A + B;
    B = A - B;
    A = A - B;
    printf("A: %d\nB: %d\n", A, B); 
}