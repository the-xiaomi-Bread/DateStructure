#define _CRT_SECURE_NO_WARNINGS 1

#include"Sort.h"

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		int end = i - 1;
		int tmp = a[i];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
				break;
		}
		a[end + 1] = tmp;
	}
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = gap; i < n; i++)
		{
			int end = i - gap;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] >= tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

void SelectSort(int* a, int n)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		for (int i = left; i < right; i++)
		{
			if (a[i] < a[left])
			{
				Swap(&a[i], &a[left]);
			}
			if (a[i] > a[right])
			{
				Swap(&a[i], &a[right]);
			}
		}
		left++;
		right--;
	}
}