#include<iostream>
#include<ctime>
#include<cstdlib>

void cut_arr(int*& arr, int length, int num) {
	if (length <= num) {
		delete[]arr;
		arr = new int[0];
		return;
	}
	if (num <= 0)
		return;
	int *tmp = new int[length - num];
	for (int i = 0; i < length - num; i++)
		tmp[i] = arr[i];
	delete[]arr;
	arr = tmp;
}



int main() {
	
	/*
	//int k = 0;
	const int size = 10;
	int arr1[size]{};
	int* point=arr1;//&arr1[0];
	for (int i = 0; i < size; i++) {
		//arr1[i] = i;
		*(point+i) = i;
		std::cout << *(arr1+i) << ' ';

	}
	*/
	


	int size2;
	std::cin >> size2;
	int* arr2 = new int[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (20 - 10 + 1) + 10;
		std::cout << arr2[i] << ' ';
	}
	std::cout << std::endl;
	
	int n;
	std::cin >>n;
	
	cut_arr(arr2, size2, n);
	
	for (int i = 0; i < size2-n; i++)
		std::cout << arr2[i] << ' ';
	std::cout << std::endl;
	
	delete[] arr2;

	





	return 0;
}