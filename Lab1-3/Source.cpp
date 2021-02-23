//
// Laboratorul 1 - ex 3
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>

int main()
{
	char line[100];
	int lenght;
	char words[100][100];

	scanf("%[^\n]", line);
	lenght = strlen(line);
	

	printf("%d", lenght);
	return 0;
}