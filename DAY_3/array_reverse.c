#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int n=(sizeof arr / sizeof arr[0]);
    int rev[n];
    int rev_value=0;
    for (int i=0;i<n;i++){
        // as n-1 is last index, so n-1-i will fill last index
        rev[n-1-i]=arr[i];
    }
    // to print reversed array
    for (int i =0; i<n;i++){
        printf("%d ", rev[i]);
    }

    


    return 0;
}