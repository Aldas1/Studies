#include <stdio.h>
#include <stdlib.h>


//Sukuria vartotojo meniu
int menu(){ 
    int num;
    for(;;){
        printf("Pasirinkite programos veiksma:\n");
        printf("0. Sukurti sarasa\n");
        printf("1. Atspausdinti sarasa\n");
        printf("2. Iterpti nauja elementa\n");
        printf("3. Uzdaryti programa\n");
        printf("Pasirinkimas: ");

        scanf("%d",&num);
        if(num==0||num==1||num==2||num==3) break;
    }

    return num;
}

//Sukuria dvipusi sarasa
void sarasoSukurimas(){

}