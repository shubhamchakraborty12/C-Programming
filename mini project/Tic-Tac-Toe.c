#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_NAME_LENGTH 50
#define BOARD_SIZE 10

// Function prototypes
void display_board(char board[]);
void player_input(char *marker);
void place_marker(char board[], char marker, int position);
int win_check(char board[], char mark);
char* choose_first(char *player1, char *player2);
int space_check(char board[], int position);
int full_board_check(char board[]);
int player_choice(char board[]);
int replay();
char *turn;

int main() {
    char player1[MAX_NAME_LENGTH], player2[MAX_NAME_LENGTH];
    char player1_marker, player2_marker;
    char the_board[BOARD_SIZE];
    int game_on, position;
    char play_game[4];

    printf("\n");
    printf("Welcome to Tic-Tac-Toe!!\n");
    printf("\n");
    printf("Enter the name of player 1: ");
    scanf("%s", player1);
    printf("\n");
    printf("Enter the name of player 2: ");
    scanf("%s", player2);

    srand(time(NULL));  // Seed for random number generation

    do {
        // Set everything up (board, whose first, choose markers X,O)
        memset(the_board, ' ', BOARD_SIZE);
        turn = choose_first(player1, player2);

        if (strcmp(turn, player1) == 0) {
            player_input(&player1_marker);
            player2_marker = (player1_marker == 'X') ? 'O' : 'X';
        } else {
            player_input(&player2_marker);
            player1_marker = (player2_marker == 'X') ? 'O' : 'X';
        }

        printf("%s will go first\n", turn);
        printf("Ready to play? (yes or no): ");
        scanf("%s", play_game);
        for (int i = 0; play_game[i]; i++) {
            play_game[i] = toupper(play_game[i]);
        }

        game_on = (strcmp(play_game, "YES") == 0);

        while (game_on) {
            if (strcmp(turn, player1) == 0) {
                display_board(the_board);
                printf("%s\n", player1);
                position = player_choice(the_board);
                place_marker(the_board, player1_marker, position);

                if (win_check(the_board, player1_marker)) {
                    display_board(the_board);
                    printf("%s has won!!\n", player1);
                    game_on = 0;
                } else if (full_board_check(the_board)) {
                    display_board(the_board);
                    printf("The game is a draw!\n");
                    game_on = 0;
                } else {
                    turn = player2;
                }
            } else {
                display_board(the_board);
                printf("%s\n", player2);
                position = player_choice(the_board);
                place_marker(the_board, player2_marker, position);

                if (win_check(the_board, player2_marker)) {
                    display_board(the_board);
                    printf("%s has won!!\n", player2);
                    game_on = 0;
                } else if (full_board_check(the_board)) {
                    display_board(the_board);
                    printf("The game is a draw!\n");
                    game_on = 0;
                } else {
                    turn = player1;
                }
            }
        }
    } while (replay());

    return 0;
}

void display_board(char board[]) {
    system("clear");  // For Unix-like systems. Use "cls" for Windows.
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[7], board[8], board[9]);
}

void player_input(char *marker) {
    do {
        printf("%s Choose X or O: ", turn);
        scanf(" %c", marker);
        *marker = toupper(*marker);
    } while (*marker != 'X' && *marker != 'O');
}

void place_marker(char board[], char marker, int position) {
    board[position] = marker;
}

int win_check(char board[], char mark) {
    return ((board[1] == mark && board[2] == mark && board[3] == mark) ||
            (board[4] == mark && board[5] == mark && board[6] == mark) ||
            (board[7] == mark && board[8] == mark && board[9] == mark) ||
            (board[1] == mark && board[4] == mark && board[7] == mark) ||
            (board[2] == mark && board[5] == mark && board[8] == mark) ||
            (board[3] == mark && board[6] == mark && board[9] == mark) ||
            (board[3] == mark && board[5] == mark && board[7] == mark) ||
            (board[1] == mark && board[5] == mark && board[9] == mark));
}

char* choose_first(char *player1, char *player2) {
    return (rand() % 2 == 0) ? player1 : player2;
}

int space_check(char board[], int position) {
    return board[position] == ' ';
}

int full_board_check(char board[]) {
    for (int i = 1; i < BOARD_SIZE; i++) {
        if (space_check(board, i)) {
            return 0;
        }
    }
    return 1;
}

int player_choice(char board[]) {
    int position;
    do {
        printf("Choose a position from 1 to 9: ");
        scanf("%d", &position);
    } while (position < 1 || position > 9 || !space_check(board, position));
    return position;
}

int replay() {
    char choice[4];
    printf("Do you want to play again? (Yes/No): ");
    scanf("%s", choice);
    for (int i = 0; choice[i]; i++) {
        choice[i] = toupper(choice[i]);
    }
    return strcmp(choice, "YES") == 0;
}