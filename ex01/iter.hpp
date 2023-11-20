#pragma once

#include<iostream>

template<typename T>
void iter(T* a, size_t l, void (*func)(const T&))
{
	for (size_t i = 0; i < l; i++)
		func(a[i]);
}