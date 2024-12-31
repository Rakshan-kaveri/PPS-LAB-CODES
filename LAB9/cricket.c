/*6. Define a structure for a cricket player with members for player name, team name, and batting average. Write a program to input data for multiple players and sort them by
batting average. (Use the concept of array and structures)
week: 9
date:06/11/2024*/
#include <stdio.h>

int main() {
    struct Player {
        char name[50];
        char team[50];
        float batting_average;
    } players[100];

    int n;

    printf("Enter the number of players (max 100): ");
    scanf("%d", &n);


    if (n > 100 || n < 1) {
        printf("Invalid number of players. Please enter a number between 1 and 100.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for player %d\n", i + 1);
        printf("Player Name: ");
        scanf(" %[^\n]%*c", players[i].name); 
        printf("Team Name: ");
        scanf(" %[^\n]%*c", players[i].team); 
        printf("Batting Average: ");
        scanf("%f", &players[i].batting_average);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (players[i].batting_average < players[j].batting_average)
             {
                struct Player temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }

    printf("\nPlayers sorted by batting average (high to low):\n");
    for (int i = 0; i < n; i++) {
        printf("Player %d: %s, Team: %s, Batting Average: %.2f\n", i + 1, players[i].name, players[i].team, players[i].batting_average);
    }

    return 0;
}
