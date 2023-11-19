#pragma once

template <class T, typename A>
class Array
{
	public:
		T* a;
		A size(void) const
		{
			return ();
		}
	private:
		Array()
		{
			// this->a =  new T[]; // proof that i've got yet lot to learn
			// this->a =  new T;
			// this->a =  new *T;
			/* conclussion: ban el petk chi stegh grem, vortev obj initialize-acneluc
			default constructora kanchvum u member atributnern el en steghtsvum, rigth? */
			///TODO: CPP-ner@ prtsneluc miat xor@ usumnasiri (PXRT vids)
		}
		Array(unsigned int n)
		{
			this->a =  new T[n];
		}
		Array(const Array& obj)
		{
			this->a = obj.a;
		}
		Array& operator=(const Array& obj)
		{
			if(this == &obj)
				return(*this);
			this->a = obj.a;
			return(*this);
		}
		~Array();
};

// xi einq esi durs@ anum?
Array& operator[](const Array& obj)
{
	try
	{
		// obj.a ????
		throw();
	}
	catch(...) // std::exception
	{
		
	}
}