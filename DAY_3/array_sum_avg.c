#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    float average;
    int arr_size = (sizeof arr / sizeof arr[0]);
    for (int i=0;i<arr_size;i++){
        sum+=arr[i];
    }
    average = (float)sum/2;

    printf("array element sum is %d\n", sum);
    printf("average of element is %.2f\n", average);

    return 0;
}