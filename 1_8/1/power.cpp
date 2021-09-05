#include "power.h"
int power(int x, unsigned p) {
    int answer;
    /* считаем answer */
    answer = 1;
    for (int i = 1; i <= p; i++)
        answer = answer * x;
    return answer;
}
