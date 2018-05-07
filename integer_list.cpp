#include "integer_list.h"

integer_list::integer_list()
{
    first->data = nullptr;
    first->next_node = nullptr;
    size = 0;
}

void integer_list::insert(int *value)
{
    size++;

    if(first->data == nullptr)
    {
        first->data = value;
        first->next_node = new node;
        last = first->next_node;
        return;
    }

    last->data = value;
    last->next_node = new node;
    last = last->next_node;
}

bool integer_list::is_empty()
{
    return(size == 0);
}

int integer_list::get_size()
{
    return size;
}

int integer_list::remove_head()
{
    size--;

    int *result = nullptr;

    if(first->data != nullptr)
    {
        result = first->data;
        node *temp = first;
        first = first->next_node;
        delete(temp);
    }

    return *result;
}
