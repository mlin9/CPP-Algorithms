#include <iostream>
#include <string.h>
#include <stdio.h>
#include "array_algorithms.h"
#include "subarray_sum.h"
#include "minmax.h"

using namespace std;

void integer_array_demo();
void min_max_demo();
void remove_spaces_demo();

int main() {
    min_max_demo();

    return 0;
}

void integer_array_demo()
{
    bool valid = false;

    string input;

    while(!valid)
    {
        printf("Please enter a sequence of integers, seperated by commas.\n");
        cin >> input;

        char temp[512];
        strncpy(temp, input.c_str(), sizeof(temp));
        remove_spaces(temp);

        input = temp;
        valid = is_int_array(input);
    }

    int *result = parse_int_array(input);

    for(size_t i = 0; i < 50; i++)
    {
        printf("%d\n", result[i]);
    }
}

void min_max_demo()
{
    int left, right;
    int array[15] = {1,9,3,4,155,6,1,2,64,64,1,3,666,44,33};
    left = 0;
    right = 14;

    MinMaxPair result;

    result = getMinMax(array, left, right);

    cout << result.min << endl;
    cout << result.max << endl;

    return;
}

void remove_spaces_demo()
{
    string test = "This is a test";
    char result[512];

    strncpy(result, test.c_str(), sizeof(result));
    remove_spaces(result);

    test = result;

    printf("%s", result);
}
