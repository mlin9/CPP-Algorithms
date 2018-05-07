#include "subarray_sum.h"
#include <iostream>

int *subarray_sum(int num_cases)
{
    string input_buffer;
    int *result[num_cases];
    int *line_buffer;

    for(int case_no = 0; case_no < num_cases; case_no++)
    {
        printf("Please enter the size and sum of subarray %d. Example input: 5,12", case_no + 1);
        cin >> input_buffer;

        result[case_no] = line_buffer;
    }
}
