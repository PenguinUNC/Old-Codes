/*Написать перегруженные шаблоны функций и протестировать их:
- Нахождение максимального значения в одномерном массиве;
- Нахождение максимального значения в двумерном массиве;
- Нахождения максимального значения в трёхмерном массиве.
*/
#include <iostream>

template <typename T, int size0>
T max (T(& m)[size0])
{
    int s = m[0];
    for (int i = 0; i < size0; i++)
    {
        if (m[i] > s)
        {
            s = m[i];
        }
    }
    return s;
}

template <typename T, int size0, int size1>
T max (T(& m)[size0][size1])
{
    int s = m[0][0];
    for (int i0= 0; i0 < size0; i0++)
    {
        for (int i1= 0; i1 < size1; i1++)
        {
            if (m[i0][i1] > s)
            {
                s = m[i0][i1];
            }
        }
    }
    return s;
}

template <typename T, int size0, int size1, int size2>
T max (T(& m)[size0][size1][size2])
{
    int s = m[0][0][0];
    for (int i0= 0; i0 < size0; i0++)
    {
        for (int i1= 0; i1 < size1; i1++)
        {
            for (int i2= 0; i2 < size2; i2++)
            {
                if (m[i0][i1][i2] > s)
            {
                    s = m[i0][i1][i2];
                }
            }
        }
    }
    return s;
}
int main()
{
    int m1[10] {1, 2, 3, 4, 5};
    int m2[5][5]{4, 6, 88};
    int m3[3][4][5]{43, 23, 4};
    std::cout << max (m1);
    std::cout << "\n";
    std::cout << max (m2);
    std::cout << "\n";
    std::cout << max (m3);
    std::cout << "\n";
}
