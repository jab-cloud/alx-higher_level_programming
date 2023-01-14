#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int is_palindrome(listint_t **head)
{
    listint_t *temp = *head;
    int length = 0;
    int i;
    int arr[1000];

    /* Edge case: empty list */
    if (*head == NULL)
        return 1;

    /* Get the length of the list and store the values in an array */
    while (temp != NULL)
    {
        arr[length] = temp->n;
        temp = temp->next;
        length++;
    }

    /* Compare the values in the array to check if it is a palindrome */
    for (i = 0; i < length / 2; i++)
    {
        if (arr[i] != arr[length - 1 - i])
            return 0;
    }

    return 1;
}
