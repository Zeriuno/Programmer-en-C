#include <stdio.h>
#define PARCELS_MAX 20
#define LIGHTWEIGHT 1.0
int main()
{
	int count, i, id, code;
	char bla[4];
	float weight;
	float parcels[2][PARCELS_MAX];

	scanf("%d\n", &count);
	for(i = 0; i < count; i++)
	{
		scanf("%d", &id);
		switch(id)
		{
			case 1:
			scanf(" %s %d\n", bla, &code);
			parcels[1][i] = (float)code;
			parcels[2][i] = LIGHTWEIGHT;
			break;
			case 2:
			scanf(" %f %d %s\n", &weight, &code, bla);
			parcels[1][i] = (float)code;
			parcels[2][i] = weight;
			break;
			case 3:
			scanf(" %d %f\n", &code, &weight);
			parcels[1][i] = (float)code;
			parcels[2][i] = weight;
			break;
		}
	}
	for(i = 0; i < count; i++)
	{
		printf("%.0f %.1f\n", parcels[1][i], parcels[2][i]);
	}
	return 0;
}