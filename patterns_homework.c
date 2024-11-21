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


// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if((i+j)>=6)
//             {
//                 printf("* ");
//             }
//             else 
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
