//20장 2번 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num=1;
    int arr[5][5];
    int start1=0;
    int end1=4;
    int start2=0;
    int end2=4;
    
    while(num!=26){
        //윗쪽 왼->오
        for(int i=start1; i<=end1;i++){
            arr[start2][i]=num;
            num++;
        }
        start2++;               //start2==1
        
        //오른쪽 위->아래
        for(int j=start2; j<=end2;j++){
            arr[j][end1]=num;
            num++;
        }
        end1--;                 //end1==3
        
        //밑쪽 오->왼
        for(int k=end1;k>=start1;k--){
            arr[end2][k]=num;
            num++;
        }
        end2--;                 //end2==3
        
        //왼쪽 아래->위
        for(int p=end2;p>=start2;p--){
            arr[p][start1]=num;
            num++;
        }
        start1++;
    }
    for(int q=0;q<5;q++){
        for(int r=0;r<5;r++){
            printf("%d ", arr[q][r]);
        }
        printf("\n");
    }
}
