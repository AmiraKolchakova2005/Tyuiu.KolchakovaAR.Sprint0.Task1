// Tyuiu.KolchakovaAR.Sprint0.Task4.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.KolchakovaAR.Sprint0/Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Service :public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c, int d)
	{
		return (a * b) + (c * d);
	}


};
