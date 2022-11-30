#include<stdio.h> 
#include<stdlib.h> 

typedef struct cell {
    int val;
    struct cell* next;
} CELL;

void addList(CELL* list, int val)
{
    CELL* number;
    number = (CELL*)malloc(sizeof(CELL));
    number->val = val;
    number->next = NULL;

    while (list->next != nullptr)
    {
        list = list->next;
    }
    list->next = number;
}
void printList(CELL* list)
{
    printf("[");
    while (list->next != nullptr)
    {
        list = list->next;
        printf("%d", list->val);
        printf(",");
    }
    printf("]\n");
}
int main()
{
    int data;
    CELL first_cell;
    first_cell.next = nullptr;

    while (true)
    {
        printf("好きな数字を入力してください。\n");
        printf("入力する値");
        scanf_s("%d", &data);
        printf("入力した値");
        addList(&first_cell, data);
        printList(&first_cell);
    }
    return 0;
}


