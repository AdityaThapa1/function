#include <stdio.h>
long long  int series();
int main() {
 
    long long int s;
    int n;
    printf("enter a no");
    scanf("%d",&n);
    s=series(n);
    printf("factorial is %lld",s);
    return 0;
}
long long int series(int a){
    
    if (a==0){
        return 1;
    }
    else{
        return(a* series(a-1));
        
 
    }
}
