#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int * num = (int*)malloc(1000*sizeof(int));
    int i = 0;

    scanf("%d", &num[i]);

    while(num[i]>=0) {
        i++;
        scanf("%d", &num[i]);
    }

    num = realloc(num, (i+1) * sizeof(int));

    for(int j = 0; j<i; j++) 
        printf("%d ", num[j]);


    free(num);

    return 0;
}