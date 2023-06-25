#include <iostream>
#include <conio.h>

using namespace std; 

struct node
{
    int data;
    node *next;
};

node *head, *temp, *insert;
int x;

// fungsi untuk menampilkan data linked list
void tampil()
{
    node *bantu;
    bantu = head;
    while (bantu != NULL)
    {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

// fungsi untuk menginsert node di awal linked list
void insertFirst(int value)
{
    insert = new node;
    insert->data = value;
    insert->next = head;
    head = insert;
}

// fungsi untuk menginsert node setelah node tertentu (x)
void insertAfter(int value)
{
    x = value;
    insert = new node;
    insert->data = 35;
    insert->next = NULL;
    node *after;
    after = head;
    while (after->data != x)
    {
        after = after->next;
    }
    if (after->data == x)
    {
        insert->next = after->next;
        after->next = insert;
    }
    else
    {
        cout << "Data tidak ditemukan" << endl;
    }
}

// fungsi untuk menginsert node sebelum node tertentu (x)
void insertBefore(int value)
{
    x = value;
    insert = new node;
    insert->data = 25;
    insert->next = NULL;
    if (head->data == x)
    {
        insert->next = head;
        head = insert;
    }
    else
    {
        node *before, *temp;
        before = head;
        temp = head->next;
        while (temp != NULL && temp->data != x)
        {
            before = temp;
            temp = temp->next;
        }
        if (temp != NULL && temp->data == x)
        {
            insert->next = temp;
            before->next = insert;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
}

// fungsi untuk menginsert node terakhir pada linked list
void insertLast(int value)
{
    insert = new node;
    insert->data = value;
    insert->next = NULL;
    if (head == NULL)
    {
        head = insert;
    }
    else
    {
        node *last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = insert;
    }
}

int main()
{
    // pengisian single linked list secara manual
    head = new node;
    head->data = 10;
    head->next = new node;
    head->next->data = 20;
    head->next->next = new node;
    head->next->next->data = 40;
    head->next->next->next = NULL;

    cout << "Data awal: ";
    tampil();

    // insert di awal node
    insertFirst(5);

    cout << "Data setelah insert di awal: ";
    tampil();

    // insert setelah node tertentu (x)
    cout << "Data setelah insert setelah 10:";
    cout << "Data setelah insert setelah 10: ";
tampil();

// insert sebelum node tertentu (x)
cout << "Data setelah insert sebelum 20: ";
insertBefore(20);

cout << "Data setelah insert sebelum 20: ";
tampil();

// insert di akhir node
insertLast(50);

cout << "Data setelah insert di akhir: ";
tampil();

getch();
return 0;
}
