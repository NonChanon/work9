#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int myStrLen(char*);
int main()
{
	int x = 0, X = 0;
	char arr[1000];
	scanf("%s", arr);
	for (int i = 0; i < myStrLen(arr); i++)
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			x = 1;
		}
		else if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			X = 1;
		}
	}
	if (x == 1 && X == 1)
	{
		printf("mix");
	}
	else if (x == 1)
	{
		printf("All Small Letter");
	}
	else if (X == 1)
	{
		printf("All Capital Letter");
	}


}
int myStrLen(char* a)
{
	int len = 0;
	while (a[len] != '\0')
	{
		len = len + 1;
	}
	return len;
}