#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    char ch;
    scanf("%c/n", &ch);
    
    char s[MAX_LEN];
    scanf("%s\n", &s);
    
    char sen[MAX_LEN];
    
    scanf("%[^\n]%*s", &sen);
       
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
}
