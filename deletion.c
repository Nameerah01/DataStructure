#include<stdio.h>
int main(){
    int n,i,pos;
    int arr[50];
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the position of the element to be removed:\n");
    scanf("%d",&pos);
    n--;
    for(i=pos-1;i<=n-1;i++){
        arr[i]=arr[i+1];
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
}