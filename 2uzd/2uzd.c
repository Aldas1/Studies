/*
LSP: 2213814
Email: aldas.vertelis@mif.stud.vu.lt
Uzduotis: 2
Variantas: 11
*/

#include <stdio.h>

void input(int *n, int *inputNum,int matrix[*n][*n]);

int main(){
    int *n,*inputNum;

    printf("Įveskite sveiką skaičių n: ");
    scanf("%d",&n);
    int matrix[*n][*n];

    input(*n,*inputNum,matrix);

    return 0;
}

void input(int *n, int *inputNum,int matrix[*n][*n]){
    printf("Įveskite sveiką skaičių n: ");
    scanf("%d",&*n);

    printf("Iveskite n*n matricą: \n");
    for(int i = 0;i<*n;i++){
        for(int j = 0;j<*n;j++){
            scanf("%d",&*inputNum);
            matrix[i][j]=*inputNum;
        }
    }

}

