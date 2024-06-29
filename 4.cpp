#include <iostream>
using namespace std;

int main(){
    int a=10;

    // Reference (only available in C++) 
    int &r = a;
    // r and a points to the same value in memory now

    cout << a << endl;
    r++;
    cout << a << endl;

    a = 25;
    cout << r << endl;

    return 0;
}