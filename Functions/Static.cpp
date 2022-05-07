int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	//cout << "Среденее арифметическре массива: " << (double)sum / n << endl;
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "Сумма элементов массива: " << sum << endl;
	//cout << "Среднее арифметическре массива: " << (double)sum / n << endl;
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
void MaxMin(int arr[], const int n)
{
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	//cout << "Минимальное значение в массиве: " << min << endl;
	//cout << "Максимальное значение в массиве: " << max << endl;
}
double MaxMin(double arr[], const int n)
{
	double min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	//cout << "Минимальное значение в массиве: " << min << endl;
	//cout << "Максимальное значение в массиве: " << max << endl;
	return max, min;//Comma operator (оператор запятая) - позволяет поместить несколько выражений, 
	//в то место, где ожидается одно выражение. Выражения должны быть одного типа.
	//Оператор запятая возвращает значение последнего выражения (ассоциативность слева направо).
}
