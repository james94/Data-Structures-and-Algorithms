#include "ArrayOperations.h"

int main()
{
    struct Array arr1;
    int ch;
    int x, index;

    printf("Enter Size of Array");
    scanf("%d", &arr1.size);
    arr1.A = (int *)malloc(arr1.size*sizeof(int));
    arr1.length = 0;
    printf("arr1.length = %d\n", arr1.length);

    do
    {
        printf("\n\nMenu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Sum\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("enter your choice ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: printf("Enter an element and index ");
                scanf("%d%d", &x, &index);
                Insert(&arr1, index, x);
                break;
            case 2: printf("Enter index ");
                scanf("%d", &index);
                x = Delete(&arr1, index);
                printf("Deleted Element is %d\n", index);
                break;
            case 3: printf("Enter element to search ");
                scanf("%d", &x);
                index = LinearSearch(arr1, x);
                printf("Element index %d", index);
                break;
            case 4: printf("Sum is %d\n", Sum(arr1));
                break;
            case 5: Display(arr1);
        }
    }while(ch < 6);
    return 0;
}