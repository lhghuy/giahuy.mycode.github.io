#include <stdio.h>
int main() {
    	int d, t, n;
	scanf("%d%d", &t, &n);
	if (n < 0 || t < 1 || t > 12)
	printf("INVALID");
	else
	{
		switch(t)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				d = 31;
				break;
			case 4: case 6: case 9: case 11:
				d = 30;
				break;
			default:
				if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
				d = 29;
				else
				d = 28;
		}
		printf("%d", d);
	}
    return 0;
}
