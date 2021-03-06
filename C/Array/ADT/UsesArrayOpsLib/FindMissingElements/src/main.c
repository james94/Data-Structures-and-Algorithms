#include "ArrayOperations.h"

int main()
{
    int numbers1[] = {6,7,8,9,10,11,13,14,15,16,17};
    struct Array arr1 = {numbers1,12,11};
    Display(arr1);
    printf("\nFind Single Missing Element:\n");
    FindMissingElement(arr1);

    int numbers2[] = {6,7,8,9,11,12,15,16,17,18,19};
    struct Array arr2 = {numbers2,14,11};
    Display(arr2);
    printf("\nFind Multiple Missing Elements:\n");
    FindMissingElements(arr2);

    int numbers3[] = {3,7,4,9,12,6,1,11,2,10};
    struct Array arr3 = {numbers3,13,10};
    Display(arr3);
    printf("\nFind Multiple Missing Elements via Method 2:\n");
    FindMissingElements2(arr3);

    return 0;
}