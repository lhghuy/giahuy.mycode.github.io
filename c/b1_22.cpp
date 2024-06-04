#include <stdio.h>
int main() {
    char x;
	scanf("%c", &x);
	if ((x >= '1') && (x <= '9'))
	printf("YES");
	else
	printf("NO");
    return 0;
}
