#include <stdio.h>

int main() {
    double value;
    scanf("%lf", &value);

    int notes[6] = {100, 50, 20, 10, 5, 2};
    double coins[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int num_notes = value / notes[i];
        printf("%d nota(s) de R$ %d.00\n", num_notes, notes[i]);
        value -= num_notes * notes[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int num_coins = value / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", num_coins, coins[i]);
        value -= num_coins * coins[i];
    }

    return 0;
}
