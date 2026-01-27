typedef struct adj_node_struct_t {
    int vid;
    struct adj_node_struct_t *next;
} adj_node_t;

void init_adj_list(adj_node_t*** list, int n);
adj_node_t* create_node(int vid);
void add_node(adj_node_t** list, int src, adj_node_t* neighbor);
int dequeue_node(adj_node_t** list);
