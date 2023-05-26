#pragma once
#include <stdexcept>

class smart_array
{
private:
	int* data_;
	int size_;
	int count_;
public:
	smart_array(const int size);
	void add_element(const int num);
	int get_element(const int index);
	smart_array& operator=(const smart_array& r_arr);
	~smart_array();
};
