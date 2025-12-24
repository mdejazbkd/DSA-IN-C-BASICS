#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,3,2,3,4,5,6,4,4,5,6,6,5};
    int n = (sizeof arr / sizeof arr[0]);

    int even_count=0;
    int odd_count=0;
    
    for (int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            even_count+=1;
        }else{
            odd_count+=1;
        }
    }

    printf("No of even elements : %d\n", even_count);
    printf("No of odd elements : %d\n", odd_count);

    return 0;
}