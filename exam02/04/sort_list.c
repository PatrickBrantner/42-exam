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