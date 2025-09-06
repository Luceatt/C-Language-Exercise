#include <stdio.h>
int main ()
{
	long long int d, s, t;
	scanf("%lld %lld %lld", &d, &s, &t);
	
	if (d > s && d > t && s > t){
		printf("Daging\n");
		printf("Sayur\n");
		printf("Telur\n");
	}
	else if (d > t && d > s && t > s){
		printf("Daging\n");
		printf("Telur\n");
		printf("Sayur\n");
	}
	else if (s > d && s > t && d > t){
		printf("Sayur\n");
		printf("Daging\n");
		printf("Telur\n");
	}
	else if (s > t && s > d && t > d){
		printf("Sayur\n");
		printf("Telur\n");
		printf("Daging\n");
	}
	else if (t > d && t > s && d > s){
		printf("Telur\n");
		printf("Daging\n");
		printf("Sayur\n");
	}
	else if (t > s && t > d && s > d){
		printf("Telur\n");
		printf("Sayur\n");
		printf("Daging\n");
	}
	else {
		printf("None\n");
	}
	return 0;
}
