#include <stdio.h>
#include <stdlib.h>

double conversionfrancais(double euros)
{
    double francsfrancais = 0;

    francsfrancais = 6.55957 * euros;
    return francsfrancais;
}

double conversionbelge(double euro)
{
    double francsbelge = 0;

    francsbelge = 40.33 * euro;
    return francsbelge;
}

double changementEuroVersBelge(double francbelge)
{
    double eurobelge = 0;

    eurobelge = francbelge / 40.33;
    return eurobelge;
}

double changementEuroVersFrancais(double francfrancais)
{
    double eurofrancais = 0;

    eurofrancais = francfrancais / 6.55957;
    return eurofrancais;
}

int main(int argc, char *argv[])
{
    // Nous utiliserons %f car il s'agit d'un double
    printf("10 euros = %fFF\n", conversionfrancais(10));
    printf("20 euros = %fFF\n", conversionfrancais(20));
    printf("50 euros = %fFF\n\n", conversionfrancais(50));
    printf("10 euros = %fFB\n", conversionbelge(10));
    printf("20 euros = %fFB\n", conversionbelge(20));
    printf("50 euros = %fFB\n\n", conversionbelge(50));

    return 0;
}
