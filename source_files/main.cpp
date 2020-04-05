#include <iostream>
#include "complex.cpp"

void ispis(struct complex a);



int main()
{
    struct complex num1, num2, sum, div;

    num1 = upis();
    num2 = upis();

    sum = zbroj(num1, num2);
    div = kvocijent(num1,num2);
    ispis(sum);
    ispis(div);
    return 0;
 }