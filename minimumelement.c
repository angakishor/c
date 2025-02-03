#include <stdio.h>

int main() {
    int n=5 ,a[5]={1,2,4,5,3},min;
     min=a[0];
    for(int i=1;i<=n;i++){
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}
