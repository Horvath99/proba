#include <stdio.h>

int main() {
    int x=2;
    x=2;
    if(x<=3)
    {
        x++;
    }
    if(x!=3){
        printf("Hiba");

    }
    kiir(x);
    return 0;
}
void kiir(int x){
    printf("%i",x);
}
