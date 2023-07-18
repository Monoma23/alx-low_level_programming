#include <stdio.h>

/**
 * main - displayss first 50 Fibonaci numbers, that begins from 1 and 2,
 *        in between there is a comma then a space.
 *
 * Return:  0.
 */
int main(void)
{
	int compteur;
	unsigned long a = 0, b = 1, somme;

	for (compteur = 0; compteur < 50; compteur++)
	{
		somme = a + b;
		printf("%lu", somme);

		a = b;
		b = somme;

		if (compteur == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

