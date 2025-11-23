/* Header files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/* Symbolic Constants */
#define SUCCESS             0
#define TRUE                1
#define FALSE               0
#define LIST_DATA_NOT_FOUND 1
#define LIST_EMPTY          2

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
int insert_start(struct node* p_list, int new_data);
int insert_end(struct node* p_list, int new_data);
int insert_after(struct node* p_list, int existing_data, int new_data);
int insert_before(struct node* p_list, int existing_data, int new_data);

/* Get function */
int get_start(struct node* p_list, int* p_start_data);
int get_end(struct node* p_list, int p_end_data);

/* Pop fucntions */
int pop_start(struct node* p_list, int* p_start_data);
int pop_end(struct node* p_list, int* p_end_data);

/* Remove functions */
int remove_start(struct node* p_list);
int remove_end(struct node* p_list);
int remove_data(struct node* p_list, int r_data);

/* Miscellaneous functions */
int find(struct node* p_list, int f_data);
int get_list_length(struct node* p_list);
int is_list_empty(struct node* p_list);
void show_list(struct node* p_list, const char* msg);

/* List destruction function */
int destroy_list(struct node* p_list);


/* Client of linked list */
int main(void)
{
    struct node* p_list = NULL;
    status_t status;
    data_t data;

    p_list = create_list();
    assert(p_list != NULL);

    for(i=0; i < 5; i++)
    {
        data = (i + 1) * 5;
        status = insert_end(p_list, data);

    }

    return (0);
}

/* Server of linked list */

list_t create_list(void)
{
    list_t* p_list = NULL;

    p_list = (list_t*)malloc(sizeof(list_t));

    if()
}

status_t insert_start(list_t* )
status_t  find( list_t* )