#include <stdio.h>
#include <stdlib.h>

void cal(int arr[],int size){
    int c;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i+1])
        {
            printf("%d it is same to %d\n",arr[i+1],arr[i]);
            c = arr[i+1]-1;
            printf("missing : %d\n",c);
        } 
    }
}

int main(int argc, char const *argv[]){
    int size;
    printf("Enter Size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements : ");
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    cal(arr,size);

    return 0;
}
