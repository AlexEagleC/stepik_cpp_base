#include <iostream>
using namespace std;


struct Expression
{
    virtual double evaluate() const = 0;
    virtual ~Expression() { }
};

struct Number : Expression
{
    Number(double value)
        : value(value)
    {}
    ~Number() { }

    double evaluate() const
    {
        return value;
    }

private:
    double value;
};

struct BinaryOperation : Expression
{
    /*
      Здесь op это один из 4 символов: '+', '-', '*' или '/', соответствующих операциям,
      которые вам нужно реализовать.
     */
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), op(op), right(right)
    { }

    ~BinaryOperation() {
        delete left;
        delete right;
     }

    double evaluate() const
    {
        switch (op)
        {
        case '+':
            return (left->evaluate() + right->evaluate());
            break;
        case '-':
            return (left->evaluate() - right->evaluate());
            break;
        case '*':
            return (left->evaluate() * right->evaluate());
            break;
        case '/':
            return (left->evaluate() / right->evaluate());
            break;
        default:
            break;
        }
        return 0.0;
    }

private:
    Expression const * left;
    Expression const * right;
    char op;
};

bool check_equals(Expression const *left, Expression const *right)
{
    // put your code here
    if (*(int *)left == *(int *)right)
        return true;
    return false; 
}

int main()
{
    Expression * first = new BinaryOperation(new Number(4.5), '*', new Number(5));
    Expression * second = new Number(4.5);

    std::cout << check_equals(first, first) << std::endl;
    std::cout << check_equals(first, second) << std::endl;
    std::cout << check_equals(second, second) << std::endl;
    delete first;
    delete second;
}