#include<stdio.h>
#define MAX 2048
int main(void){
    FILE *fp ;
    char buf[MAX]={0};
    if((fp=fopen("test.txt","r"))!=NULL){
        /*ファイルの終わりまで繰り返し読み込む*/
        while( fgets(buf,MAX,fp) != NULL ){
            printf("%s",buf);
        }
    }
    return 0;
}