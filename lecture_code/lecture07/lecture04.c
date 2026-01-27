#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "LL.h"

void init_adj_list(adj_node_t*** list, int n)
{
    adj_node_t** tmp_list = (adj_node_t**) malloc(sizeof(adj_node_t*) * n);
    assert(tmp_list);
    for(int i = 0; i < n; i++) {
        tmp_list[i] = NULL;
    }
    *list = tmp_list;
}

adj_node_t* create_node(int vid)
{
    adj_node_t* new_node = (adj_node_t*) malloc(sizeof(adj_node_t));
    assert(new_node);
    new_node->vid = vid;
    new_node->next = NULL;

    return new_node;
}

void add_node(adj_node_t** list, int src, adj_node_t* neighbor)
{
    if(list[src] == NULL) {
        // first neighbor to be added
        list[src] = neighbor;
    } else {
        // otherwise, traverse the list until you reach the end
        adj_node_t* next = list[src];
        while(next->next != NULL) {
            next = next->next;
        }
        next->next = neighbor;
    }
}

void print_adj_list(adj_node_t** list, int rows)
{
    assert(list);
    for(int i = 0; i < rows; i++) {
        fprintf(stdout, "{%d} -> ", i);
        adj_node_t* next = list[i];
        while(next != NULL) {
            fprintf(stdout, "%d -> ", next->vid);
            next = next->next;
        }
        fprintf(stdout, "END\n");
    }
    fprintf(stdout, "\n");
}

/* Why do you need to pass in adj_node_t** */
int dequeue_node(adj_node_t** list)
{
    int vid = -1;
    if(list != NULL) {
        // head points to the head of the list
        adj_node_t* head = *list;
        if(head != NULL) {
            // if head != NULL, there are nodes in this list
            adj_node_t* tmp = head;
            vid = head->vid;
            head = head->next;
            // Now, the head points to the next node in the list
            // Don't forget to free this node
            free(tmp); 
        }
        // list needs to point to the new head
        *list = head;
    } 

    return vid;
}

int main(int argc, char** argv)
{
    // create an array of adjacency list
    int num_rows = atoi(argv[1]);
    adj_node_t** adj_list;

    // first initialize the list
    init_adj_list(&adj_list, num_rows);

    int neighbor_vid = 3;
    adj_node_t* neighbor = create_node(neighbor_vid);
    add_node(adj_list, 0, neighbor);

    print_adj_list(adj_list, num_rows);

    // is it okay to do this?  Will neighbor overwrite previously added node?
    neighbor = create_node(1);
    add_node(adj_list, 2, neighbor);

    print_adj_list(adj_list, num_rows);

    dequeue_node(&adj_list[0]);

    print_adj_list(adj_list, num_rows);

    dequeue_node(&adj_list[2]);

    print_adj_list(adj_list, num_rows);

    dequeue_node(&adj_list[3]);
    print_adj_list(adj_list, num_rows);


    return 0;
}
