/*
LSP: 2213814
Email: aldas.vertelis@mif.stud.vu.lt
Uzduotis: 1
Variantas: 6
*/

#include <stdio.h>
#include <math.h>

int main(){
    int amount=0;
    double root,number;

    printf("Jeigu norite užbaigti programą įveskite 0\nĮveskite sveikų skaičių seką: \n");
    do{
        /*Error Proofing*/
        if(scanf("%lf",&number)!=1||fmod(number,1.0)!=0){
            printf("Įvestas ženklas nėra sveikas skaičius.\n");
            return 0;
        }

        /*Checks if the number is a perfect square*/
        if(number!=0){
            root=sqrt(number);
            if(fmod(root,1.0)==0){
                amount++;
            }
        }
    }while(number!=0);

    printf("Nariai, kurie yra sveikų skaičių kvadratai: %d\n",amount);
}
