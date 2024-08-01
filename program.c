#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char computer) {
    if (you == computer)
        return -1;
    if ((you == 'r' && computer == 's') || (you == 's' && computer == 'p') || (you == 'p' && computer == 'r'))
        return 1;
    else
        return 0;
}

int main() {
    int n;
    char you, computer;
    srand(time(NULL));

    for(int num = 0; num < 100; num++) { 
        n = rand() % 100;
        if (n < 33)
            computer = 'r';
        else if (n < 66)
            computer = 'p';
        else
            computer = 's';

        printf("Enter r for Rock, p for PAPER and s for SCISSOR: ");
        scanf(" %c", &you); 

        int result = game(you, computer);
        if (result == -1) {
            printf("\nGame Draw!\n");
        } else if (result == 1) {
            printf("\nWow! You have won the game!\n");
        } else { 
            printf("\nOh! You have lost the game!\n");
        }

        printf("You chose: %c and Computer chose: %c\n\n", you, computer);
    }
    return 0;
}
