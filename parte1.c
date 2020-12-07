//Natural Counter en C
#include <stdio.h>

int counter(int n);

int main()
{

int b;
counter(b);

}

int counter(int n)
{

    printf("Ingrese cualquier numero: ");
    scanf("%d", &n);

    printf("Los numeros naturales de 1 hasta %d : \n", n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }

    return 0;
}