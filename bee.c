#include<stdio.h>

int totalNum(int i,int n,long long female,long long male){
    if(i<n){
        if(male==0){
            return totalNum(i+1,n,0,1);
        }
        else{
            return totalNum(i+1,n,male,female+male+1);
        }
    }
    else{
        printf("%lld %lld\n",male,female+male+1);
        return female+male+1;
    }
}

int main(){
    int N;
    
    while(scanf("%d",&N) && N!=-1){
    totalNum(0,N,1,0);
    }
    
    return 0;
}