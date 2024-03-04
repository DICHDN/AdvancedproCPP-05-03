#pragma once
#include <vector>
class divided_by_3 {
protected:
	std::vector<int> arr;
	int m_counter = 0;
	int summ = 0;
public:
	divided_by_3(const std::vector<int>& arra)
	{
		this->arr = arra;
	}
	void get_sum();
	void get_count();
	void operator()()
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
};