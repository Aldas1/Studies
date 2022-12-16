#include "funkcijos.h"
#include <assert.h>

void sukurimas();

int main(){
    sukurimas();
    assert(head->data==5);
    assert(head->next->data=10);

    insertAfter(1,3);
    assert(head->next->data=3);

    insertAfter(0,4);
    assert(head->data==4);

    printf("Visi testai atlikti sekmingai!\n");

    return 0;
}

void sukurimas(){
    insertLast(5);
    insertLast(10);
    insertLast(15);
}