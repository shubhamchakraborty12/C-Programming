//Q1

// #include<stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 5; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Q2

// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

// #include<stdio.h>
// int main() {
//     for(int i = 5; i >= 1; i--) {
//         for(int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Q3

// #include<stdio.h>
// int main() {
//     char ch = 'a';
//     for(int i = 1; i <= 5; i++) {
//         for(char j = 1; j <= i; j++) {
//             printf("%c ", ch);
//             ch++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Q4

// #include<stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 5 - i; j++) {
//             printf(" ");
//         }
//         for(int j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     char a[10] = {"    ###    ","  ## ##   "," ##   ##  ","##     ## ","######### ","##     ## ","##     ##"};
//     for(int i = 0; a[i] != \0; i++) {
//         printf("%s\n", a[i]);
//     }
//     return 0;
// }