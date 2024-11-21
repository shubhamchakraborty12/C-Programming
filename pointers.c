// #include<stdio.h>
// int main() {
//     int age = 22;
//     int *ptr = &age;
//     // printf("%p\n", &age);
//     printf("%u\n", &age);
//     printf("%u\n", ptr);
//     printf("%u", &ptr);
//     return 0;
// }
//0061FF14- ptr


// #include<stdio.h>
// int main() {
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     printf("%d\n", ptr);
//     printf("%d\n", *pptr);
//     printf("%d", **pptr);
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int priya = 20;
//     int *yatharth = &priya;

//     printf("Age of priya = %d\n", priya);
//     printf("address of priya = %p\n", &priya);
//     printf("value of yatharth = %p\n", yatharth);
//     printf("address of yatharth = %p\n", &yatharth);
//     printf("value of *yatharth = %d\n", *yatharth);
//     printf("\n");

//     int **police = &yatharth;
//     printf("Value of police = %p\n", police);
//     printf("address of poilice = %p\n", &police);
//     printf("Value of *police = %p\n", *police);
//     printf("Value of **police = %d\n", **police);
//     printf("\n");

//     int ***CBI = &police;
//     printf("Value of CBI = %p\n", CBI);
//     printf("address of CBI = %p\n", &CBI);
//     printf("Value of *CBI = %p\n", *CBI);
//     printf("Value of **CBI = %p\n", **CBI);
//     printf("Value of ***CBI = %d\n", ***CBI);
//     return 0;
// }



//call by value and call by reference
#include <stdio.h>
void swap(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 10, b = 20;
    printf("Before swapping: \n");
    printf("a = %d and b = %d\n", a,b);
    swap(&a, &b);
    printf("After swapping: \n");
    printf("a = %d and b = %d\n", a,b);
    return 0;
}
