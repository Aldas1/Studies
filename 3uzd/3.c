#include <stdio.h>
#include <stdlib.h>

int main(){
    size_t sizeArr;
    char *string;
    FILE *input = fopen("in.txt","r");
    FILE *output = fopen("out.txt","w");

    if(input==NULL){
        printf("Nera ivesties failo!\n");
        return 0;
    }

    fseek(input,0,SEEK_END);

    if(ftell(input)>255){
        sizeArr=256;
    }else sizeArr=ftell(input)+1;
    rewind(input);
    
    string = calloc(sizeArr,sizeof(char));
    fgets(string,sizeArr,input);

    fprintf(output,"%s",string);

    free(string);
    fclose(input);
    fclose(output);

    return 0;
}


