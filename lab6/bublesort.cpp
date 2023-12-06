#include <iostream>
#include <vector>

void bubleSort(int[]arr){
    int length=arr.length;
    while(length!=0){
        int max_index=0;
        for (int i=1,i<length,i++){
            if(arr[i-1]>arr[i]){
                int temp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=temp;
                max_index=i;
            }
        }
        length =max_index;
    }
}