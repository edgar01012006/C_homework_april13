#include <stdio.h>

void strlcpy(char* src, char* des, int des_size)
{
	if (des_size <= 0)
	{
		return;
	}

	int i = 0;

	while (i < des_size - 1 && src[i] != '\0')
	{
		des[i] = src[i];
		++i;
	}

	des[i] = '\0';

	return;
}

int main()
{
	char src[] = "hello";
	char des[10] = { '\0' };
	strlcpy(src, des, 5);
	printf("%s\n", des);
	return 0;
}