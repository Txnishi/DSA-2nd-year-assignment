#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int l, int m, int n, int o){
    int max;
    
    if(l>m && l>n && l>o){
        max = l;
    }else if(m>n && m>o){
        max = m;
    }else if(n>o){
        max = n;
    }else{
        max = o;
    }
    
    
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
