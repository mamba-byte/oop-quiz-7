#include <iostream>
#include <time.h>
#include "ArrayHelper.h"

using namespace std;

template<class T>
T GenerateRandomNumber(int lowerBound, int upperBound, double scaler = 1)
{
	lowerBound *= scaler;
	upperBound *= scaler;
	T randomData = lowerBound + rand() % (upperBound - lowerBound + 1);
	randomData /= scaler;
	return randomData;
}

int main()
{
  srand(time(NULL));

  int minIndex, maxIndex;
  ArrayHelper<int> IntegerArrayHelper;
  int IntegerArray1[10];
  std::cout << "Integer Array:\n";
  for (size_t i = 0; i < 10; i++)
  {
    IntegerArray1[i] = GenerateRandomNumber<int>(-50, 50);
  }
  IntegerArrayHelper.Display(IntegerArray1, 10, 5, 4);
  IntegerArrayHelper.Sort(IntegerArray1, 10);
  IntegerArrayHelper.Display(IntegerArray1, 10, 5, 4);
  minIndex = IntegerArrayHelper.MinIndex(IntegerArray1, 10);
  maxIndex = IntegerArrayHelper.MaxIndex(IntegerArray1, 10);
  std::cout << "Min : " << IntegerArray1[minIndex] << std::endl;
  std::cout << "Max : " << IntegerArray1[maxIndex] << std::endl;
  int IntegerArray2[5];
  for (size_t i = 0; i < 5; i++)
  {
    IntegerArray2[i] = GenerateRandomNumber<int>(-50, 50);
  }
  IntegerArrayHelper.Display(IntegerArray2, 5, 5, 4);
  int* newArray = IntegerArrayHelper.Merge(IntegerArray1, 10, IntegerArray2, 5);
  IntegerArrayHelper.Display(newArray, 15, 5, 4);
  
 
  std::cout << std::endl << std::endl;
  std::cout << "Double Array:\n";
  ArrayHelper<double> DoubleArrayHelper;
  double DoubleArray1[10];
  for (size_t i = 0; i < 10; i++)
  {
    DoubleArray1[i] = GenerateRandomNumber<double>(-50.0, 50.0);
  }
  DoubleArrayHelper.Display(DoubleArray1, 10, 5, 4);
  DoubleArrayHelper.Sort(DoubleArray1, 10);
  DoubleArrayHelper.Display(DoubleArray1, 10, 5, 4);
  minIndex = DoubleArrayHelper.MinIndex(DoubleArray1, 10);
  maxIndex = DoubleArrayHelper.MaxIndex(DoubleArray1, 10);
  std::cout << "Min : " << DoubleArray1[minIndex] << std::endl;
  std::cout << "Max : " << DoubleArray1[maxIndex] << std::endl;
  double DoubleArray2[5];
  for (size_t i = 0; i < 5; i++)
  {
    DoubleArray2[i] = GenerateRandomNumber<double>(-50.0, 50.0);
  }
  DoubleArrayHelper.Display(DoubleArray2, 5, 5, 4);
  double* newDoubleArray = DoubleArrayHelper.Merge(DoubleArray1, 10, DoubleArray2, 5);
  DoubleArrayHelper.Display(newDoubleArray, 15, 5, 4);

	return 0;
}