#include <stdio.h>

int main(void)
{
	int i, j;

	int num = 29;
	char *str = "string";
	int arr_num[3] = {1, 2, 3};
	char *arr_str[3] = {"c", "is", "fun"};

	void *list[4] = {&num, str, arr_num, arr_str};

	printf("[");
	for (i = 0; i < 4; i++)
	{
		if (i == 0)
			printf("%d ,", *(int *)list[i]);
		else if (i == 1)
			printf("'%s', ", (char *)list[i]);
		else if (i == 2)
		{
			printf("[");
			for (j = 0; j < 3; j++)
			{
				printf("%d", ((int *)list[i])[j]);
				if (j != 2)
					printf(", ");
			}
			printf("], ");
		}
		else
		{
			printf("[");
			for (j = 0; j < 3; j++)
			{
				printf("%s", ((char **)list[i])[j]);
				if (j != 2)
					printf(", ");
			}
			printf("]");
		}
	}
	printf("]\n");
}
