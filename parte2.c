//Prime count en C
#include <stdio.h>

int PrimeCounter(int n, int i, int count, int c);

int main()
{
    int n;
    int i =3;
    int count;
    int c;
    PrimeCounter(n, i, count, c);

    return 0;

}

int PrimeCounter(int n, int i, int count, int c){

printf("Cuanto numeros primos desea encontrar?\n");
scanf("%d",&n);

if (n >=1){
    printf("Estos son los primeros %d numeros primos que se encontraron:\n",n);
    printf("2\n");
}

for(count = 2; count <= n;)
{ 
    for(c = 2; c <= i; c++)
{
    if (i%c == 0)
    break;
}
if (c == i){
    printf("%d\n",i);
    count++;    
}
i++;
}

return 0;

}
