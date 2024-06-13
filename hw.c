//Vowels and consonants
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char ch;
//     int vowels = 0, consonants = 0;

//     printf("Enter a string: ");

    
//     while ((ch = getchar()) != '\n') {
//         ch = tolower(ch); x

        
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             vowels++;
//         } else if (isalpha(ch)) { 
//             consonants++;
//         }
//     }

//     printf("Vowels: %d\n", vowels);
//     printf("Consonants: %d\n", consonants);

//     return 0;
// }

//Reversed number
// #include <stdio.h>

// int main() {
//     int num, reversedNumber = 0, remainder;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

    
//     while (num != 0) {
//         remainder = num % 10; 
//         reversedNumber = reversedNumber * 10 + remainder; 
//         num /= 10; 
//     }

//     printf("Reversed Number = %d\n", reversedNumber);

//     return 0;
// }


//Game
#include <stdio.h>

int main() {
    int gameSize, numGames = 0;

    printf("Welcome to the Game Downloader (Simulation Mode)\n");

    
    while (1) {
        printf("\nEnter the size of the game (MB) (or 0 to quit): ");
        scanf("%d", &gameSize);

        if (gameSize == 0) {
            break; 
        }

        if (gameSize <= 250) {
            printf("Great! This game (%d MB) meets the size requirement.\n", gameSize);
            numGames++; 
        } else {
            printf("Sorry, this game (%d MB) exceeds the 250 MB download limit.\n", gameSize);
        }
    }

    if (numGames > 0) {
        printf("\nYou have selected %d game(s) that meet the size requirement.\n", numGames);
    } else {
        printf("\nNo games were selected that meet the size requirement.\n");
    }

    return 0;
}
