#include "search_algos.h"
/**
* linear_search - searches to find value in array
* @array: array to search for  value
* @size: size of array searched
* @value: value to search for in array
*/

int left = 0;
int right = size - 1;
int mid = left + (right - left) / 2;

int binary_search(int *array, size_t size, int value) {
    
    if (array == NULL) {
        return -1;
    }


    
    while (left <= right) {
        
        printf("Searching subarray: ");
        for (size_t i = left; i <= right; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        
        if (array[mid] == value) {
            return mid;
        }
        
        else if (array[mid] > value) {
            right = mid - 1;
        }
        
        else {
            left = mid + 1;
        }
    }

    return -1;
}
