#include "minmax.h"

MinMaxPair getMinMax(int *array, int left, int right) {
    MinMaxPair result;

    //Given the bound of a single element, return it as a pair.
    if (left == right) {
        result.min = array[left];
        result.max = array[left];
        return result;
    }

    //Given the bound of two elements, return them as a pair.
    if (left+1 == right) {
        if(array[left] < array[right]) {
            result.min = array[left];
            result.max = array[right];
        }
        else {
            result.min = array[right];
            result.max = array[left];
        }
        return result;
    }

    //Given the bound of more than two elements, divide and conquer.
    int middle = (left + right)/2;
    MinMaxPair left_pair = getMinMax(array, left, middle);
    MinMaxPair right_pair = getMinMax(array, middle+1, right);

    //Determine the minimum and maximum elements of both local results.
    if(left_pair.min < right_pair.min)
        result.min = left_pair.min;
    else
        result.min = right_pair.min;

    if(left_pair.max > right_pair.max)
        result.max = left_pair.max;
    else
        result.max = right_pair.max;

    //Return the minimum and maximum elements.
    return result;
}
