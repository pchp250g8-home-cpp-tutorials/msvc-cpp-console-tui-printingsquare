// PrintingSquare.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define PDC_DLL_BUILD
#include <iostream>
#include <chrono>
#include <string>
#include <thread>
#include <ctime>
#include <curses.h>
#include <tuicpp.hpp>


int main(int argc, char* argv[])
{
    initscr();
    curs_set(0);
    auto pc = tuicpp::Window::limits();
    std::string strLine = "Hello World!!! Printing Square!!! Press Any Key To Exit!!!";
    int nLen = strLine.length();
    tuicpp::PlainWindow mainWindow(pc.first, pc.second, 0, 0);
    mainWindow.clear();
    using namespace std::chrono_literals;
    for (int i = 0; i < nLen; i++)
    {
        mainWindow.mvprintf(10, 10 + i, "%c%c", strLine[i], 0xDB);
        mainWindow.refresh();
        std::this_thread::sleep_for(500ms);
    }
    mainWindow.mvprintf(10, 10, "%s ", strLine.c_str());
    mainWindow.getc();
    endwin();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
