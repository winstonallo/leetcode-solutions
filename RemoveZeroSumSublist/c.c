typedef struct _map 
{
    int key;
    struct ListNode* value;
    struct _map *next;
}   _map;

void insert(_map **map, int key, struct ListNode *value) 
{
    _map *_new = malloc(sizeof(_map));
    _new->key = key;
    _new->value = value;
    _new->next = *map;
    *map = _new;
}

struct ListNode* find(_map *map, int key) 
{
    while (map != NULL) 
    {
        if (map->key == key) 
        {
            return map->value;
        }
        map = map->next;
    }
    return NULL;
}

struct ListNode* removeZeroSumSublists(struct ListNode *head)
{
    struct ListNode dummy;
    dummy.val = 0;
    dummy.next = head;
    _map *map = NULL;
    struct ListNode *temp = &dummy;
    int prefix = 0;
    
    while (temp != NULL) 
    {
        prefix += temp->val;
        insert(&map, prefix, temp);
        temp = temp->next;
    }

    prefix = 0;
    temp = &dummy;

    while (temp != NULL) 
    {
        prefix += temp->val;
        temp->next = find(map, prefix)->next;
        temp = temp->next;
    }
    return dummy.next;
}
