    #include <stdio.h>
     
    int main()
    {
       int i, low, high, middle, n, search, a[100];
     
       printf("Enter number of elements\n");
       scanf("%d",&n);
     
       printf("Enter %d integers\n", n);
     
       for (i = 0; i < n; i++)
          scanf("%d",&a[i]);
     
       printf("Enter value to find\n");
       scanf("%d", &search);
     
      low = 0;
      high = n - 1;
       middle = (low+high)/2;
     
       while (low <= high) {
          if (a[middle] < search)
             low = middle + 1;    
          else if (a[middle] == search) {
             printf("%d found in the array", search);
             break;
          }
          else
             low = middle - 1;
     
          middle = (low + high)/2;
       }
       if (low > high)
          printf("Element not found in the list\n", search);
     
       return 0;  
    }
