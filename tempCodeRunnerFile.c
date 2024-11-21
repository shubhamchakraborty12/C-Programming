#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    if(a>b) {
        if(a>c) {
            if(b>c) {
                printf("The biggest number is: %d\n", a);
                printf("The smallest number is: %d\n", c);
            }
            else {
                printf("The biggest number is: %d\n", a);
                printf("The smallest number is: %d\n", b);
            }
        }
        else {
            printf("The biggest number is: %d\n", c);
            printf("The smallest number is: %d\n", b);
        }
    }
    else {
        if(b>c) {
            if(a>c) {
                printf("The biggest number is: %d\n", b);
                printf("The smallest number is: %d\n", c);
            }
            else {
                printf("The biggest number is: %d\n", b);
                printf("The smallest number is: %d\n", a);
            }
        }
        else {
            printf("The biggest number is: %d\n", c);
            printf("The smallest number is: %d\n", a);
        }
    }
    return 0;
}
