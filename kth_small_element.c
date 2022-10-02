#include <stdio.h>
#include <stdlib.h>
void sorting(int *arr, int size){
    int temp, sorted = 0;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void cal(int* arr,int size,int data){
    sorting(arr,size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==data)
        {
            printf("R : %d",arr[i]);
            break;
        }
    }
}

int main(int argc, char const *argv[]){
    int size,data;
    printf("Enter Size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Array Elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Data : ");
    scanf("%d",&data);
    cal(arr,size,data);
    return 0;
}
