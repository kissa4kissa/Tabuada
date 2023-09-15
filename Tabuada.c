#include<stdio.h>
int main(void)
{
	int N, i, cal;
	printf("Digite o número para elaborarmos a tabuada: ");
	scanf("%d", &N);
	for(i = 1; i < 11; i++){
		cal = N*i;
		printf("%d x %d = %d\n", i, N, cal);
	}
    return (0);
}
