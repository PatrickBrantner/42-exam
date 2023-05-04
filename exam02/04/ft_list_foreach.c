/*
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

void ft_double(void *a)
{
    int *value = (int*)a;
    *value *= 2;
}

void print_data(t_list *head)
{
    if (head == NULL)
        printf("Linked List is empty\n");
    else
    {
        t_list *ptr = head;
        printf("Data for Nodes: ");
        while (ptr != NULL)
        {
            int *value = (int*)ptr->data;
            printf("%d ", *value);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main() 
{
	struct s_list *head = malloc(sizeof(struct s_list));
    int *data = (int*)malloc(sizeof(int));
    *data = 45;
    head->data = data;
    head->next = NULL;

    struct s_list *current = malloc(sizeof(struct s_list));
    int *data1 = (int*)malloc(sizeof(int));
    *data1 = 98;
    current->data = data1;
    current->next = NULL;
    head->next = current;

    struct s_list *current2 = malloc(sizeof(struct s_list));
    int *data2 = (int*)malloc(sizeof(int));
    *data2 = 5;
	current2->data = data2;
    current2->next = NULL;
    current->next = current2;

    struct s_list *current3 = malloc(sizeof(struct s_list));
    int *data3 = (int*)malloc(sizeof(int));
    *data3 = -100;
	current3->data = data3;
    current3->next = NULL;
    current2->next = current3;

    print_data(head);
    ft_list_foreach(head, &ft_double);
    print_data(head);
}
