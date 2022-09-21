#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    
    string a, b;
    cin>>a;
    cin>>b;
    
    int lena = a.size();
    int lenb = b.size();
    cout<<lena<<" "<<lenb<<endl;
    
    string c = a + b;
    cout<<c<<endl;
    
    swap(a[0], b[0]);
    
    cout<<a<<" "<<b;
  
    return 0;
}
