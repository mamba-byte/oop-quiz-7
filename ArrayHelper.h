#ifndef ARRAYHELPER_H
#define ARRAYHELPER_H

#include <iostream>
#include <iomanip>

template <typename T>
class ArrayHelper
{
public:
  // Displays the given array according to the 3rd and 4th argument.
  static void Display(T* array, int size, int numberOfElementsInOneLine, int onElementLength)
  {
    for (int i = 0; i < size; i++)
    {
      std::cout << std::setw(onElementLength) << array[i];
      if ((i + 1) % numberOfElementsInOneLine == 0)
      {
        std::cout << std::endl;
      }
    }
  }

  // Finds the maximum element and returns the index of it.
  static int MaxIndex(T* array, int size)
  {
    int maxIndex = 0;
    for (int i = 1; i < size; i++)
    {
      if (array[i] > array[maxIndex])
      {
        maxIndex = i;
      }
    }
    return maxIndex;
  }

  // Finds the minimum element and returns the index of it.
  static int MinIndex(T* array, int size)
  {
    int minIndex = 0;
    for (int i = 1; i < size; i++)
    {
      if (array[i] < array[minIndex])
      {
        minIndex = i;
      }
    }
    return minIndex;
  }

  // Merges the given arrays and returns a new array containing the merged elements.
  static T* Merge(T* firstArray, int firstArraySize, T* secondArray, int secondArraySize)
  {
    T* mergedArray = new T[firstArraySize + secondArraySize];
    for (int i = 0; i < firstArraySize; i++)
    {
      mergedArray[i] = firstArray[i];
    }
    for (int i = 0; i < secondArraySize; i++)
    {
      mergedArray[firstArraySize + i] = secondArray[i];
    }
    return mergedArray;
  }

  // Sorts the given array in ascending order.
  static void Sort(T* array, int size)
  {
    for (int i = 0; i < size - 1; i++)
    {
      for (int j = 0; j < size - i - 1; j++)
      {
        if (array[j] > array[j + 1])
        {
          T temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
        }
      }
    }
  }

  // Swaps the given elements.
  static void Swap(T& operand1, T& operand2)
  {
    T temp = operand1;
    operand1 = operand2;
    operand2 = temp;
  }
};

#endif
