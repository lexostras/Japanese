/* This program is a compilation of all of my japanese programs  */

#include <stdio.h>

#define MAX_DATA 100

void main()
{
	char menustr[MAX_DATA]; // Menu str
	int score = 0;
	int EROR = 0;

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("Hy welcome to japanese test.\n");
	printf("You have a total of 3 live.\n");
	printf("Please chose your test.");

	do {
		printf("\n-------------------------------------\n\n");
		printf("Test:\n -countries\t-family\t-buisnes\t-jobs\t-languages\t-school\n");
		printf("To quit just enter q.\n>>");
		scanf("%s", &menustr);

		if( !strcmp( menustr, "countries" )) {
			printf("Loading countries...\n");
			//countries(score);
			printf("You're score on countries is: %d.\n", countries(score));
		} else if( !strcmp( menustr, "buisnes" )) {
			printf("Loading buisnes...\n");
			//buisnes(score);
			printf("You're score on buisnes is: %d.\n", buisnes(score));
		} else if( !strcmp( menustr, "family\n" )) {
			printf("Loading family...");
			//family(score);
			printf("You're score on family is: %d.\n", family(score));
		} else if(!strcmp(menustr, "job" )) {
			printf("Loading job....\n");
			//job(score);
			printf("You're score on job is:%d.\n", job(score));
		} else if( !strcmp(menustr, "languages")) {
			printf("Loading languages...");
			//languages(score);
			printf("You're score on languages is:%d.\n", languages(score));
		} else if(!strcmp(menustr, "school")) {
			printf("Loading school...");
			//school(score);
			printf("You're score on school is: %d.\n", school(score));
		} else if( !strcmp( menustr, "q" ) ) {
			printf("Good bye.\n");
			break;
		}else {
			printf ("ERROR!! unknow command.\n");
		}

	} while (EROR != 1);
}

int countries(int score)
{
	char str[MAX_DATA];
	int i = 0;
	int z = 1;

	/* Question and awnser +verification */

	/*---------「Question 1」-------*/

	printf("\n----「Question %d」----\n", z);
	printf("アメリカ --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "america" ) ) {
		printf("Perfect, Well done :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nTerrible D:\n");
	}

	/*---------「Question 2」-------*/

	printf("イギリス --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "england") ) {
		printf("Good job dude :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nHow bad are you??\n");
	}

	/*---------「Question 3」-------*/

	printf("オーストラリア --> ");
	scanf("%s", str);
	z++;

	if( !strcmp(str, "australia") ) {
		printf("Now that's good.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nSeriously...-_-\n");
	}

	/*---------「Question 4」-------*/

	printf("かんこく --> ");
	scanf("%s", str);
	z++;

	if( !strcmp(str, "korea") ) {
		printf("Perfect :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nYou have to revise that one!\n");
	}

	/*---------「Question 5」-------*/

	printf("スウェーデン --> ");
	scanf("%s", str);
	z++;

	if( !strcmp(str, "sweden") ) {
		printf("Yeah yeah yeah :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nThat one was obvious.\n");
	}

	/*---------「Question 6」-------*/

	printf("ちゅうごく --> ");
	scanf("%s", str);
	//z++;

	if( !strcmp(str, "china") ) {
		printf("Well done you did all of them.\n");
		//printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nOh well it's finished D:\n");
	}

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	return score + i;
}

int buisnes(score)
{
	char str[MAX_DATA];
	int i = 0;
	int z = 1;

	/* Question and awnser +verification */


	/*---------「Question 1」-------*/

	printf("\n----「Question %d」----\n", z);
	printf("ビジネス --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "buisnes" ) ) {
		printf("On a good start :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nwell that is depressing!\n");
	}

	/*---------「Question 2」-------*/

	printf("コンピューター --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "computer") ) {
		printf("well done sir.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nNonsence.\n");
	}

	/*---------「Question 3」-------*/

	printf("けいざい --> ");
	scanf("%s", str);
	z++;

	if( !strcmp(str, "economics") ) {
		printf("excuse me.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nrubish\n");
	}

	/*---------「Question 4」-------*/

	printf("せいじ --> ");
	scanf("%s", str);
	z++;

	if( !strcmp(str, "politics") ) {
		printf("i cant express my joy.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\n#?@#\n");
	}

	/*---------「Question 5」-------*/

	printf("こくさいかんけい --> ");
	scanf("%s", str);
	//z++;

	if( !strcmp(str, "international-relations") ) {
		printf("Perfect :D.\n");
		//printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nthat one was hard i admit it\n");
	}

	/*---------「Question 6」-------*/

	printf("じんるいがく --> ");
	scanf("%s", str);
	//z++;

	if( !strcmp(str, "antropology") ) {
		printf("How did you do that??.\n");
		//printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nworst\n");
	}


	return score + i;
}

