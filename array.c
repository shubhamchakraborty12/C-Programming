//1-D Array
// #include<stdio.h>
// int main() {
//     int arr[5]={2,5,7,9,11};
//     for(int i = 0; i<5; i++) {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


//2-D Arrays
// #include<stdio.h>
// int main() {
//     int arr[3][5];
//     for(int i = 0; i<3; i++) {
//         for(int j = 0; j<5; j++) {
//             printf("Enter a series of number only 3 values are allowed: ");
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(int i = 0; i<3; i++) {
//         for(int j = 0; j<5; j++) {
//             printf("%d\n", arr[i][j]);
//         }
//     }
//     return 0;
// }


#include<stdio.h>
int main() {
    char sub[6] = {'M', '1', 'E', '2', '3', 'I'};
    int arr[10][6] = {
        {35,32,65,89,65,47},
        {15,45,65,58,95,75},
        {45,69,78,85,35,12},
        {45,85,96,32,25,75},
        {78,65,95,89,12,52},
        {96,78,55,56,25,75},
        {22,12,55,66,88,99},
        {88,79,97,85,58,65},
        {58,85,69,96,75,57},
        {54,65,96,35,25,75}
    };

    int a,b,roll = 0;

    printf("Press 1 to get mark\n");
    printf("Press 2 to get result\n");
    // printf("Press 3 to get whole result\n");
    printf("Enter your option: ");
    scanf("%d", &a);
    switch(a) {
        case 1 :
            printf("Enter the roll no: ");
            scanf("%d", &roll);
            printf("Press 1 for maths result\n");
            printf("Press 2 for science result\n");
            printf("Press 3 for english result\n");
            printf("Press 4 for Sanskrit result\n");
            printf("Press 5 for So.sci result\n");
            printf("Press 6 for IT result\n");
            printf("Enter your choice: ");
            scanf("%d", &b);
            switch(b) {
                case 1 :
                    printf("Maths: %d", arr[roll][0]);
                    break;
                case 2 :
                    printf("Science: %d", arr[roll][1]);
                    break;
                case 3 :
                    printf("English: %d", arr[roll][2]);
                    break;
                case 4 :
                    printf("Sanskrit: %d", arr[roll][3]);
                    break;
                case 5 :
                    printf("So.sci: %d", arr[roll][4]);
                    break;
                case 6 :
                    printf("IT: %d", arr[roll][5]);
                    break;
            }
            break;
        case 2 :
            printf("Enter the roll no: ");
            scanf("%d", &roll);
            for(int i = 0; i<6; i++) {
                printf("Result of roll no %d of %c: %d\n", roll, sub[i], arr[roll][i]);
            }
            printf("Where 'M' is Maths\n");
            printf("      '1' is Science\n");
            printf("      'E' is English\n");
            printf("      '2' is Sanskrit\n");
            printf("      '3' is So.sci\n");
            printf("      'I' is I.T\n");
            break;
        // case 3 :
        //     printf("Roll No.    Maths    Science    English    Sanskrit    So.Sci    I.T\n");
        //     for(int i = 0; i<10; i++) {
        //         for(int j = 0; j<10; j++) {
        //             printf("%d: %d ", roll + 1, arr[i][j]);
        //             roll++;
        //         }
        //         printf("\n");
        //     }
    }
    return 0;
}