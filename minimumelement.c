#include <stdio.h>

int main() {
    int n=5 ,a[5]={1,2,4,5,3},min;
    for(int i=1;i<n;i++){
        min=a[0];
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}
