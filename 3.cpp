#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    int a = 10;
    // int *p is declaration
    int *p;
    // p = &a is initialization/assignment
    p = &a;
    // p stores address of a
    // *p retrieves the value stored in the address of a (value of a)
    printf("%d %d %d %d\n", a,p,*p, &a);
    // accessing *p is dereferencing
    // &a retrieves the address of a

    int A[5] = {1,2,3,4,5};
    p = A; // or p=*A[0]
    for(int i=0; i<5; i++){
        cout << A[i] << "  " << p[i] << endl;
    }

    // C way of storing array in heap
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 10; p[1] = 12; p[2] = 14; p[3] = 16; p[4] = 18;
    for (int i=0; i<5; i++){
        cout << p[i] << " ";
    } cout << endl;
    free(p); // To release the memory allocated in heap - C

    // C++ way of storing array in heap
    p = new int[5];
    p[0] = 20; p[1] = 22; p[2] = 24; p[3] = 26; p[4] = 28;
    for (int i=0; i<5; i++){
        cout << p[i] << " ";
    } cout << endl;
    delete [] p; // To release the memory allocated in heap - C++

    int *p1;
    float *p2;
    double *p3;
    char *p4;
    struct Rectangle *p5;
    cout << sizeof(p1) << " " << sizeof(p2) << " " << sizeof(p3)
    << " " << sizeof(p4) << " " << sizeof(p5) << endl; 

    return 0;
}