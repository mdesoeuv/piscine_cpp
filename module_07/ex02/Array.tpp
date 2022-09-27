
template <class T>
Array<T>::Array(void) : _size(0)
{
	tab = NULL;
	std::cout << "Array default constructor called" << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n) : _size(n)
{
	tab = new T[n]();
	std::cout << "Array constructor called" << std::endl;
}

template <class T>
Array<T>::Array(const Array& source) : _size(source._size)
{
	tab = new T[source._size]();
	for (size_t i = 0; i < source._size; ++i)
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
	_size = rhs._size;
	tab = new T[rhs._size]();
	for (size_t i = 0; i < rhs._size; ++i)
	{
		tab[i] = rhs.tab[i];
	}

	return (*this);
}

template <class T>
T&	Array<T>::operator[](size_t index)
{
	if (index < 0 ||  index >= _size)
		throw IndexErrorException();
	return (this->tab[index]);
}

template <class T>
const T&	Array<T>::operator[](size_t index) const
{
	if (index < 0 ||  index >= _size)
		throw IndexErrorException();
	return (this->tab[index]);
}

template <class T>
size_t	Array<T>::size(void) const
{
	return (_size);
}

template <class T>
const char * Array<T>::IndexErrorException::what(void) const throw ()
{
	return ("Array::IndexErrorException");
}