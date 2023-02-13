#include<stdio.h>
int main(){
    int arr[20],size,key,i,index;
    printf("elements:-");
    scanf("%d",&size);
    printf("enter element:-");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("element to search:-");
    scanf("%d",&key);
    for(index=0;index<size;index++){
    if(arr[index]==key)
    break;
    }
    if(index<size)
    printf("key element found");
    else
    printf("key element not found");
    return 0;
}
