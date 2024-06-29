#include <iostream>

using namespace std;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 10;
    A[2] = 40;
    A[3] = 5;
    A[4] = 0;
    cout << sizeof(A) << endl;
    cout << A[1] << endl;
    printf("%d\n", A[3]);
    
    int B[4] = {15,12,56,59};
    cout << sizeof(B) <<endl;
    
    int C[] = {12,56,59,43,50,99};
    cout << sizeof(C) <<endl;

    int D[5] = {10};
    for(int i=0; i<5; i++){
        cout << D[i] << " ";
    } cout << endl;

    int E[5] = {12,56,59,43,90};
    for(int x:E){
        cout << x << " ";
    } cout << endl;

    cout << "Enter Size: ";
    int n; cin >> n;
    int F[n]; // expression must have a constant value. But works in latest compilers.
    F[0] = {12};
    for(int x:F){
        cout << x << " ";
    }

    return 0;
}
