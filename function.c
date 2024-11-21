// //Q1 sub
// int sub(int a, int b) {
//     int c = a-b;
//     return c;
// }

// //Q2 add
// int add(int a, int b) {
//     int c = a + b;
//     return c;
// }

// //Q3

// int divide(int a, int b) {
//     int c = a/b;
//     return c;
// }

// //Q4
// int remainder(int a, int b) {
//     int c = a % b;
//     return c;
// }

// //Q5
// int multi(int a, int b) {
//     int c = a * b;
//     return c;
// }

// int main() {
//     int ans1;
//     ans1 = multi(100, 200);
//     int ans2 = add(100, 200);
//     int ans3 = divide(200, 2);
//     int ans4 = remainder(200, 2);
//     int ans5 = sub(200, 100);
//     printf("%d\n", ans1);
//     printf("%d\n", ans2);
//     printf("%d\n", ans3);
//     printf("%d\n", ans4);
//     printf("%d\n", ans5);
//     return 0;
// }


#include<stdio.h>
//With return and argument
int add1(int a, int b) {
    int sum = a + b;
    return sum;
}
//with return without argument
int add2() {
    int a, b, sum;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    sum = a + b;
    return sum;
}
//with argument wihtout return
void add3(int a, int b) {
    int sum = a + b;
    printf("ans = %d", sum);
}
//without argument and without return
void add4() {
    int a, b, sum;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    sum = a + b;
    printf("ans = %d", sum);
}
int main() {
    printf("%d", add1(1,2));
    printf("\n");
    printf("%d", add2());
    printf("\n");
    add3(1, 2);
    printf("\n");
    add4();
    return 0;
}