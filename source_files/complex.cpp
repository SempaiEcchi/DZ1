#include <complex.h>
#include <iostream>

struct complex
{
    double re;
    double im;
};

struct complex zbroj(struct complex a, struct complex b)
{
    struct complex _complexNumber;
    _complexNumber.re = a.re + b.re;
    _complexNumber.im = a.im + b.im;
    return _complexNumber;
}

struct complex razlika(struct complex a, struct complex b)
{
    struct complex _complexNumber;
    _complexNumber.re = a.re - b.re;
    _complexNumber.im = a.im - b.im;
    return _complexNumber;
}

struct complex umnozak(struct complex a, struct complex b)
{
    struct complex _complexNumber;
    _complexNumber.re = (a.re * b.re) - (a.im * b.im);
    _complexNumber.im = (a.re * b.im) + (a.im * b.re);
    return _complexNumber;
}

struct complex kvocijent(struct complex a, struct complex b)
{
    struct complex _complexNumber;
    _complexNumber.re = ((a.re * b.re) + (a.im * b.im)) / ((b.re * b.re) + (b.im * b.im));
    _complexNumber.im = - ((a.re * b.im) + (b.re * a.im)) / ((b.re * b.re) + (b.im * b.im));
    return _complexNumber;


}

struct complex konjugacija(struct complex a)
{
    struct complex _complexNumber;
    _complexNumber.re = a.re;
    _complexNumber.im = -a.im;
    return _complexNumber;
}

struct complex upis()
{
    struct complex _complexNumber;
    printf("number = \n");
    scanf("%lf", &_complexNumber.re);
    scanf("%lf", &_complexNumber.im);
    return _complexNumber;
}

void ispis(struct complex a)
{
    printf("Dobiveni kompleksni broj je %lf + j%lf.\n", a.re, a.im);
}