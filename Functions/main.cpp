#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Static.h"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	double arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	Sum(arr, n);
	MaxMin(arr, n);
}