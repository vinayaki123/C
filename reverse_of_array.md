#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    int c,temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    c=num/2;
    for(i=0;i<c;i++){
        temp=arr[num-1-i];
        arr[num-1-i]=arr[i];
        arr[i]=temp;
    }
        for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
