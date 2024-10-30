#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 06.1i/Lab 06.1i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestArrayProcessing
{
	TEST_CLASS(UnitTestArrayProcessing)
	{
	public:

		TEST_METHOD(TestCreate)
		{
			const int size = 10;
			int arr[size];
			int Low = -10, High = 10;

			Create(arr, size, Low, High);

			for (int i = 0; i < size; i++) 
			{
				Assert::IsTrue(arr[i] >= Low && arr[i] <= High, L"Element is out of range");
			}
		}

		
	};
}
