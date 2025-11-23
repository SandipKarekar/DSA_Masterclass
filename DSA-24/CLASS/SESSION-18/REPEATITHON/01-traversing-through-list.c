#include <stdio.h>
/* Symbolic Constants */
#define SUCCESS             1
#define TRUE                1
#define FALSE               0
#define LIST_DATA_NOT_FOUND 2
#define LIST_EMPTY          3

struct node
{
    int data;
    struct node* next;
};

void show_list(struct node* p_list)
{
    struct node* run = NULL;

    run = p_list->next;
    while(run != NULL)
    {
        printf("run->data = %d\n", run->data);
        run = run->next;
    }
}

void show_list(struct node* p_list)
{
    struct node* run = NULL;

    run = p_list->next;
    while(run != NULL)
    {
        printf("run->data = %d\n", run->data);
        run = run->next;
    }
}

void get_last_node(struct node* p_list)
{
    struct node* run = NULL;

    run = p_list;
    while(run->next != NULL)
    {
        run = run->next;   
    }

    // run is last node
}

void get_last_node(struct node* p_list)
{
    struct node* run = NULL;

    run = p_list;
    while(run->next != NULL)
    {
        run = run->next;
    }

    // run is last node
}


int get_start(struct node* p_list, int* p_start_data)
{
    if(p_list->next == NULL)
        return(LIST_EMPTY);

    *p_start_data = p_list->next->data;
    
    return (SUCCESS);
}

int pop_start(struct node* p_list, int* p_start_data)
{
    struct node* delete_previous = NULL;
    struct node* delete_node = NULL;
    struct node* delete_next = NULL;

    if(p_list->next == NULL)
        return (LIST_EMPTY);
    
    *p_start_data = p_list->next->data;

    delete_previous = p_list;
    delete_node = p_list->next;
    delete_next = p_list->next->next;

    delete_previous->next = delete_next;

    free(delete_node);
    delete_node = NULL;

    return(SUCCESS);
}

int pop_start(struct node* p_list, int * p_start_data)
{
    struct node* delete_previous = NULL;
    struct node* delete_node = NULL;
    struct node* delete_next = NULL;

    if(p_list->next == NULL)
        return (LIST_EMPTY);

    *p_start_data = p_list->next->data;

    delete_previous = p_list;
    delete_node = p_list->next;
    delete_next = p_list->next->next;

    delete_previous-> next = delete_next;

    free(delete_node);
    delete_node = NULL;

    return (SUCCESS);
}

int pop_start(struct node* p_list, int * p_start_data)
{
    struct node* delete_previous = NULL;
    struct node* delete_node = NULL;
    struct node* delete_next = NULL;

    if(p_list->next == NULL)
        return (LIST_EMPTY);
    
    *p_start_data = p_list->next->data;

    delete_previous = p_list;
    delete_node = p_list->next;
    delete_next = p_list->next->next;

    delete_previous->next = delete_next;

    free(delete_node);
    delete_node = NULL;

    return (SUCCESS);
}

int pop_end(struct node* p_list, int* p_end_data)
{
    struct node* run = NULL;
    struct node* run_previous = NULL;

    if(p_list->next == NULL)
        return (LIST_EMPTY);

    run_previous = p_list;
    run = p_list->next;
    while(run->next != NULL)
    {
        run_previous = run;
        run = run->next;
    }

    *p_end_data = run->data;

    free(run);
    run = NULL;
    run_previous->next = NULL;

    return (SUCCESS);
}

int pop_end(struct node* p_list, int* p_end_data)
{
    struct node* run = NULL;
    struct node* run_previous = NULL;

    if(p_list->next == NULL)
        return(LIST_EMPTY);
    
    run_previous = p_list;
    run = p_list->next;
    while(run->next != NULL)
    {
        run_previous = run;
        run = run->next;
    }

    *p_end_data = run->data;

    free(run);
    run = NULL;
    run_previous->next = NULL;

    return (SUCCESS);
}

int pop_end(struct node* p_list, int* p_end_data)
{
    struct node* run = NULL;
    struct node* run_previous = NULL;

    if(p_list->next == NULL)
        return (LIST_EMPTY);

    run_previous = p_list;
    run = p_list->next;
    while(run->next != NULL)
    {
        run_previous = run;
        run = run->next;
    }

    *p_end_data = run->data;

    free(run);
    run = NULL;
    run_previous->next = NULL;

    retunr(SUCCESS);
}
