#include <iostream>
#include <ctime>
#include<string>

using namespace std;

void first()
{
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
    cout << endl;
    char array1[] = "#include <iostream>";
    char array2[] = "int k = 0;";
    char array3[] = "k = k + 1;" ;
    char array4[] = "k = k - 1;";
    char array5[] = "cout >> k;";
    for (int i = 0; i < strlen(array1); i++) {
        if (array1[i]==' ' && array1[i+2] == '1')

    }
    


}
int main()
{
    srand(time(0));
    first();
    second();
    third();

}
