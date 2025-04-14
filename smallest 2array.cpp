#include <stdio.h>

void fun(int a[], int n);

int main() {
    int a[100], i, n;
    printf("Enter range of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    fun(a, n);
    return 0;
}
void fun(int a[], int n) 
{
    int i, smallest;
    smallest = a[0];
    for(i = 1; i < n; i++)
	 {
        if(a[i] < smallest) 
		{
            smallest = a[i];
        }
    }
    printf("Smallest element: %d", smallest);
}

