//Fibonacci en C
#include <stdio.h>

int Fibonacci(int i, int n, int t1, int t2, int nextTerm);

int main()
{
    int i;
    int n;
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    Fibonacci(i,n,t1,t2,nextTerm);

    return 0;

}

int Fibonacci(int i, int n, int t1, int t2, int nextTerm){

    printf("Ingrese los numeros deseados: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");

    for(i = 1;i <=n; ++i){
        printf("%d, ",t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2= nextTerm;
    }
        return 0;

}