    #include <stdio.h>
     
    int main()
    {
      int a[20], search, i, n, flag;
     
      printf("Enter number of elements in array\n");
      scanf("%d", &n);
     
      printf("Enter %d integers\n", n);
     
      for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
     
      printf("Enter a number to search in the array\n");
      scanf("%d", &search);
     
      for (i = 0; i < n; i++)
      {
        if (a[i] == search)    
        {
          printf("%d is present in the given array\n", search);
          break;
        }
      }
      if (i == n)
        printf("%d isn't present in the given array.\n", search);
     
      return 0;
    }
