#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
void getdata(int *p,int n){
for(int i=0;i<n;i++)
scanf("%d",(p+i));
}
void sort(int *p,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(*(p+j)>*(p+j+1)){
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;

            }
        }
    }
}

void display(int *p,int n){
 for(int i=0;i<n;i++)
printf("%d ",*(p+i)); 
}
int main(){
int n;
int *p;
scanf("%d",&n);
p=new int[n];
getdata(p,n);
sort(p,n);
display(p,n);
return 0;
}