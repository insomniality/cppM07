#pragma once
#include <iostream>

template <typename T>
class Array
{
	private:
		T*		a;
		size_t	len;
	public:
		size_t	size(void) const
		{
			return (len);
		}
		Array()
		{
			a = NULL;
			len = 0;
		}
		Array(unsigned int n)
		{
			len = n;
			this->a =  new T[len];
			for (size_t i = 0; i < len; i++)
				this->a[i] = T();
		}
		Array(const Array& obj)
		{
			a = NULL;
			*this = obj;
		}
		Array& operator=(const Array& obj)
		{
			if(this == &obj)
				return(*this);

			delete[] a;

			a = new T[obj.len];
			for (size_t i = 0; i < obj.len; i++)
				this->a[i] = obj.a[i];

			len = obj.len;

			return(*this);
		}
		~Array()
		{
			delete[] a;
		}

		T& operator[](size_t i)
		{
			if (i >= len)
				throw std::runtime_error("Out of bounds");
			return a[i];
		}

		const T& operator[](size_t i) const
		{
			if (i >= len)
				throw std::runtime_error("Out of bounds");
			return a[i];
		}
};
