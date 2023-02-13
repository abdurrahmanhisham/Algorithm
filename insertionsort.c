#include<stdio.h>
void insertionsort(int arr[],int n)
{
int i,element,j;
for(i=1;i<n;i++){
    element=arr[i];
    j=i-1;
    while(j>=0 && arr[j]>element){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=element;
}
}
void printarr(int n,int arr[]){
    int i;
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
   
}
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    scanf("%d",& arr[i]);
    insertionsort(arr,size);
    printarr(size,arr);
    
}
