#include <iostream>
#include <fstream>
#include "ModulesGlinianiy.h"
#include <ctime>
#include <cstring>
#include <string>
#include <wchar.h>
#include <fcntl.h>
#include <codecvt>
#include <clocale>
#include <windows.h>


using namespace std;

size_t ByteOfFile(const string path){
    ifstream file(path.c_str());
    size_t s = 0;

    while (!file.eof()) {
        file.get();
        s++;
    }

    file.close();
    s--;

    return s;
}

int main()
{
    setlocale(LC_ALL, "ukr");

    wcout << "Для перевiрки тексту на правильнiсть для початку створiть файл in.txt та внесiть в нього потрiбний текст.\
    \nIнфомацiя про об'єм файлу та дату й час дозапису буде записано в файл in.txt, iнформацiю про автора а також символи\
    \nверхнього регiстру та повiдомлення щодо достовiрності тексту буде дописано в файл out.txt.\
    \nДля корректої роботи ПЗ пiд час повторного введення iнформацiї в файл in.txt очистiть його!" << endl;

    float x, y, z;
    int b;
    int res, r;

    wcout << "\nВведiть x :";
    wcin >> x;

    wcout << "\nВведiть y :";
    wcin >> y;

    wcout << "\nВведiть z :";
    wcin >> z;


    res = s_calculation(x, y, z);

    wcout << "\n\nВведiть b :";
    wcin >> b;

    r = in10_to2(b);

    task_10_1();

    counter();


    ofstream fout;

    fout.open("out.txt",ios_base::app);

    fout << "\n\nРезультат виконання функцiї s_calcucation:" << res;

    fout << "\n\nx = " << x;
    fout << "\n\ny = " << y;
    fout << "\n\nz = " << z;


    fout << "\n\nЧисло b в двiйковiй системi числення: "<< r;

    fout << "\nСимволи верхнього регiстру: ";




    fout.close();

    wofstream exit;

    int a = 0;

    a = counter();

    exit.open("out.txt", ios_base::app);

    exit.imbue(locale(locale(), new codecvt_utf8_utf16<wchar_t>));

    exit << a;

    exit.close();

    setlocale(LC_ALL, "ukr");


    wofstream g;



    g.open("out.txt", ios_base::app);

    int v = 0;

    v = read();

    if(v == 1)
    {
        g << "\n\nВведений текст в файл in.txt вiдповiдає оригiналу!";
    }
    else
    {
        g << "\n\nВведений текст в файл in.txt не вiдповiдає оригiналу!";

    }

    g.close();

    size_and_data();

    wcout << "\n\aВсю iнформацiю дописано в файли in.txt та out.txt, дякую!";

    system ("pause");

}
