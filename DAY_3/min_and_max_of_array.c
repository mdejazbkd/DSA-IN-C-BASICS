#include<stdio.h>
int main(){

    int arr[]={1,2,334,54,23432,34,45,23,43};
    int max = arr[0];
    int min = arr[0];
    int temp;

    int n = (sizeof arr/ sizeof arr[0]);

    for(int i=1;i<n;i++){
        temp=arr[i];
        if(temp > max){
            max = temp;
        }
        if(temp < min){
            min = temp;
        }
    }

    printf("Maximum Value in Array is %d\n", max);
    printf("Minimum Value in Array is %d\n", min);


    return 0;
}