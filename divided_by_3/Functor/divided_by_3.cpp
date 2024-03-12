#include <iostream>
#include "divided_by_3.h"






	void divided_by_3:: get_sum()
	{
		std::cout << "The sum of the numbers divisible by 3 without remainder = " << summ << std::endl;
	};
	void divided_by_3:: get_count()
	{
		std::cout << "The number of numbers divisible by 3 without remainder = " << m_counter << std::endl;
	};

	void divided_by_3:: operator()()
	{
		int count = 0;
		int summ = 0;
		for (auto a : arr)
		{
			if (a % 3 == 0)
			{
				if (a == 0) continue;
				summ += a;
				++count;
			}
		}
		this->summ = summ;
		this->m_counter = count;
	}

	