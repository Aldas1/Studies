#include <stdio.h>
#include <stdlib.h>
#include "funkcijos.h"

typedef struct sarasas{
    struct sarasas *priekis;
    int duom;
    struct sarasas *atgal;
} sarasas;

int main(){
    int menuNum;
    menuNum=menu();

    return 0;
}
