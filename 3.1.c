#include <stdio.h>

int main() {
    printf("Name - Ayush Negi\nSAP iD - 590029062\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    int N;
    
    printf("Enter an integer N: ");
    scanf("%d", &N);
    
    if (N % 2 == 0) {
        printf("%d is an Even number.\n", N);
    } else {
        printf("%d is an Odd number.\n", N);
    }
    
    return 0;
}