#include <algorithm> // std::swap
#include <cstddef>   // size_t
#include <cstring>   // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	String(const String &other);
	~String();

    /* Реализуйте оператор присваивания */
	String &operator=(const String &other)
    {
        if (this != &other)
        {
            String tmp = other;
            tmp.swap(*this);
        }
        return *this;
    }

    void swap(String & other)
    {
        std::swap(size, other.size);
        std::swap(str, other.str);
    }

	void append(const String &other);

	size_t size;
	char *str;
};