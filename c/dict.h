typedef struct dictnode
{
  char *key;
  char *value;
  struct dictnode *next;
}dictnode;

typedef struct dict
{
  int count;
  dictnode *nodelist;
}dict;

dict *dict_create();
dictnode *node_create(char *key, char *value);
void dict_destory(dict *d);
void dict_insert(dict *d, char *key, char* value);
void print_dict(dict *d);
char *get_value_by_key(dict *d, char *key);