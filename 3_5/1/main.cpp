#include <iostream>
using namespace std;

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* Реализуйте этот конструктор */
	String(const char *str = ""){
		size_t & size = this->size = 0;
		char symbol = str[size];
		while(symbol != '\0'){
			size++;
			symbol = str[size];
		}
		this->str = new char[size + 1];
		for (size_t idx = 0; idx <= size; idx++)
			this->str[idx] = str[idx];
	}
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

	/* Реализуйте этот метод. */
	void append(String &other){
		size_t size_other = other.size;
		char *p_new_str = new char[size + size_other + 1];
		size_t idx = 0,
			   idx_new = 0;
		char symbol = str[idx];
		while(symbol != '\0'){
			p_new_str[idx_new] = symbol;
			idx++;
			idx_new++;
			symbol = str[idx];
		}
		idx = 0;
		symbol = other.str[idx];
		while(symbol != '\0'){
			p_new_str[idx_new] = symbol;
			idx++;
			idx_new++;
			symbol = other.str[idx];
		}
		p_new_str[idx_new] = '\0';
		delete [] str;
		str = p_new_str;
		size += other.size;
	}

	size_t size;
	char *str;
};


int main(){

    String str_1("Hello, ");
	String str_2("world!");
	str_1.append(str_2);
    cout << str_1.str << '\n';
	cout << str_1.size << '\n';
	cout << str_2.str << '\n';
    return 0;
}
