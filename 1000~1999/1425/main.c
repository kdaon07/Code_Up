#include<stdio.h>


int main(){

    int N,C;
    scanf("%d %d",&N,&C);
    int s[99] = {};
    for(int i = 0; i < N; i++){
        scanf("%d",&s[i]);
    }
    int temp;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j< N-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    int k = 0;
    for(int j=0;j<N;j++){
        printf("%d ",s[j]);
        k++;
        if(C == k){
            printf("\n");
            k=0;
        }
    }
    return 0;
}
