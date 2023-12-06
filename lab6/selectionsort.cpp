#include <iostream>
#include <vector>

void slectionSort(int[]arr){
    for(int i=0, i<=arr.length-1,i++){
        int min_index;
        for(int j=i+j;j<arr.length;j++){
            if(arr[min_index]>arr[j])
            min_index=j;
        }
        if(min_index!=i){
            int temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
        }
    }
}