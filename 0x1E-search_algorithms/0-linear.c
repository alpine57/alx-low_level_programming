#include "search_algo.h"

/**
 * linear_search - searches to find value in array
 * @array: array to search for  value
 * @size: size of array searched
 * @value: value to search for in array
*/
int linear_search(int arr[], int n, int target) {
    
    for (int i = 0; i < n; i++) {
        
        if (arr[i] == target) {
            return i;
        }
    }
   
    return -1;
