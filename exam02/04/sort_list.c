/*
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list  *tmp;
    int     swap; 

    tmp = lst;
    while (lst->next != NULL)   
    {
        if(((*cmp)(lst->data, lst->next->data)) == 0 )
        {
            swap = lst->next->data;
            lst->next->data = lst->data;
            lst->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}

void print_data(t_list *head)
{
    if (head == NULL)
        printf("Linked List is empty");
    else
    {
        t_list *ptr = NULL;
        ptr = head;
        printf("Data fo Nodes: ");
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int ascending(int a, int b)
{
	return (a <= b);
}

int main() 
{
	struct s_list *head = malloc(sizeof(struct s_list));
    head->data = 45;
    head->next = NULL;

    struct s_list *current = malloc(sizeof(struct s_list));
    current->data = 98;
    current->next = NULL;
    head->next = current;

    struct s_list *current2 = malloc(sizeof(struct s_list));
	current2->data = 5;
    current2->next = NULL;
    current->next = current2;

    struct s_list *current3 = malloc(sizeof(struct s_list));
	current3->data = -100;
    current3->next = NULL;
    current2->next = current3;

    print_data(head);
    head = sort_list(head, &ascending);
    print_data(head);
}
