#include <stdio.h>

int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    int x = 10, y = 20;
    int z = add(x,y);
    printf("%d + %d = %d", x,y,z);
    return 0;
}