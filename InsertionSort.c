#include<stdio.h>
#include<stdlib.h>
void getdata(int *p,int n){
    for(int i=0;i<n;i++)
    scanf("%d",(p+i));

}
void sort(int *p,int n)
{
    int i,key,j;
    for( i=1;i<n;i++){
     key=p[i];
    j=i-1;
    while(j>=0 && p[j]>key){
        p[j+1]=p[j];
        j=j-1;
    }
    p[j+1]=key;
    }

}
void printoutput(int *p,int n){
    for(int i=0;i<n;i++)
    printf("%d ",p[i]);
}
void main(){
    int *p;
    int n;
   
    printf("Enter the size of array \n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("Enter the data to be sorted \n");
    getdata(p,n);
    sort(p,n);
    printf("Sorted ... .\n");
    printoutput(p,n);
}