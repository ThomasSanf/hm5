#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_SCORE 12
#define MIN_SCORE 2
#define TIMES 36000

int main() {
    int dice1, dice2, total;
    int frequency[MAX_SCORE + 1] = {0};

    srand(time(NULL));

    for(int throw = 0; throw< TIMES; throw++){
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        total= dice1+dice2;
        frequency[total]++;
    }
    printf("Score\tFrequency\n");

    for (int score = MIN_SCORE; score <= MAX_SCORE; score++) {
        printf("%d\t%d\n", score, frequency[score]);
    }

    double proportionOfSevens = (double)frequency[7] / TIMES;
    printf("Proportion of 7s: %.2f%%\n", proportionOfSevens * 100);

    return 0;
}
