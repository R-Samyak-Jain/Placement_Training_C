// #include<stdio.h>
// int main()
// {
//     int a=10;
//     if(a<20)
//     {
//         printf("Value of a is less than 20\n");
//     }
// }

// #include <stdio.h>
// int main() {
//   int num1, num2, num3, num4, largest;
//   printf("Enter four numbers: ");
//   scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
//   largest = num1;
//   if (num2 > largest) {
//     largest = num2;
//   }
//   if (num3 > largest) {
//     largest = num3;
//   }
//   if (num4 > largest) {
//     largest = num4;
//   }
//   printf("The largest number is: %d\n", largest);
//   return 0;
// }

#include <stdio.h>

int main() {
    char bloodGroup;
    printf("Enter your blood group (A, B, AB, or O): ");
    scanf(" %c", &bloodGroup);
    switch (bloodGroup) {
        case 'A':
            printf("You can donate to blood group B and AB\n");
            break;
        case 'B':
            printf("You can donate to blood group A and AB\n");
            break;
        case 'AB':
            printf("You can donate to blood group AB only\n");
            break;
        case 'O':
            printf("You can donate to all kinds of blood groups\n");
            break;
        default:
            printf("Invalid blood group entered.\n");
    }
    return 0;
}