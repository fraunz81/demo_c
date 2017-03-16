
#include <stdio.h>
#include <stddef.h>

void enterNumbers(int a[], int n);
void bubbleSortAsc(int a[], int n);
void bubbleSortDesc(int a[], int n);
void bubbleSort(int a[], int n, char order);
void printArray(int a[], int n);


void enterNumbers(int a[], int n)
{
  int i;

  printf("Enter Numbers to be sorted in ascending order (%d):\n", n);
  for (i = 0; i < n; i++)
  {
    printf("%d. Zahl: ", i+1);
    scanf("%d", &a[i]);
  }
}

void bubbleSortAsc(int a[], int n)
{
  int i, j, tmp;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[j+1])
      {
        tmp = a[j+1];
        a[j+1] = a[j];
        a[j] = tmp;
      }
    }
  }
}

void bubbleSortDesc(int a[], int n)
{
  int i, j, tmp;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (a[j] < a[j+1])
      {
        tmp = a[j+1];
        a[j+1] = a[j];
        a[j] = tmp;
      }
    }
  }
}

void bubbleSort(int a[], int n, char order)
{
  printf("Order (%c):\n", order);
  if (order == 'a')
    bubbleSortAsc(&a[0], n);
  else if (order == 'd')
    bubbleSortDesc(&a[0], n);
}

void printArray(int a[], int n)
{
  int i;

  printf("Numbers:\n");
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
}

int main(int argc, char const *argv[])
{
  int a[100], n;
  char order;

  printf("Enter how many numbers to be sorted:\n");
  scanf("%d", &n);

  enterNumbers(&a[0], n);

  printf("Enter how to order:\n");
  // The %c conversion specifier won't automatically skip any leading whitespace,
  // so if there's a stray newline in the input stream (from a previous entry,
  // for example) the scanf call will consume it immediately.
  // One way around the problem is to put a blank space before the conversion specifier in the format string:
  // scanf(" %c", &c);
  // The blank in the format string tells scanf to skip leading whitespace,
  // and the first non-whitespace character will be read with the %c conversion specifier.
  scanf(" %c", &order);
  bubbleSort(&a[0], n, order);

  printArray(&a[0], n);

  return 0;
}
