#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char alphabet[1000];
	int n=0;
	scanf("%s", &alphabet);

			for (int i = 0; alphabet[i] != '\0'; i++)
			{
				if (alphabet[i] >= 65 && alphabet[i] <= 90)
				{
					printf("%c", alphabet[i] + 32);
				}
				else if (alphabet[i] >= 91 && alphabet[i] <= 122)
				{
					printf("%c", alphabet[i] - 32);
				}
				else
				{
					printf("\nERROR");
					return 0;
				}
			}
	
	return 0;
}