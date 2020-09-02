#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i,j;
    i=low;
    j=high;
    while(i<j){
        do{
            i++;
        }while(arr[i]<=pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i<j){
          swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low],&arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high){
    int j;
    if(low<high){
        j=partition(arr,low,high);
        quicksort(arr,low,j);
        quicksort(arr,j+1,high);
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int *arr;
    int n;
    printf("Enter the number of eleemts\n");
    scanf("%d",&n);
    arr=new int [n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    display(arr,n);
}