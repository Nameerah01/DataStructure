#include<stdio.h>
int main(){
    int x,i,pos,n;
    int arr[100]={};
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the element to be added:\n");
    scanf("%d",&x);
    printf("Enter the position of the element:\n");
    scanf("%d",&pos);
    n++;
    for(i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    
    arr[pos-1]=x;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
}