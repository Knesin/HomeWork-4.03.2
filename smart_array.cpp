#include "smart_array.h"

smart_array::smart_array(const int size) {
	if (size > 0) {
		data_ = new int[size];
		size_ = size;
		count_ = 0;
	}
	else
		throw std::exception("Количество элементов меньше 1");
}
void smart_array::add_element(const int num) {
	if (count_ < size_) {
		data_[count_] = num;
		++count_;
	}
	else
		throw std::exception("При добавлении превышено количество элементов массива");
}
int smart_array::get_element(const int index) {
	if (index >= 0 && index < count_) {
		return data_[index];
	}
	else
		throw std::exception("Индекс вне диапозона элементов массива");
}

smart_array& smart_array::operator=(const smart_array& r_arr) {
	delete[] data_;
	size_ = r_arr.size_;
	count_ = r_arr.count_;
	data_ = new int[size_];
	for (int i = 0; i < count_; ++i) {
		data_[i] = r_arr.data_[i];
	}
	return *this;
}

smart_array::~smart_array() {
	delete[] data_;
}