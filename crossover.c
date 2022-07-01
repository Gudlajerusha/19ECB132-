#include<stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    int x[n],y[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&y[i]);
    }
    
    for(i=0;i<n;i++){
        if(x[i]>= y[i]){
            if(y[i+1]>x[i+1]){
                printf("%d",i);
                break;
            }
        }
    }
    
    return 0;
}
