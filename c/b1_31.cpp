#include <stdio.h>
int main() {
    int n;
	scanf("%d", &n);
	if (n >= 12 && n <= 1000000)
	{
		if (n%2==0)
		printf("%d %d", 4, n-4);
		else
		printf("%d %d", n-9, 9);
	}
    return 0;
}
