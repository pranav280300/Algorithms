#include<iostream>
#include <stdlib.h> 
using namespace std;
void getdata(int a[],int n){
 for(int i=0;i<n;i++)
 cin>>a[i];
}
void merge(int a[],int low,int mid,int high){
int *L;
int *R;
int i,j,k;
int n1=mid-low+1;
int n2=high-mid;
L=new int[n1];
R=new int[n2];
for(int i=0;i<n1;i++){ 
    L[i]=a[low+i];
}
for(int j=0;j<n2;j++){
    R[j]=a[mid+1+j];
}
i=0,j=0,k=low;
while(i<n1 && j<n2){
    if(L[i]<=R[j]){
        a[k]=L[i];
        i++;
    }else{
        a[k]=R[j];
        j++;
    }
    k++;
}
while(i<n1){
    a[k]=L[i];
    i++;
    k++;
}
while(j<n2){
    a[k]=R[j];
    j++;
    k++;
}

}
void mergeSort(int a[],int low,int high){
  
if(low<high){
int mid=(low+high)/2;
mergeSort(a,low,mid);
mergeSort(a,mid+1,high);
merge(a,low,mid,high);
}
}
void display(int a[],int n){
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}

int main(){
    int n;
    int *p;
    cout<<"Enter the size of the array"<<'\n';
    cin>>n;
    p=new int[n];
    getdata(p,n);
    mergeSort(p,0,n-1);
    display(p,n);

return 0;

}