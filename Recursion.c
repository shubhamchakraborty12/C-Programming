//fibonacci....

// #include<stdio.h>
// int fibonacci(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     else if(n == 1) {
//         return 1;
//     }
//     else {
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }
// int main() {
//     int num, i;
//     printf("Enter the number of terms: ");
//     scanf("%d", &num);
//     for(i = 0; i<num; i++) {
//         printf("%d ", fibonacci(i));
//     }
// }


//Enter a string  = {}{{{}{}}}

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char c[100];
//     int a = 0;
//     printf("Enter a string of {} : ");
//     scanf("%s", &c);
//     int n = strlen(c);
//     for(int i = 0; i < n; i++) {
//         if(a >= 0) {
//             if(c[i] == '{') {
//                 ++a;
//             }
//             else {
//                 --a;
//             }    
//         }
//         else {
//             break;
//         }
//     }
    
//     if(a == 0) {
//         printf("Valid Syntax");
//     }
//     else {
//         printf("Invalid Syntax");
//     }
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[100];
//     int a = 0;
//     printf("Enter a string : ");
//     scanf("%s", &str);
//     int n = strlen(str);
//     for(int i = 0; i < n; i++) {
//         if(a >= 0) {
//             if(str[i] == '{') {
//                 a++;
//             }
//             else {
//                 a--;
//             }
//         }
//         else {
//             break;
//         }
//     }
//     if(a == 0) {
//         printf("Valid Syntax");
//     }
//     else {
//         printf("Invalid Syntax");
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[100];
//     printf("Enter a signal color: ");
//     scanf("%s", &str);
//     if(str == "Yellow") {
//         printf("Ready!!");
//     }
//     else if(str == "Red") {
//         printf("Stop!!!");
//     }
//     else if(str == "Green") {
//         printf("GOOOO!!!!");
//     }
// }

#include<stdio.h>
int factorial(int n) {
    int i = 1;
    i = i * n;
    return factorial(n-1);
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}