#include <iostream> 
#include<list>
#include <iterator>
using namespace std;
list<int> spirallyTraverse(int m, int n, int ** a)
{
    list<int> result;
    int i, k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            result.push_back(a[k][i]);
        }
        k++;
        for (i = k; i < m; ++i)
        {
            result.push_back(a[i][n - 1]);
        }
        n--;
        if (k < m)
        {
            for (i = n - 1; i >= l; --i)
            {
                result.push_back(a[m - 1][i]);
            }
            m--;
        }
        if (l < n)
        {
            for (i = m - 1; i >= k; --i)
            {
                result.push_back(a[i][l]);
            }
            l++;
        }
    }
    return result;
}
