#include<stdio.h>
int Num(int n){
    if(n==0) return 0;
    if(n==1){
        printf("%d",n);
    }
    printf("%d",n);
    return Num(n-1);
}
void main(){
    int i=1, n;
    scanf("%d",&n);
    printf("%d",Num(n));
}