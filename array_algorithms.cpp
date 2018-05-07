#include "array_algorithms.h"
#include "integer_list.h"

bool is_int_array(string input)
{
    int char_value;

    for(size_t index = 0; index < input.size(); index++)
    {
        char_value = int(input[index]);

        if(char_value < 48 || char_value > 57)
        {
            if(char_value != 44)
            {
                return false;
            }
        }
    }

    return true;
}

void remove_spaces(char *str)
{
    int count = 0;

    for(int i = 0; str[i]; i++)
    {
        if(str[i] != ' ')
        {
            str[count++] = str[i];
        }
    }

    str[count] = '\0';
}

int *parse_int_array(string input)
{
/*    integer_list result;
    int *result = new int[100];

    int number = 0;
    int decimal = 0;

    int char_value;
    stack<int> digit_stack;

    input = input + ',';

    for(size_t index = 0; index < input.length(); index++)
    {
        char_value = int(input[index]);

        if(char_value != 44 && index + 1)
        {
            digit_stack.push(char_value - 48);
        }
        else
        {
            while(!digit_stack.empty())
            {
                number += digit_stack.top() * pow(10.0, decimal);
                digit_stack.pop();

                decimal++;
            }

            result.insert(number);

            number = 0;
            decimal = 0;
        }
    }

    int size = integer_list.get_size();

    while(!integer_list.is_empty())
    {

    }

    return result;
    */
}
