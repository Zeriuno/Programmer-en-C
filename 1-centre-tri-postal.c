#include <stdio.h>

int main()
{
	int count, id, i, code;
	char bla[4];

	scanf("%d", &count);
	for(i = 0; i < count; i++)
	{
		scanf("%d", &id);
		switch(id)
		{
			case 1:
			scanf(" %s %d", bla, &code);
			break;
		}
	}
	return 0;
}