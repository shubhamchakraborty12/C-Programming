//Q1
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q2
// *
// * *
// * * *
// * * * *
// * * * * *


// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q3
// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1
// 2 1
// 1


// #include<stdio.h>
// int main() {
//     for(int i = 5; i>=1; i--) {
//         for(int j = i; j>=1; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q3
// 5
// 4 5
// 3 4 5 
// 2 3 4 5 
// 1 2 3 4 5 


// #include<stdio.h>
// int main() {
//     for(int i = 5; i>=1; i--) {
//         for(int j = i; j<=5; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q4
// 1                            
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5


// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q5
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = i; j>=1; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q6
// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 


// #include<stdio.h>
// int main() {
//     for(int i = 5; i>=1; i--) {
//         for(int j = 5; j>=i; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q7
// 1 - 10 tables

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=10; i++) {
//         for(int j = 1; j<=10; j++) {
//             printf(" %d ", i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q8
// 1 - 100 counting
// 1 2 3 ......10 
// 11 12 13.....20
// 21 22 23......30
// .
// .
// .
// 91 92 93......100


// #include<stdio.h>
// int main() {
//     int a = 0;
//     for(int i = 1; i<=10; i++) {
//         for(int j = 1; j<=10; j++) {
//             ++a;
//             printf("%d ", a);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q9
//         *
//       * *
//     * * *
//   * * * *
// * * * * *


// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = i; j<=4; j++) {
//             printf("  ");
//         }
//         for(int k = 1; k<=i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q10
//     *
//    * *
//   * * *
//  * * * *
// * * * * *


// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = i; j<=4; j++) {
//             printf(" ");
//         }
//         for(int k = 1; k<=i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q11
// * * * * *
// * * * *              
// * * *
// * *
// *


// #include<stdio.h>
// int main() {
//     for(int i = 5; i>=1; i--) {
//         for(int j = i; j>=1; j--) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q12
// * * * * *
//  * * * *
//   * * *
//    * *
//     *


// #include<stdio.h>
// int main() {
//     for(int i = 5; i>=1; i--) {
//         for(int j = i; j<=4; j++) {
//             printf(" ");
//         }
//         for(int k = 1; k<=i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q13
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * * 
//   * * *
//    * *
//     *


// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = i; j<=4; j++) {
//             printf(" ");
//         }
//         for(int k = 1; k<=i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int l = 5; l>=1; l--) {
//         for(int m = l; m<=4; m++) {
//             printf(" ");
//         }
//         for(int n = 1; n<=l; n++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



//Q14
// 1 2 3 4
//   1 2 3
//     1 2 
//       1

// #include<stdio.h>
// int main() {
//     for(int i = 4; i>=1; i--) {
//         for(int j = i; j<=4; j++) {
//             printf("  ");
//         }
//         for(int k = 1; k<=i; k++) {
//             printf("%d ", k);
//         }
//         printf("\n");
//     }
//     return 0;
// }