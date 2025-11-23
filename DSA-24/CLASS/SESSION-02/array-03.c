#include<stdio.h> // for declaration of printf() function

// declaration of display()
void display(int arr[], int size);

int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[3] = {11, 12, 13};
    int c[7] = {110, 120, 130, 140, 150, 160, 170};

    printf("Printing array a: \n");
    display(a, 5);

    printf("Printing array b: \n");
    display(b, 3);
    
    printf("Printing array c: \n");
    display(c, 7);
}

void display(int arr[], int size)
{
    int i;

    i=0;
    while(i < size)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        i = i + 1;
    }
}