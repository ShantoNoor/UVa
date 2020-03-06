#include <iostream>
using namespace std;

int main()
{
    int i, j, count, big;

    while(scanf ("%d %d", &i, &j) != EOF)
    { 
        cout << i << " " << j << " ";

        //swap
        if(i > j)
        {
            i = i+j;
            j = i-j;
            i = i-j;
        }
        
        big = 0;

        for(; i <= j; i++)
        {
            unsigned int n = i;
            count = 0;
            while(n != 1)
            {
                if(n%2)
                    n = 3*n+1;
                else
                    n = n/2;
                count++;
            }
            if(count > big)
                big  = count;
        }

        cout << ++big << endl;
    }

    return 0;
}