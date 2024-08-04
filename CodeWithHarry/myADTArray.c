#include<stdio.h>
#include<stdlib.h>

struct myArray {
    int tSize;
    int uSize;
    int *ptr;
};

void createArray(struct myArray *a, int tSize, int uSize) {
    a->tSize = tSize;
    a->uSize = uSize;
    a->ptr = (int *)malloc(tSize * sizeof(int));
}

void setVal(struct myArray *a)
{
    for (int i = 0; i < a->uSize; i++)
    {
        printf("Enter the value of %d: ", i);
        scanf("%d", &a->ptr[i]);
    }
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->uSize; i++)
    {
        printf("The value of %d is %d\n", i, a->ptr[i]);
    }
}

void Delete(struct myArray *a, int index) {
    for (int i = index; i < a->uSize - 1; i++)
    {
        a->ptr[i] = a->ptr[i + 1];
    }
    a->uSize--;
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("We are running setVal now\n");
    setVal(&marks);
    printf("We are running show now\n");
    show(&marks);
    return 0;
}

