#include <stdio.h>
#include <math.h>

int main (void){
    int V1, V2, S, T;
    int otv;
    scanf("%d %d %d %d", &V1, &V2, &T, &S);
    otv = fabs(V1 * T) - fabs(V2 * T) + S;
    printf("%d", otv);
    
    return 0;
}