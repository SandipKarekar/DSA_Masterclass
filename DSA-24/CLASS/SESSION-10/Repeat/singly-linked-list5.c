/* Header files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/* Symbolic Constants */
#define SUCCESSS            1
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

/* Interface function declaration */
/* List creation function */
struct node* create_list(void);

/* Data addition functions */
int insert_start(struct node* p_list, int new_data);
int insert_end(struct node* p_list, int new_data);
int insert_after(struct node* p_list, int existing_data, int new_data);
int insert_before(struct node* p_list, int existing_data, int new_data);

/* Get functions */
int get_start(struct node* p_list, int* p_start_data);
int get_end(struct node* p_list, int* p_end_data);


