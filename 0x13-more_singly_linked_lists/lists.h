#ifndef hi
#define hi
/** 
 * struct listint_s - singly linked list
 * @n: string - (malloc'ed string)
 * @next: points to the next node
 *  
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct list_s *next;
} listint_t;
size_t print_listint(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
#endif
