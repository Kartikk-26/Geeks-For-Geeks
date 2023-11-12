#include<stdio.h>
int main(){
    int sum[3][3];
    int i,j,a[3][3],b[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ENTER NUMBER OF MATRIX 1 OF ELEMENT [%d][%d] \n ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("ENTER NUMBER OF MATRIX 2 OF ELEMENT [%d][%d] \n ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j] = a[i][j]+b[i][j];
        }
    }
    printf("\nSUM OF 2 MATRIX IS \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",sum[i][j]);
            if(j==2 ){
                printf("\n \n");
            }
        }
    }








}