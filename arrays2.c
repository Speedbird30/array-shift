/*
Name: Sumit Subhash Jadhav
U89612131.
This function checks if two arrays of the same length match after moving the left most element to the right most position few times on the first array.
*/
#include <stdio.h>
void shift(int a[],int n)    //Definition of the function that was earlier initiated
{
    int x;
    for (x=n-1; x < n; x++)    //Function for shifting elements
    {
        a[x]=a[0];
    }
    for (x=0; x < n-1; x++)
    {
        a[x]=a[x+1];
    }
}
int main()
{
    int y,z,n;
    int r=0;
    printf("Enter the length of the input array: ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter elements of the first array: ");
    for (y = 0; y < n; y++)   //Taking input for elements of first array
    {
        scanf("%d", &a[y]);
    }
    printf("Enter elements of the second array: ");
    for (y = 0; y < n; y++)   //Taking input for elements of first array
    {
        scanf("%d", &b[y]);
    }
    for (z = 0; z < n; z++)   //Applying shift multiple times
    {
        shift(a,n+1);
        for (y = 0; y < n; y++)
        {
            if (a[y]==b[y])
            {
                r++;
            }
        }
        if (r==n)
        {
            break;
        }
    }
    if (r==n)    //Printing suitable results
    {
        printf("Output: True");
    }
    else
    {
        printf("Output: False");
    }
    return(0);
}
