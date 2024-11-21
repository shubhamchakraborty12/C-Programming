// #include<stdio.h>
// int main() {
//     int a,b;
//     printf("Enter first Number : ");
//     scanf("%d", &a);
//     printf("Enter second number : ");
//     scanf("%d", &b);
//     int ans = a + b;
//     printf("%d + %d = %d", a, b, ans);
//     return 0;
// }
#include<stdio.h>
int main() {
    int radius;
    printf("Enter the radius : ");
    scanf("%d", &radius);
    float area = 3.14 * radius * radius;
    printf("The area of the circle is = %f", area);
    return 0;
}