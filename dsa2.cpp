#include <iostream>
using namespace std;
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};
void createarray(struct myarray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}
void show(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        cout << (a->ptr)[i] << endl;
    }
}
void setval(struct myarray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        cout << "Enter element " << i << " : ";
        cin >> n;
        (a->ptr)[i] = n;
    }
}
int main()
{
    struct myarray marks;
    createarray(&marks, 10, 2);
    cout << "We are running setval now \n";
    setval(&marks);

    cout << "WE are running show now \n";
    show(&marks);

    return 0;
}