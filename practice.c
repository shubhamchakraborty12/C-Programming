//Q1
// #include<stdio.h>
// int main() {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", age);
//     if(age >= 18) {
//         printf("You're eligible to vote");
//     }
//     else {
//         printf("Not eligible to vote");
//     }
//     return 0;
// }

//=============================================================================================================

//Q2
// #include<stdio.h>
// int main() {
//     int val;
//     printf("Enter a number : ");
//     scanf("%d", val);
//     if(val % 2 == 0) {
//         printf("The number is even");
//     }
//     else {
//         printf("The number is odd");
//     }
//     return 0;
// }

//=============================================================================================================

//Q3
// #include<stdio.h>
// int main() {
//     int a;
//     int b;
//     printf("Enter the first number: ");
//     scanf("%d", a);
//     printf("Enter the second number: ");
//     scanf("%d", b);

//     if(a > b) {
//         printf("%d is greater than %d", a,b);
//     }
//     else {
//         printf("%d is greater than %d", b,a);
//     }
//     return 0;
// }

//================================================================================================================

//Q4
// #include<stdio.h>
// int main() {
//     int val1, val2, val3;
//     printf("Enter the first angle: ");
//     scanf("%d", val1);
//     printf("Enter the second angle: ");
//     scanf("%d", val2);
//     printf("Enter the third angle: ");
//     scanf("%d", val3);
//     int sum = val1 + val2 + val3;
//     if(sum == 180) {
//         printf("It is a triangle");
//     }
//     else {
//         printf("It is not a triangle");
//     }
//     return 0;
// }

//=================================================================================================================

//Q5
// #include<stdio.h>
// int main() {
//     int year;
//     printf("Enter the year: ");
//     scanf("%d", year);
//     if(year % 4 == 0 || year % 400 == 0) {
//         printf("It is a leap year");
//     }
//     else {
//         printf("It is not a leap year");
//     }
//     return 0;
// }

//==================================================================================================================

// #include<stdio.h>
// int main() {
//     int val;
//     printf("Enter a number: ");
//     scanf("%d", &val);
//     switch(val) {
//         case 1:
//             printf("Sunday");
//             break;
//         case 2:
//             printf("Monday");
//             break;
//         case 3:
//             printf("Tuesday");
//             break;
//         case 4:
//             printf("Wednesday");
//             break;
//         case 5:
//             printf("Thursday");
//             break;
//         case 6:
//             printf("Friday");
//             break;
//         case 7:
//             printf("Saturday");
//             break;
//         default:
//             printf("Invalid entry");
//             break;
//     }
//     return 0;
// }
// ==============================================================================================================



// =================================== FOR LOOPS ================================================================


//Q1 print counting 1 to 100
// #include<stdio.h>
// int main() {
//     for(int i = 1; i<=100; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

//Q2 print counting 100 to 1
// #include<stdio.h>
// int main() {
//     for(int i = 100; i>=1; i--) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

//Q3 print all even number 50 to 100
// #include<stdio.h>
// int main() {
//     for(int i = 50; i<=100; i++) {
//         if(i % 2 == 0) {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }


//Q5 print your name 20 times
// #include<stdio.h>
// int main() {
//     for(int i = 0; i<21; i++) {
//         printf("Shubham\n");
//     }
//     return 0;
// }


//Q4 print number of leap year 0 to 2024
//code for total number of leap years...
// #include<stdio.h>
// int main() {
//     int a = 0;
//     for(int i = 0; i<=2024; i++) {
//         if(i % 4 == 0 || i % 400 == 0) {
//             a++;
//         }
//     }
//     printf("%d", a);
//     return 0;
// }

//Q4 print number of leap year 0 to 2024

//code for printing the leap years....
// #include<stdio.h>
// int main() {
//     for(int i = 0; i<=2024; i++) {
//         if(i % 4 == 0 || i % 400 == 0) {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }
// ==============================================================================================================




// #include<stdio.h>
// int main() {
//     int n, sum; 
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         printf("Enter the values of array: ");
//         scanf("%d", &arr[i]);
//     }
//     printf("The values of array are: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int n;
//     printf("Enter the size of the string: ");
//     scanf("%d", &n);
//     char str[n];
//     printf("Enter the string: ");
//     scanf("%s", str);
//     printf("The string is: %s", str);
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     char str[100];
//     int a;
//     printf("Enter your full name: ");
//     gets(str);
//     printf("Enter your age: ");
//     scanf("%d", &a);
//     printf("Your name is %s and your age is %d.", str, a);
//     return 0;
// }


