#include<iostream>
using namespace std;

void solv(int cur,int n,int c1,int c2,int* arr,int len){
    
    if(len==n&&c1>=3&&c2>=3){
        for(int i=0;i<len;i++){
            cout <<arr[i];
        }
        cout <<"\n";
        return ;
    }
    else if(len==n)return ;
    for(int i=1;i<=3;i++){
        if(i==1){
            arr[cur]=1;
            solv(cur+1,n,c1+1,c2,arr,len+1);
        }
        else if(i==2){
            arr[cur]=2;
            solv(cur+1,n,c1,c2+1,arr,len+1);
        }
        else {
            arr[cur]=3;
            solv(cur+1,n,c1,c2,arr,len+1);
        }
    }
}

int main(){
    int n, arr[12];
    cin>> n;
    solv(0,n,0,0,arr,0);
}