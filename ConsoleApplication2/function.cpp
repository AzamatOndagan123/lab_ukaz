#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;
//enum type_number { otricat, polojit, nul };
void FillArray(int* arr,int size ) 
{
	for (int i = 0; i < size; ++i)
		
		arr[i] = 1+ rand() %90;

}

void PrintArray(int *arr, int size)
{
	cout << "Ёлементы одномерного массива:" << endl;
	for (int i = 0; i < size; i++) cout << arr[i] << ' ';
	cout << endl;
}

void PrintMultiArr(int *arr, int y, int x) 
{
	cout << "Ёлементы двумерного массива:";
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << *(arr + i * x + j) << ' ';
		}
		cout << endl;
	}
	cout << endl;
}
void func(int *arr, int size, int *summ, int *mult)
{
	for (int i = 0; i < size; i++)
	{
		*summ += *(arr + i);
	}
	cout << "Sum=" << *summ;
	cout << endl;
	for (int j = 0; j < size; j++)
	{
		*mult *= (*arr + j);
	}
	cout << "Mult=" << *mult;
}

void srmas(int *arr, int y, int x)
{

	int count = 0;
	int sum = 0;
	int sr = 0;
	for (int i = 0; i < y; i++)
	{
		
		for (int j = 0; j < x; j++)
		{
			sum += (*(arr + i * x + j));
			count++;
		}
	}
	cout << "среднее арифметическое=" << sum / count << endl;

}
void chet(int *arr, int y, int x)
{
	int count = 0;
	int a = 0;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (*(arr + i * x + j) % 2 == 0)
			{
				count++;
			}
			else
				a++;
		}
	}
	cout << "количество чЄтныхэлементов=" << count << endl;
	cout << "количество нечЄтных элементов=" << a << endl;

}
int rec(int a, int b)
{

	if (b == 0) return 0;
	return a + rec(a, b - 1);
}

//
//int numb(type_number tn, int* arr, int size)
//{
//	switch (tn)
//	{
//	case otricat:
//		for (int i = 0; i < size; ++i) 
//			arr[i] = 1 + rand() % 90;
//		for (int i = 0; i < size; ++i)
//		if(arr[i]<0)
//		return arr[i];
//		break;
//	case polojit:
//		for (int i = 0; i < size; ++i)
//			arr[i] = 1 + rand() % 90;
//		for (int i = 0; i < size; ++i)
//			if (arr[i]>0)
//		return arr[i];
//		break;
//	case nul:
//		for (int i = 0; i < size; ++i)
//			arr[i] = 1 + rand() % 90;
//		for (int i = 0; i < size; ++i)
//			if (arr[i]==0)
//		return arr[i];
//		break;
//	}
//}
//void creat(int*arr, int r, int start, int end, type_number tn)
//{
//	for (int i = 0; i < r; i++)
//		arr[i] = numb(tn, start, end);
//}