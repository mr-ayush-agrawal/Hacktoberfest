#include<stdio.h>
int main(){
    int i,j,r,c,a[10][10],b[10][10],ans[10][10];
    printf("Enter the number of rows and column respectively :- \t");
    scanf("%d%d",&r,&c);
    printf("Enter the elements in first matrix -\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements in second matrix -\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            ans[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("First matrix -\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix -\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("Required matrix -\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}