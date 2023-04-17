#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int KolvoSlov(string str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i + 1] == ' ' || str[i + 1] == '\0') {
            count++;
        }
    }
    return count;
}

int main()
{
    setlocale(LC_ALL, "ru");
    ifstream fin;
    fin.open("F1.txt");
    ofstream fout;
    fout.open("F2.txt");
    string buff;
    string sogl = "BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz";
    int MAXnumber;
    int number = 0;
    int MAXcountbykv = 0;
    while (getline(fin, buff))
    {
        if (KolvoSlov(buff) == 1)
        {
            number++;
            fout << buff;
            fout << " ";
            int countbykv = 0;
            for (int i = 0; i < buff.size(); i++)
            {
                for (int j = 0; j < sogl.size(); j++)
                {
                    if (buff[i] == sogl[j])
                    {
                        countbykv++;
                    }
                }
            }
            if (countbykv > MAXcountbykv)
            {
                MAXcountbykv = countbykv;
                MAXnumber = number;
            }

        }
    }
    cout << MAXnumber;
    fin.close();
    fout.close();
}