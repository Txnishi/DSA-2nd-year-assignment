#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);
    
    int ar[n];
    
    for(int i = 0; i<n ; i++){
        scanf("%d", &ar[i]);
    }
    
    int sum = 0;
    
    for(int f = 0; f< n; f++){
        sum += ar[f];
    }
    
    printf("%d", sum);
      
    return 0;
}
