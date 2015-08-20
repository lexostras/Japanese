#include <stdio.h>
#define MAX_DATA 100

int main(int argc, char *argv[])
{

	char str[MAX_DATA]; //Defining the input
	int i = 0;
	int x = 0;
	int y = 0;
	int z = 0;

	/* This is the presentation part. */
	printf("Presentation in pregress but yeah,\n");
	printf("thx for using for now.\n");

	do {

	/* Set and reset all counters */
		i = 0;
		y++;
		z++;
	/* Question and awnser +verification */

	/*---------「Question 1」-------*/

		printf("\n----「Question %d」----\n", z);
		printf("えいご --> ");
		scanf("%s", &str);
		z++;

		if( !strcmp(str, "english" ) ) {
			printf("Perfect :D.\n");
			printf("\n----「Question %d」----\n", z);
			i++;
		} else {
			printf("\n2 bad\n");
			x++;
		}

	/*---------「Question 2」-------*/

		printf("\n----「Question %d」----\n", z);
		printf("ご --> ");
		scanf("%s", &str);
		z++;

		if( !strcmp(str, "language" ) ) {
			printf("Perfect :D.\n");
			printf("\n----「Question %d」----\n", z);
			i++;
		} else {
			printf("\n2 bad\n");
			x++;
		}

	} while (i < 1);

	/*  Ending score */

	printf("\nYou passed with %d score.\n", i);
	printf("You failed %d times.\n", x);
	printf("You awnsered %d questions, that's quite good!\n",
		z);
	if( y > 1) {
		printf("You had to restart %d times.\n", y);
	} else {
		printf("You did not restart a single time, Good job.\n");
	}

	return 0;
}
