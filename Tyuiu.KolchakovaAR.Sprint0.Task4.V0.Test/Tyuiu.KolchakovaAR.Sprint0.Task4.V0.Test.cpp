#include "pch.h"
#include "CppUnitTest.h"
#include "../../Tyuiu.KolchakovaAR.Sprint0/Tyuiu.KolchakovaAR.Sprint0.Task4.V0.Lib/Tyuiu.KolchakovaAR.Sprint0.Task4.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;   

namespace UnitTst4
{
	TEST_CLASS(TyuiuKolchakovaARSprint0Task4V0Test4)
	{
	public:
		
		TEST_METHOD(TestMethod4)
		{
			ISprint0Task4* date = new Service();
			int a = 2;
			int b = 3;
			int c = 7;
			int d = 4;
			int i;
			i = date->Calculate(a, b, c, d);
			Assert::AreEqual(34, i);//chek

		}
	};
}