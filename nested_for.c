// #include<stdio.h>
// int main() {
//     for(int i = 0; i<5; i++) {
//         for(int j = 0; j<4; j++) {
//             printf("%d%d ", i,j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// 11 12 13 14 15 
// 21 22 23 24 25 
// 31 32 33 34 35 
// 41 42 43 44 45 
// 51 52 53 54 55 



// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for (int j = 1; j <= 5; j++) {
//             if(i == 1) {
//                 printf("1 ");
//             }
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 5; j++) {
//             if(i == 1 || i == 5 || j == 1 || j == 5 || (i+j) == 6 || i == j) {
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



// 11 12 13 14 15
// 21 22 23 24 25
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55



// #include<stdio.h>
// int main() {
//     for(int i = 1; i<6; i++) {
//         for(int j = 1; j<6; j++) {
//             if(i == 1 || i == 6-1 || j == 1 || j == 6-1) {
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//=======================================================================================================================

//Q
// 1 0 0 0 0
// 1 0 0 0 0
// 1 0 0 0 0
// 1 0 0 0 0
// 1 0 0 0 0

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(j == 1) {
//                 printf("1 ");
//             }
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Q
// 1 0 0 0 0
// 1 1 0 0 0
// 1 1 1 0 0
// 1 1 1 1 0
// 1 1 1 1 1

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i > j || i == j) {
//                 printf("1 ");
//             }
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// 1 1 1 1 1
// 0 1 1 1 1
// 0 0 1 1 1
// 0 0 0 1 1
// 0 0 0 0 1

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i > j) {
//                 printf("0 ");
//             }
//             else {
//                 printf("1 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// 1 0 0 0 0
// 0 1 0 0 0
// 0 0 1 0 0
// 0 0 0 1 0
// 0 0 0 0 1

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i == j) {
//                 printf("1 ");
//             }
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// 0 0 0 0 1
// 0 0 0 1 0
// 0 0 1 0 0
// 0 1 0 0 0
// 1 0 0 0 0

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if((i + j) == 6) {
//                 printf("1 ");
//             }
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// 1 1 1 1 1
// 1 1 0 1 1
// 1 0 1 0 1
// 1 1 0 1 1
// 1 1 1 1 1


// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i == 1 || i == 5 || j == 1 || j == 5 || (i+j) == 6 || i == j) {
//                 printf("1 ");
//             }
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if((i + j) % 2 == 0) {
//                 printf("1 ");
//             }
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// *
// * *
// * * *
// * * * *
// * * * * *

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i > j || i == j) {
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if((i+j)>=6) {
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i > j) {
//                 printf("  ");
//             }
//             else {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i > j || i == j) {
//                 printf(" * ");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
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


//Q
// * * * * *
// * * * *
// * * *
// * *
// *

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if((i+j)<=6) {
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i == 1 || i == 6-1 || j == 1 || j == 6-1) {
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// *
// * *
// *   *
// *     *
// * * * * *

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i == 5 || j == 1 || i == j) {
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Q
// * * * * *
// * *   * *
// *   *   *
// * *   * *
// * * * * *

// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=5; i++) {
//         for(int j = 1; j<=5; j++) {
//             if(i == 1 || i == 5 || j == 1 || j == 5 || (i+j) == 6 || i == j) {
//                 printf("* ");
//             }
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
//=======================================================================================================================
//================================================== CLASSWORK ==========================================================
//=======================================================================================================================


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


//=========================================================================================================================
//==================================================== HOMEWORK ===========================================================
//=========================================================================================================================


//Q1
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



//Q2
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



//Q3
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

