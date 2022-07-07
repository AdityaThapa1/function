#include <stdio.h>
int series();
int main() {
    
    int s,n;
    printf("enter a no");
    scanf("%d",&n);
    s=series(n);
    printf("sum is %d",s);
    return 0;
}
int series(int a){
    int sum=0;
    if (a==0){
        return 0;
    }
    else{
        return(a+ series(a-1));
        
 
    }
}
