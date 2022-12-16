#include "funkcijos.h"

int main(){
    int num,insNum,pos,len=0;
    int menuNum=-1;
    head = NULL;
    FILE *in;
    in = fopen("in.txt","r");
    if(in==NULL){
        printf("Nera ivesties failo!\n");
        return 0;
    }
    
    while(menuNum!=3){
        menuNum=menu();
        if(menuNum==0){
            while(fscanf(in,"%d",&num)==1){
            insertLast(num);
            len++;
            }
            sort(head,len);
        }
        else if(menuNum==1){
            print();
        }
        else if(menuNum==2){
            printf("Iveskite kurioje vietoje iterpti skaiciu: ");
            while(scanf("%d",&pos)!=1||getchar()!='\n'){
                printf("Iveskite kurioje vietoje iterpti skaiciu: ");
                while(getchar()!='\n');
            }
            printf("Iveskite koki skaiciu iterpti: ");
            while(scanf("%d",&insNum)!=1||getchar()!='\n'){
                printf("Iveskite koki skaiciu iterpti: ");
                while(getchar()!='\n');
            }
            insertAfter(pos,insNum);
        }
        printf("\n");
    }

    printf("Programa uzdaryta!\n");

    fclose(in);
    return 0;
}