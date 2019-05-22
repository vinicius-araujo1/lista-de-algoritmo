#include <iostream>

int myAtoi(const char *str)
{
    int len = (int) (strlen(str)-1);
    int num = 0;
    int dec = 1;

    for(;len >= 0; --len)
    {
       if(str[len] >= '0' && str[len] <= '9')
        {
            num += dec * (str[len] - '0');
            dec *= 10;
        }
        else if((len == 0) && (str[len] == '-' || str[len] == '+'))
            num = (str[0] == '-') ? -num : num;
        else
        {
            //numero invalido, entao 0
            return 0;
        }
    }

    return num;
}

int main(int argc, char **argv)
{
    using namespace std;

    int num = myAtoi("23");

    cout << num << endl;
    cout << myAtoi("-10") + myAtoi("5") << endl;

    return 0;
}
