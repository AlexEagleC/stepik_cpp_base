#include <iostream>
using namespace std;

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
	String(size_t n, char c)
		: size(n)
		, str(new char[n+1])
	{
		for (size_t idx = 0; idx < size; idx++)
			this->str[idx] = c;
		this->str[size] = '\0';
	}

	~String(){
		delete [] this->str;
	}

	size_t size;
	char *str;
};


int main(){

    String str_obj(5, 'a');
    cout << str_obj.size << '\n';
	cout << str_obj.str << '\n';
    return 0;
}
