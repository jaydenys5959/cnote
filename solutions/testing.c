#include <stdio.h>

int main(){
    int array[3] = {10,20,30};
    int *p = array;
    
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p++;

    return 0;
}
