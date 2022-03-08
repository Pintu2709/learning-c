#include <stdio.h>
double degF_to_degC(double degF)
{
    double degc;
    degc = (degF - 32.0) / 1.8;
    return degc;
}