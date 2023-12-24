#include <stdio.h>
void Search(int arr[], int size, int element){
    int flag=0;
    int index;
    for(int i =0; i<size;i++){
        if(arr[i]==element){
            flag=1;
            index=i;
        }
    }
    if (flag==1){
        printf("Element Found at index %d",index);
    }
    else{
        printf("Element not Found");
    }
}
int main(){
    int arr[10]={1,6,8,9,10};
    int size=5;
    int element=8;
    Search(arr, size, element);
}