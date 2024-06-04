#include <stdio.h>
int main() {
    int a, a1 = 0, a2 = 0, val1, val2;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d%d", &val1, &val2);
		if (val1 > val2)
		{
			a1 ++;
		}
		else if (val2 > val1) {
			a2++;
		}
	}
	if (a1 > a2)
	printf("Mishka");
	else if (a2 > a1)
	printf("Chris");
	else 
	printf("Friendship is magic! ^^");
    return 0;
}

