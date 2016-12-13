#include <stdio.h>
#define PARCELS_MAX 20
#define LIGHTWEIGHT 1.0
int main()
{
	int count, i, id, code;
	char bla[5];
	float weight;
	float parcels[2][PARCELS_MAX];

	scanf("%d\n", &count);
	for(i = 0; i < count; i++)
	{
		scanf("%d", &id);
		switch(id)
		{
			case 1:
			scanf(" %s %d", bla, &code);
			parcels[0][i] = (float)code;
			parcels[1][i] = LIGHTWEIGHT;
			break;
			case 2:
			scanf(" %f %d %s", &weight, &code, bla);
			printf("code = %d\n", code);
			parcels[0][i] = (float)code;
			printf("parcels[0][i] = %f\n", parcels[0][i]);
			parcels[1][i] = weight;
			break;
			case 3:
			scanf(" %d %f", &code, &weight);
			parcels[0][i] = (float)code;
			parcels[1][i] = weight;
			break;
		}
	}
	for(i = 0; i < count; i++)
	{
		printf("%.0f %.1f\n", parcels[0][i], parcels[1][i]);
	}
	return 0;
}
