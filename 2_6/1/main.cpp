#include <iostream>
using namespace std;


char *update_line_size(char *p_line, unsigned &size_link)
{
    unsigned cur_size = size_link;
    size_link *= 2;
    char *p_new_line = new char[size_link];
    for (unsigned i = 0; i < cur_size; i++)
        p_new_line[i] = p_line[i];
    delete [] p_line;
    return p_new_line;
}

void update_line(char *p_line, char sym, unsigned idx)
{
    p_line[idx] = sym;
}

char *getline()
{
    unsigned size = 10;
    unsigned symbol_counter = 0;
    char symbol;
    char *line = new char[size];
    
    while (cin.get(symbol) && symbol != '\n' && symbol != cin.eof())
    {
        if (symbol_counter == (size - 1))
            line = update_line_size(line, size);
        symbol_counter++;
        update_line(line, symbol, symbol_counter - 1);
    }
    update_line(line, '\0', symbol_counter);
    return line;
}


int main(){

    char *str = getline();
    cout << str << '\n';
    
    return 0;
}
