#include <iostream>
#include <ctime>
#include<string>

using namespace std;

void first()
{
    cout << "First:" << endl;
    char array[2][6];
    int k = 0;
    cout << "Array:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++)
        {
            array[i][j] = rand() % 127;
            if (array[i][j] == '+' || array[i][j] == '-' || array[i][j] == '*') k += 1;
            cout << array[i][j]<<" ";
        }
        cout << endl;
    }
    cout << endl << "+,-,* meet " << k << " times" << endl;
}
void second() {
    cout << "\nSecond:" << endl;
    char str[255] = "Directed by Robert B.Weide";
    cout << str<<endl;
    int i = strchr(str, ' ') - str - 1;
    while ((str[i] != '\0') && (i > 0))
    {
        if (str[i] == ' ')
        {
            int n = strlen(str);
            str[n + 2] = '\0';
            for (int k = n + 2 - 1; k > i; k--)
                str[k] = str[k - 1];
            for (int k = 0; k < 2; k++)
                str[i] = ',';
            i += 2;
        }
        i++;
    }
    cout << str;
}
void third()
{
    cout << "\n\nThird:" << endl;
    char array[5][100] = { "var = var - 1;" , "var = var + 1;" , "#inclide <iostream>" , "var++;" , "using namespace std;" };
    cout << "Original arrays: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    cout << "\nChanged arrays: \n\n";
    for (int k = 0; k < 5; k++)
    {
        char var1[100] = "";
        char var2[100] = "";
        char temp[100] = "";
        for (int i = 0; i < strlen(array[k]); i++)
        {
            if (array[k][i] == '=')
            {
                if (array[k][i + 1] == ' ' || array[k][i - 1] == ' ')
                {
                    for (int j = i + 2; array[k][j] != ' '; j++)
                    {
                        strncat_s(var2, &array[k][j], 1);
                    }

                    for (int j = i - 2; j >= 0; j--)
                    {
                        strncat_s(var1, &array[k][j], 1);
                    }

                    _strrev(var1);

                    if (strcmp(var1, var2) == 0)
                    {
                        if (array[k][i + strlen(var2) + 5] == '1')
                        {
                            if (array[k][i + strlen(var2) + 3] == '+')
                            {
                                strcat_s(temp, var1);
                                strcat_s(temp, "++;");
                                cout << array[k] << " => " << temp << endl;
                            }
                            else if (array[k][i + strlen(var2) + 3] == '-')
                            {
                                strcat_s(temp, var1);
                                strcat_s(temp, "--;");
                                cout << array[k] << " => " << temp << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    srand(time(0));
    first();
    second();
    third();
}
