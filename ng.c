// second c program

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("number guesser\nguess a number in beetween 1-100\n");
    srand(time(NULL));
    int number = rand() % 100 + 1;
    int guess = 0;
    int tries = 0;
    do {
	if (scanf("%d", &guess)!= 1) {
	    while (getchar() != '\n')
		;
	    printf("numbers only bro\n");
	    continue;
	}
	tries++;
	const char *tungsahur = (guess < number) ? "higher number stupid" : (guess > number) ? "lower number idiot" : "correct number";
	printf("%s\nyou have tried %d times\n", tungsahur, tries);
    } while (guess != number);
    return 0;
}
