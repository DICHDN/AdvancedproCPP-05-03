
#include<algorithm>
#include <iostream>
#include "divided_by_3.h"
#include <Windows.h>

	int main()
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		divided_by_3 Uarray({1,2,3,4,5,6,9,12,0});
		Uarray();
		Uarray.get_sum();
		Uarray.get_count();
		return 0;
	}
		
