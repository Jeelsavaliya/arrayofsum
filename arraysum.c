#include<stdio.h>
int main(){
    
    int n;
    int ar[1000];
    int sum = 0;
    
    
    scanf("%d ",&n);
    
     for(int i = 0; i < n; i++){
      scanf("%d", &ar[i]);
     }
    
    for(int i=0; i<n; i++){
        sum = sum+ar[i];
    }
    printf("%d",sum);
    
    return 0;
}