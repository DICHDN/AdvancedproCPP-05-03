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
	void operator()();
};