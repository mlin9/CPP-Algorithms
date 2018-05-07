#ifndef INTEGER_LIST_H
#define INTEGER_LIST_H

class integer_list
{
public:
    integer_list();
    struct node
    {
        int *data;
        node *next_node;
    };
    void insert(int *value);
    bool is_empty();
    int get_size();
    int remove_head();
private:
    int size;
    node *first;
    node *last;
};

#endif // INTEGER_LIST_H
