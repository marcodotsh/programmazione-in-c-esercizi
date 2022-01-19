#include <stdio.h>
#include "mastermind.h"

void printSequence(char str[], int len){
    int i;
    for(i=0; i<len; i++){
        if(str[i] == 'n'){
            printf(BLKB);
        }
        if(str[i] == 'r'){
            printf(REDB);
        }
        if(str[i] == 'g'){
            printf(GRNB);
        }
        if(str[i] == 'y'){
            printf(YELB);
        }
        if(str[i] == 'b'){
            printf(BLUB);
        }
        if(str[i] == 'm'){
            printf(MAGB);
        }
        if(str[i] == 'c'){
            printf(CYNB);
        }
        if(str[i] == 'w'){
            printf(WHTB);
        }
        printf(" ");
        printf(reset);
    }
}

void printWhiteBlack(int w, int b){
    int i;
    printf(WTILE);

    for(i=0; i<w; i++){
        printf("%d ", i+1);
    }
    printf(reset);
    printf("\t");
    printf(BTILE);
    for(i=0; i<w; i++){
        printf("%d ", i+1);
    }
	printf(reset);
}

int checkInput(char s[], int len){
    int i, ris;
    ris = 1;
    for(i=0; i<s[i] && ris; i++){
        ris = s[i]=='n' || s[i]=='r' || s[i]=='g' || s[i]=='y' || s[i]=='b' || s[i]=='m' || s[i]=='c' || s[i]=='w';
    }
    if(ris){
        ris = i==len;
    }

    return ris;
}
