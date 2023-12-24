#include <stdio.h>
void display(int arr[], int n){
    printf("Elements in the Array are:\n");
    for (int i=0;i<n;i++){
        printf("Element at index %d = %d\n", i, arr[i]);
    }
}
void Insert(int arr[], int element, int size, int cap, int index){
    if (size>=cap){
        printf("Invalid");

    }
    else{
        for (int i=size-1; i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
    }

}
int main(){
    int arr[100]={20,50,60};
    int size=3;
    int cap=100;
    int index=2;
    int element=70;
    Insert(arr, element,size, cap, index);
    display(arr, size+1);
}