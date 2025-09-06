#include <stdio.h>
int main ()
{
	//asignment operator (=)
//	int a = 20, b = 5, c = 6;
//	int d = b * c;
	
	//arithmetic operator
//	a = b + d; //(+, -, *, /, %, ())
//	a++; //increment [jangan menggunakan spasi]
//	printf("%d\n", a);
//	d--; //decrement
//	++a; 
//	printf("%d\n", a);

	//relational operator & logical operator
	/*	grade di binus
		A: score >= 90
		A-: score >= 85 and score < 90
		B+: score >= 80 and score < 85
		B: score >= 75 and score < 80
		B-: score >= 70 and score < 75
		C: score >= 65 and score < 70
	*/
	int score;
	printf("Input your algorithm score: ");
	scanf("%d", &score);
	if(score >= 90)
		printf("Your grade is A\n");
	else if(score >= 85 && score < 90)
		printf("Your grade is A-\n");
	else if(score >= 80 && score < 85)
		printf("Your grade is B+\n");
	else if(score >= 75 && score < 80)
		printf("Your grade is B\n");
	else if(score >= 70 && score < 75)
		printf("Your grade is B-\n");
	else if(score >= 65 && score < 70)
		printf("Your grade is C\n");	
	else
		printf("You failed the course\n");	
		
	//conditional assignment: ?:
	if(a > d)
		b = a;
	else
		b = d;
		b = (a > d) ;		
	return 0;
}
