/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    char name[100];
    float price;
    int pages;
    char language[3];
    float weight;
    int year;
    struct node *next;
};

struct node *head = NULL;


void printList()
{
    struct node *p = head;
    printf("\nСписок книжок Гаррі Поттера:\n\n");
    
    while (p != NULL) {
        printf("Назва: %s\nЦіна: %.2f UAH\nСторінки: %d\nМова: %s\nВага: %.2fg\nРік: %d\n\n",
               p->name, p->price, p->pages, p->language, p->weight, p->year);
        p = p->next;
    }
}

void insertAtEnd(char name[100], float price, int pages, char language[3], float weight, int year)
{
    struct node *lk = (struct node*) malloc(sizeof(struct node));
    if (lk == NULL) {
        printf("Помилка виділення пам’яті!\n");
        return;
    }

    strcpy(lk->name, name);
    strcpy(lk->language, language);
    lk->price = price;
    lk->pages = pages;
    lk->weight = weight;
    lk->year = year;
    lk->next = NULL;

    if (head == NULL) {
        head = lk;
    } else {
        struct node *linkedlist = head;
        while (linkedlist->next != NULL)
            linkedlist = linkedlist->next;
        linkedlist->next = lk;
    }
}

int main()
{
    insertAtEnd("Гаррі Поттер і філософський камінь", 480.0, 320, "UA", 0.4, 2002);
    insertAtEnd("Гаррі Поттер і таємна кімната", 510.0, 352, "UA", 0.42, 2003);
    insertAtEnd("Гаррі Поттер і в'язень Азкабану", 530.0, 448, "UA", 0.45, 2004);
    insertAtEnd("Гаррі Поттер і келих вогню", 600.0, 640, "UA", 0.55, 2005);
    insertAtEnd("Гаррі Поттер і Орден Фенікса", 620.0, 896, "UA", 0.75, 2006);
    insertAtEnd("Гаррі Поттер і напівкровний принц", 580.0, 704, "UA", 0.68, 2007);
    insertAtEnd("Гаррі Поттер і смертельні реліквії", 650.0, 784, "UA", 0.7, 2008);
    
    printList();
    return 0;
}