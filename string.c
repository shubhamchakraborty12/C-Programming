// #include<stdio.h>
// int main() {
//     char arr[5] = "Hello";
//     printf("%s", arr);
//     return 0;
// }
// #include<stdio.h>
// int factorial(int n) {
//     int a = n;
//     int b = a*factorial(n-1);
//     return b;
// }
// int main() {
//     printf("%d", factorial(5));
//     return 0;
// }

#include<stdio.h>
int main() {
    int n, a, b;
    printf("Enter the number: ");
    scanf("%d", &n);
    a = n%10;
    while(n != 0) {
        b = n/10;
        n/10;
    }
    printf("The first number is: %d and last number is: %d", b, a);
    return 0;
}