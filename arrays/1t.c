#include <stdio.h>
#include <conio.h>
void insert(int *number, int *lengthOfArray, int index, int value)
{
    for (int i = 5; i > index; i--)
    {

        *(number + i) = *(number + i - 1);
    }
    *(number + index) = 96;

    (*lengthOfArray)++;
    printf("\n");
}

void addValue(int *n, int *length)
{

    for (int i = 0; i < *length; i++)
    {

        *(n + i) = (i + 1);
    }
}

int linearsearch(int *number, int length, int value)
{

    for (int i = 0; i < length; i++)
    {

        if (*(number + i) == value)
        {
            return i;
        }
    }
    return -1; // if not available
}

void delete(int *number, int *length, int index)
{
    for (int i = index; i < *length - 1; i++)
    {
        *(number + i) = *(number + i + 1);
    }
    *(number + *length - 1) = 0;
    (*length)--;
}

int binarySearch(int *number, int length, int value)
{
    if (*(number) == value){
        return 0;
    }
    if (*(number + length - 1) == value) {
        return length-1;
    }
    int start = 0;
    int end = length - 1;
    int m;
    while (start+1 != m){
    m=start+((end-start)/2);   
if (*(number+m)==value){
    return m;
}else if (value>*(number+m)){
 start=m;
}else if (value<*(number+m)){
  end=m;

}

    }
    return -1;
}

int main()
{
    int number[10];
    int length = 5;

    addValue(number, &length); // number == &number[0]   === memory address of first element of array number

    for (int i = 0; i < length; i++)
    {
        printf("%d\t", number[i]);
    }
    insert(number, &length, 2, 8);

    for (int i = 0; i < length; i++)
    {
        printf("%d\t", number[i]);
    }

    printf("index = %d\n", linearsearch(number, length, 2));
    delete (number, &length, 2);

    for (int i = 0; i < length; i++)
    {
        printf("%d\t", number[i]);
    }
    


    printf("\n%d",binarySearch(number,length,3));
    return 0;
}