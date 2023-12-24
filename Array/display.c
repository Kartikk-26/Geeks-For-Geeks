#include <stdio.h>
void display(int arr[], int n){
    printf("Elements in the Array are:\n");
    for (int i=0;i<n;i++){
        printf("Element at index %d = %d\n", i, arr[i]);
        
    }
}
int main(){
    int arr[100]={20,50,60};
    display(arr, 3);
}