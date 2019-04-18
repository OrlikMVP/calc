#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef int (*func)(int, int);

int sum(int a, int b) {
 return a + b;
}

int mult(int a, int b) {
 return a * b;
}
int dev(int a, int b) {
 return a / b;
}
int main()
{   int a; int b; char comand;
    func f[256] = {NULL};
    f['+'] = sum;
    f['*'] = mult;
    f['/'] = dev;
    printf("Start\n");
    printf("Enter A comand B: ");
    if (scanf("%d %c %d", &a,&comand,&b) != 3) {
        printf("Invalid input\n");
        return -1;
    }


    printf("%d %c %d = %d\n", a,comand,b, f[comand](a,b));

 //  typedef unsigned int uinf;
 // typedef double (*func_t)(double,double);
    return 0;
}
