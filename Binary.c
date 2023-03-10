#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  printf("Enter value to find\n");
  scanf("%d", &search);
  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}

.....................................................................



int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}


.........................................................
	
	
	#include<stdio.h>
int main()
{
    int c,first,last,middle,search,n,arr[100];
    printf("How many number of element:-");
    scanf("%d",&n);
    printf("Enter %d interegr:-",n);
    for(c=0;c<n;c++)
    scanf("%d",&arr[c]);
    printf("enter value for find:-");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last){
        if(arr[middle]<search)
        first=middle+1;
        else if(arr[middle]==search){
            printf("%d found in location %d.\n",search,middle+1);
            break;
        }
        else
        last=middle-1;
        middle=(first+last)/2;
    }
    if(first>last)
    printf("Not found %d isn't present in the list.\n",search);
    return 0;
}
