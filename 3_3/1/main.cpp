#include <iostream>
using namespace std;

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
	String(const char *str = ""){
		size_t & size = this->size = 0;
		char symbol = str[size + 1];
		while(symbol != '\0'){
			size++;
			symbol = str[size];
		}
		this->str = new char[size];
		for (size_t idx = 0; idx <= size; idx++)
			this->str[idx] = str[idx];
	}

	size_t size;
	char *str;
};


int main(){

	char str[] = "Hello";
    String str_obj(str);
    cout << str_obj.size << '\n';
	cout << str_obj.str << '\n';
    return 0;
}
