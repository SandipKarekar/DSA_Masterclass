/* Header files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/* Symbolic Constants */
#define SUCCESS             1
#define TRUE                1
#define FALSE               0
#define LIST_DATA_NOT_FOUND 2
#define LIST_EMPTY          3

/* Node layout definition */
struct node
{
    int data;
    struct node* next;
};


/* Interface function declarations */
/* List creation function */
struct node* create_list(void);

/* Data addition functions */
int insert_end(struct node* p_list, int new_data);

void show_list(struct node* p_list, const char* msg);

/* Client of linked list */
int main(void)
{
    struct node* p_list = NULL; 
    
    int status; 
    int data, start_data, end_data;
    int length;

    static const char* line = "----------------------------------------------------------------";

    p_list = create_list();
    assert(p_list != NULL);
    printf("List created successfully\n");
    puts(line);

    for(data = 1; data <= 5; ++ data)
    {
        status = insert_end(p_list, data * 5);
        assert(status == SUCCESS);
        printf("%d inserted successfully at the end of the list\n", data * 5);
    }
    show_list(p_list, "Showing the list after inserting 5 data elements at the end:\n");
    puts(line);

    return(0);
}

/* Server of linked list */
/* Interface function declarations */
/* List creation function */
struct node* create_list()
{
    struct node* head_node = NULL;

    head_node = (struct node*)malloc(sizeof(struct node));
    if(NULL == head_node)
    {
        puts("out of memory");
        exit(EXIT_FAILURE);
    }

    (*head_node).data = 0;
    (*head_node).next = NULL;
    
    return(head_node);
}

int insert_end(struct node* p_list, int new_data)
{
    struct node* run = NULL;
    struct node* new_node = NULL;

    // Step 1: Allocate and initialize new node
    new_node = (struct node*)malloc(sizeof(struct node));
    if(NULL == new_node)
    {
        puts("Out of memory");
        exit(EXIT_FAILURE);
    }

    (*new_node).data = new_data;
    (*new_node).next = NULL;

    // Step 2: Locate the last node
    run = p_list;
    while((*run).next != NULL)
    {
        run = (*run).next;
    }

    // Step 3: Append the new node at the last position
    (*run).next = new_node;
    return(SUCCESS);
}

void show_list(struct node* p_list, const char* msg)
{
    struct node* run = NULL;

    if(msg != NULL)
        puts(msg);
    
    printf("[START]->");
    run = (*p_list).next;
    while(run != NULL)
    {
        printf("[%d]->", (*run).data);
        run = (*run).next;
    }
    printf("[END]\n");
}

