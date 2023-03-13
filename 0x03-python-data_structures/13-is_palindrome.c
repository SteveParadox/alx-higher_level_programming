/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to head of list
 * Return: 1 if list is palindrome, 0 if it is not
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head, *prev = NULL, *tmp;
    int palindrome = 1;

    if (*head == NULL || (*head)->next == NULL)
        return (1);

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        tmp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = tmp;
    }

    if (fast != NULL)
        slow = slow->next;

    while (prev != NULL && slow != NULL)
    {
        if (prev->n != slow->n)
        {
            palindrome = 0;
            break;
        }
        prev = prev->next;
        slow = slow->next;
    }

    prev = NULL;
    while (slow != NULL)
    {
        tmp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = tmp;
    }
    (*head)->next = prev;

    return (palindrome);
}
