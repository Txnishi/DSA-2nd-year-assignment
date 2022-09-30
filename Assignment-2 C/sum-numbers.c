#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a , b;
    float c, d;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    int sum = a+b;
    int dif;

    dif = a-b;
    float sumf = c+d;
    float diff;
    diff= c-d;
    
    
    printf("%d %d\n", sum , dif);
    printf("%.1f %.1f", sumf, diff);
    
    
    
    
    
    return 0;
}
