#include<iostream>
#include<cstdlib>
#include<clocale>

using namespace std;

inline char a_mayuscula(const char c)
{
    return (c>='a'&&c<='z')?c-32:c;
}
