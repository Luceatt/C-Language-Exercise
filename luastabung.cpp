#include <stdio.h>
int main()
{
	int T;
	double r, h, y;
	double phi = 3.14;
	scanf("%d", &T);
	
	for(int i = 1; i <= T; i++){
		scanf("%lf %lf", &r, &h);
		y = phi * 2 * r * (r + h);
		
		printf("Case #%d: %.2lf\n", i, y);
	}
	return 0;
}
