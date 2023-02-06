
#include<stdio.h>
int main(){
    int *ptr;
    int a=5;
    ptr=&a;
    *ptr=9;
    printf("%d",*ptr+1);
    return 0;
}

.......................................

#include<stdio.h>
int main(){
    int x,y,temp;
    x=10;
    y=20;
    printf("before swap: x=%d,y=%d\n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("after swap x=%d,y=%d",x,y);
    return 10;
}

     ...............................................

#include<stdio.h>
void swap (int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}
int main(){
     int x,y,temp;
    x=10;
    y=20;
    printf("before swap: x=%d,y=%d\n",x,y);
    swap(&x,&y);
     printf("after swap x=%d,y=%d",x,y);
    return 10;
}

.........................................................

#include<stdio.h>
//void display_array_elements(int n,int array[]){
void display_array_elements(int n,int *ptr){
    for(int i=0;i<n;i++){
        printf("%d, ",*(ptr+i));
    }
}
int main(){
    int my_array[]={10,20,30,40,50};
    int n=sizeof(my_array)/sizeof(my_array[0]);
    display_array_elements(n, my_array);
    return 0;
}
 
............................................
 
#include<stdio.h>
int GCD(int x,int y){
    if(x%y==0)
    return y;
    else{
        GCD(y,x%y);
    }
}
int main(){
    int x,y,temp;
    scanf("%d%d",&x,&y);
    if(y>x){
        temp=x;
        x=y;
        y=temp;
    }
    printf("%d",GCD(x,y));
}

...................................
    
    #include<stdio.h>
void reverse(int *a,int n){
    for(int i=n-1;i>=0;i--){
        printf("%d ",*(a+i));
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    reverse(a,n);
}


