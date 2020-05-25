/* platinum.c -- your weigth in platinum */
# include <stdio.h>

int main(void)
{
	float weigth;
	float value;

	printf("Are you worth your weigth in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	scanf("%f", &weigth);

	value = 1700.0 * weigth * 14.4833;
	printf("Your weigth in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to mintain your value. \n");

	return 0;
	
}

