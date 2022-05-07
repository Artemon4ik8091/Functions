int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "����� ��������� �������: " << sum << endl;
	//cout << "�������� �������������� �������: " << (double)sum / n << endl;
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	//cout << "����� ��������� �������: " << sum << endl;
	//cout << "������� �������������� �������: " << (double)sum / n << endl;
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
	//cout << "����������� �������� � �������: " << min << endl;
	//cout << "������������ �������� � �������: " << max << endl;
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
	//cout << "����������� �������� � �������: " << min << endl;
	//cout << "������������ �������� � �������: " << max << endl;
	return max, min;//Comma operator (�������� �������) - ��������� ��������� ��������� ���������, 
	//� �� �����, ��� ��������� ���� ���������. ��������� ������ ���� ������ ����.
	//�������� ������� ���������� �������� ���������� ��������� (��������������� ����� �������).
}
