
template <class T>
Array<T>::Array(void) : size(0)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n) : size(n)
{
	tab = new T[n]();
	std::cout << "Array constructor called" << std::endl;
}

template <class T>
Array<T>::Array(const Array& source) : size(source.size)
{
	tab = new T[source.size]();
	for (size_t i = 0; i < source.size; ++i)
	{
		tab[i] = source.tab[i];
	}
	std::cout << "Array copy constructor called" << std::endl;
}

template <class T>
Array<T>::~Array(void)
{
	delete[] tab;
	std::cout << "Array destructor called" << std::endl;
}

template <class T>
Array<T>	&Array<T>::operator=(const Array& rhs)
{
	delete[] tab;
	size = rhs.size;
	tab = new T[rhs.size]();
	for (size_t i = 0; i < rhs.size; ++i)
	{
		tab[i] = rhs.tab[i];
	}

	return (*this);
}

template <class T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index < 0 ||  index >= size)
		throw std::exception();
	return (this->tab[index]);
}
