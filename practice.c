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
    int main(){
        int a;
        scanf("%d",&a);
        int arr[a];
        for(int i=0;i<a;i++)
        scanf("%d",&arr[i]);
        insertionsort(arr,a);{
            for(int j=0;j<a;j++){
                printf("%d ",arr[j]);
            }
            printf("\n");
            if(a%2==0){
                int median=(a/2)+1;
                printf("%d\n",arr[median-1]);
            }
            else{
                int median=(a+1)/2;
                printf("%d\n",arr[median-1]);
            }
        }
    }
    
