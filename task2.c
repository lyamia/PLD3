#include <stdio.h>
/**
 *
 *
 */
float avr(int* s, int size)
{
	if (size <= 0)
		return 0;

	int sum = 0;
	int* first = s;
while (*first)
{
	sum += *first;
		first++;
}
return (float)sum / size;
}

int main () 
{
 int arr[] = {1, 24, 35, 12, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    float avarage =float avr(int* s, int size);

return 0;
}
