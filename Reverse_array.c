#include <stdio.h>
int main()
{
    int i,arr[]={4,5,1,2};

    printf("Reverse array: ");

    for(i=3;i>=0;i--){
        printf("%d\t", arr[i]);
    }
    return 0;
}
