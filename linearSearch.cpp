#include <iostream>
using namespace std;
void getdata(int p[],int n){
for(int i=0;i<n;i++)
cin>>p[i];
}
int findin(int p[],int n,int key){
        for(int i=0;i<n;i++){
        if(p[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int key;
    int *p,n;
    int x;
    cin>>n;
    p=new int[n];
    getdata(p,n);
    printf("Enter the Number that you want to search \n");
    cin>>key;
     x=findin(p,n,key);
     (x == -1)? cout<<"Element is not present in array": cout<<"Element is present at index " <<x; 
   return 0; 
} 

