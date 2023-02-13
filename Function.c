/*
#include<stdio.h>
void aaa(int n){
    if(n%2)
    printf("odd\n");
    else
    printf("even\n");
}
    int main(){
        int a;
        scanf("%d",&a);
        aaa(a);
}
*/
#include<stdio.h>
int sum(int n){
if(n==1) return 1;
return n+sum(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}
  
