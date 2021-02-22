//
// Laboratorul 1 - ex 2
//

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <cstring>

int main()
{
	FILE* data = fopen("in.txt", "r");

	char line[100];
	int lenght;
	int sum = 0;
	int power;

	while (fgets(line, 100, data))
	{
		lenght = strlen(line);
		if (line[lenght - 1] == '\n') lenght--;

		power = 1;
		lenght--;
		while (lenght >= 0)
		{
			sum += power * (line[lenght] - 48);
			power *= 10;
			lenght--;
		}
	}
	printf("%d", sum);
	return 0;
}