#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    
    int a;
    long int b;
    char c;
    float d;
    double e;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d,&e);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed;
    cout<<setprecision(3)<<d<<endl;
    cout<<setprecision(9)<<e<<endl;
    
    return 0;
}
