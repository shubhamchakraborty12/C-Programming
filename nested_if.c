// #include<stdio.h>
// int main() {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     if(age>=0 && age<=80) {
//         if(age >= 18) {
//             printf("you can drive");
//         }
//         else {
//             printf("you can't drive");
//         }
//     }
//     else {
//         printf("Invalid age");
//     }
//     return 0;
// }

//=============================================================================================================

#include<stdio.h>
int main() {
    int paisa, friends, permission;
    printf("Kitne paise hai bkl = ");
    scanf("%d", &paisa);
    if(paisa>=10000) {
        printf("madarchod tere saath kitne bkl hai = ");
        scanf("%d", &friends);
        if(friends >= 5) {
            printf("maa baap ki permission mili? : ");
            scanf("%d", &permission);
            if(permission == 1) {
                printf("Jaa jee le apni zindagi");
            }
            else {
                printf("Kal aana bhen ke lode");
            }
        }
        else {
            printf("Gaand mara");
        }
    }
    else {
        printf("Me gareeb hu!!");
    }
    return 0;
}

//==============================================================================================================

//==============================================================================================================






