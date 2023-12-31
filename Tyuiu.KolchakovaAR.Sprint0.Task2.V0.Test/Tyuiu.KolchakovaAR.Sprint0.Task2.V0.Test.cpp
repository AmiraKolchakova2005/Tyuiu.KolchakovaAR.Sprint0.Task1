#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KolchakovaAR.Sprint0.Task2.Lib/Tyuiu.KolchakovaAR.Sprint0.Task2.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(TyuiuKolchakovaARSprint0Task2V0Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint0Task2V0* service = new Service();
			int a = 3;
			int b = 4;
			int c;

			//run
			c = service->Add(a, b);

			//valid 
			Assert::AreEqual(7, c);

		}
	};
}
