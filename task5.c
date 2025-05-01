#include <stdio.h>

void strcpy(char* src, char* des)
{
	int i = 0;

	while (src[i] != '\0')
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
	strcpy(src, des);
	printf("%s\n", des);
	return 0;
}