#include <stdio.h>
#include <string.h>
#define MAX 72413
static char buf[MAX][35];

int main() {
    char word[16];
    scanf("%16s", word);
    printf("'%s'\n", word);
    char S1[17];
    strcpy(S1,word);

    FILE *fp ;
    char buf[MAX][35];
    char S2[MAX][35];
    int i,j;
    fp=fopen("dic.txt","r");
    if( fp == NULL ){
		printf( "ファイルオープンエラー\n" );
		return -1;
	}
	else{
        for(i=0;i<MAX && fgets(buf[i],sizeof(buf[i]),fp) != NULL;i++) {
        	strcpy(S2[i],buf[i]);
            //printf("%s",S2[i]);
        }
	}
    fclose(fp);
    int iRet;
    for(i=0;i<MAX;i++){
            iRet=strcmp(word, buf[i]);
            printf("%d\n", iRet);
    }
    return 0;
}