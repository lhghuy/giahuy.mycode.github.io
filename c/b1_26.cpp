int main() {
    	int a, b, c, max, min;
	scanf("%d%d%d", &a, &b, &c);
	min = max = a;
	if (max < b)
	max = b;
	if (max < c)
	max = c;
	printf("%d  ", max);
	if (min > b)
	min = b;
	if (min > c)
	min = c;
	printf("%d", min);
    return 0;
}
//int max=a;
//if (b>a)
//max=b;
//if (c>b)
//max=c;
//
//printf("%d",max);
//int min=a;
//if (a>b)
//min=b;
//if (b>c);
//min=c;
//printf(" %d",min);