int family(score)
{
	char str[MAX_DATA];
	int i = 0;
	int z = 1;

	/* Question and awnser +verification */

	/*---------「Question 1」-------*/

	printf("\n----「Question %d」----\n", z);
	printf("おねえさん --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "elder-sister" ) ) {
		printf("Perfecto :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nNow that's rubish\n");
	}

	/*---------「Question 2」-------*/

	printf("おにいさん --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "older-brother") ) {
		printf("Yo for real.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nOMG you are terrible\n");
	}

	/*---------「Question 3」-------*/

	printf("いもうと --> ");
	scanf("%s", str);
	z++;

	if( !strcmp(str, "young-sister") ) {
		printf("Well done.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nThat one is easy.. how??\n");
	}

	/*---------「Question 4」-------*/

	printf("おとうと --> ");
	scanf("%s", str);
	z++;
	
	if( !strcmp(str, "younger-brother") ) {
		printf("Now that's better.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nOh my gosh you are doing horrible\n");
	}

	/*---------「Question 5」-------*/

	printf("おとうさん --> ");
	scanf("%s", str);
	z++;

	if( !strcmp(str, "father") ) {
		printf("I AM YOUR FATHER.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nNOOOOOOO\n");
	}

	/*---------「Question 6」-------*/

	printf("おかあさん --> ");
	scanf("%s", str);
	z++;

	if( !strcmp(str, "mother") ) {
		printf("Nice.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nOh well to bad.\n");
	}

	/*---------「Question 7」-------*/

	printf("しゅふ --> ");
	scanf("%s", str);
	//z++;

	if( !strcmp(str, "housewife") ) {
		printf("Well done.\n");
		//printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nto bad it's finished\n");
	}

	return score + i;
}

int job(score)
{
	char str[MAX_DATA];
	int i = 0;
	int z = 1;

	/* Question and awnser +verification */

	/*---------「Question 1」-------*/

	printf("\n----「Question %d」----\n", z);
	printf("しごと --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "work" ) ) {
			printf("good job.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nmaybey next time\n");
	}

	/*---------「Question 2」-------*/

	printf("いしゃ --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "doctor") ) {
		printf("Finaly :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nSee Yah!\n");
	}

	/*---------「Question 3」-------*/

	printf("かいしゃいん --> ");
	scanf("%s", str);
	z++;
	
	if( !strcmp(str, "office-worker") ) {
		printf("Perfect :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nterrible\n");
	}

	/*---------「Question 4」-------*/

	printf("べんごし --> ");
	scanf("%s", str);
	//z++;
	
	if( !strcmp(str, "lawyer") ) {
		printf("Well done yo.\n");
		//printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\noh well maybey next time\n");
	}

	return score + i;
}

int languages(score)
{
	char str[MAX_DATA];
	int i = 0;
	int z = 1;

	/* Question and awnser +verification */

	/*---------「Question 1」-------*/

	printf("\n----「Question %d」----\n", z);
	printf("えいご --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "english" ) ) {
		printf("Amazing.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nohmagurd you suck\n");
	}

	/*---------「Question 2」-------*/

	printf("\n----「Question %d」----\n", z);
	printf("ご --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "language" ) ) {
		printf("Well done.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\nrubish\n");
	}

	return score + i;
}

int school(score)
{
	char str[MAX_DATA];
	int i = 0;
	int z = 1;

	/* Question and awnser +verification */

	/*---------「Question 1」-------*/

	printf("\n----「Question %d」----\n", z);
	printf("かがく --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "science" ) ) {
		printf("Perfect :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\n2 bad\n");
	}

	/*---------「Question 2」-------*/

	printf("ぶんがく --> ");
	scanf("%s", &str);
	z++;

	if( !strcmp(str, "literature") ) {
		printf("Perfect :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\n2 bad\n");
	}

	/*---------「Question 3」-------*/

	printf("れきし --> ");
	scanf("%s", str);
	z++;

	if( !strcmp(str, "history") ) {
		printf("Perfect :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\n2 bad\n");
	}

	/*---------「Question 4」-------*/

	printf("だいがくいんせい --> ");
	scanf("%s", str);
	z++;
	
	if( !strcmp(str, "graduate-student") ) {
		printf("Perfect :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\n2 bad\n");
	}

	/*---------「Question 5」-------*/

	printf("だいがくせい --> ");
	scanf("%s", str);
	z++;
	
	if( !strcmp(str, "university-student") ) {
		printf("Perfect :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\n2 bad\n");
	}

	/*---------「Question 6」-------*/

	printf("こうこうせい --> ");
	scanf("%s", str);
	z++;
	
	if( !strcmp(str, "highschool-student") ) {
		printf("Perfect :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\n2 bad\n");
	}

	/*---------「Question 7」-------*/

	printf("がくせい --> ");
	scanf("%s", str);
	z++;
	
	if( !strcmp(str, "student") ) {
		printf("Perfect :D.\n");
		printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\n2 bad\n");
	}

	/*---------「Question 8」-------*/

	printf("せんせい --> ");
	scanf("%s", str);
	//z++;
	
	if( !strcmp(str, "teacher") ) {
		printf("Perfect :D.\n");
		//printf("\n----「Question %d」----\n", z);
		i++;
	} else {
		printf("\n2 bad\n");
	}

	return score + i;
}
