
typedef struct node
{
    int info;
    struct node* link;
}node;

  node* insert_in_beginig(node *start , int data);

   void insert_in_end(node *start , int data);

  node* creat_list(node * start);

  void display_list(node*start);

   node* delet_list(node * start,int data);

