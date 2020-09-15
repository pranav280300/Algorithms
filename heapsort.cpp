#include<vector> 
#include<algorithm>
#include<iostream>
using namespace std;
void getdata(int p[],int n){
    for(int i=0;i<n;i++)
    cin>>p[i];
}
void heapify(int p[],int n,int i){
    int lc,rc,lp,temp;
    lp=i,rc=2*i+1,lc=2*i+2;
    if(lc<n && p[lc]>p[lp])
    lp=lc;
    if(rc<n && p[rc]>p[lp])
    lp=rc;
    if(lp!=i){
        temp=p[i];
        p[i]=p[lp];
        p[lp]=temp;
        heapify(p,n,lp);
    }
}
void sort(int p[],int n){
    int temp;
    while(n>0){
        temp=p[n-1];
        p[n-1]=p[0];
        p[0]=temp;
        n--;
        heapify(p,n,0);
    }
}
void printdata(int p[],int n){
    for(int i=0;i<n;i++)
    cout<<p[i]<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int *p, n;
    scanf("%d",&n);
    p=new int[n];
    getdata(p,n);
    sort(p,n);
    printdata(p,n);
    return 0;
}