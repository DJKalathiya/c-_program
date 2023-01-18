#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
void insertatbeg(int value);
void insertatend(int value);
void insertatpos(int value, int position);
void removeatbeg();
void removeatend();
void removeatpos(int position);
void display();
int checkemt();
struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

int main()
{
    int value, choice;
    char c;

    do
    {
        cout << "Enter : \n1 for insert\n2 for remove \n3 for display\n\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int x;
            cout << "Enter : \n1 for insert at begining\n2 for insert at end\n3 for insert at position\n\n";
            cin >> x;
            cout << "Entr value for inserted : ";
            cin >> value;
            switch (x)
            {
            case 1:
            {
                insertatbeg(value);
                break;
            }
            case 2:
            {
                insertatend(value);
                break;
            }
            case 3:
            {
                int position;
                cout << "Enter position to insert a value\n";
                cin >> position;
                insertatpos(value, position);
                break;
            }
            default:
                cout << "Enter valid choice\n";
                break;
            }
            break;
        }
        case 2:
        {
            int x;
            cout << "Enter : \n1 for remove at begining\n2 for remove at end\n3 for remove at position\n\n";
            cin >> x;
            switch (x)
            {
            case 1:
            {
                removeatbeg(value);
                break;
            }
            case 2:
            {
                removeatend(value);
                break;
            }
            case 3:
            {
                int position;
                cout << "Enter position to insert a value\n";
                cin >> position;
                removeatpos(position);
                break;
            }
            default:
                cout << "Enter valid choice\n";
                break;
            }
            break;
        }
        case 3:
        {
            display();
            break;
        }
        default:
            cout << "Enter valid choice\n" break;
        }
        cout << "Enter Y to continue else any letter\n";
        fflush(stdin);
        c = getche();
        cout << endl;
    } while (c == 'y' || c == 'Y');

    return 0;
}
void insertatbeg(int value)
{
    struct Node *newnumber;
    newnumber = (struct Node *)malloc(sizeof(struct Node));
    newnumber->data = value;
    if (head == NULL)
    {
        newnumber->next = NULL;
        head = newnumber;
    }
    else
    {
        newnumber->next = head;
        head = newnumber;
    }
    cout << "Given number " << value << " is inserted at begining Successfully\n";
}
void insertatend(int value)
{
    struct Node *newnumber;
    newnumber = (struct Node *)malloc(sizeof(struct Node));
    newnumber->data = value;
    newnumber->next = NULL;
    if (head == NULL)
    {
        head = newnumber;
    }
    else
    {
        struct Node *temp;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnumber;
    }
}
void insertatpos(int value, int position)
{
    struct Node *newnumber, *temp;
    int count, flag;
    newnumber = (struct Node *)malloc(sizeof(struct Node));
    newnumber->data = value;
    temp = head;
    flag = checkemt();
    if (flag == 1)
    {
        int flag1 = 0;
        count = 0;
        while (temp != NULL)
        {
            if (count == position - 1)
            {
                flag1 = 1;
                newnumber->next = temp->next;
                temp->next = newnumber;
            }
            else
            {
                temp = temp->next;
            }
            count++;
        }
        if (flag1 == 0)
        {
            cout << "Position not exsist\n";
        }
        else
        {
            cout << "Successfully inserted\n";
        }
    }
    else
    {
        cout << "List is empty\n";
    }
}
void removeatbeg()
{
    int flag = checkemt();
    if (flag == 1)
    {
        struct Node *temp;
        temp = head;
        if (temp->next = NULL)
        {
            head = NULL ;
            free(temp);
        }
        else
        {
            head = temp->next;
            free(temp);
        }
        cout << "Delete successfully\n";
    }
    else
    {
        cout << "LIst is empty\n";
    }
}
void removeatend()
{
    int flag = checkemt();
    if (flag == 1)
    {
        if (temp->next = NULL)
        {
            head = NULL;
        }
        else
        {
            struct Node *temp = head, *temp1;
            while (temp->next != NULL)
            {
                temp1 = temp;
                temp = temp->next;
            }
            temp1->next = NULL;
            free(temp);
        }
    }
    else
    {
        cout << "LIst is empty\n";
    }
}
void removeatpos(int position)
{
    int flag = checkemt();
    if (flag == 1)
    {
        int count = 0, flag1 = 0, i;
        struct Node *temp = head;
        if (position == 1)
        {
            head = temp->next;
            free(temp);
            return;
        }
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp->next;
        }
        struct Node *temp1 = temp->next;
        temp->next = temp1->next;
        free(temp1);
    }
    else
    {
        cout << "List is empty\n";
    }
}
void display()
{
    int flag = checkemt();
    if (flag == 1)
    {
        struct Node *temp;
        temp = head;
        while (temp->next != NULL)
        {
            cout << temp->data << " ---> ";
            temp = temp->next;
        }
        cout << temp->data << " --> ";
        cout << endl;
    }
    else
    {
        cout << "NO list available\n";
    }
}
int checkemt()
{
    if (head == NUll)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}