PrintingSquare. C++ Tutorials. Microsoft Visual Studio IDE. Strings. Console Application. Advanced Features. PDCurses Library. 
Advanced Features. PDCurses Library.
The program does the following:
  1. Loads the PDCurses library.
  2. Creates a standard terminal size window (80 columns, 25 rows).
  3. Clears the created window.
  4. The string variable is assigned the value "Hello World!!! Printing Square!!! Press Any Key To Exit!!!"
  5. The loop with the parameter is executed.
    5.1. The initial value of the loop parameter is assigned 0 (the numbering of string characters starts from 0).
    5.2. The final value of the loop parameter is assigned a value that is 1 less than the length of the string.
    5.3. The value of the loop parameter is compared with the end value of the loop.
         If it is greater, the loop terminates and continues otherwise.
    5.4. A series of cycles is performed.
         5.4.1. In row 10 and column 10 plus the current value of the loop parameter,
                the symbol under the number of the current value of the loop parameter is displayed.
                The "square" character is displayed after the string character.
         5.4.2. The program pauses for 500 milliseconds.
    5.5. The value of the loop parameter is increased by 1 (loop step).
  6. The string variable is printed in its entirety without the square character at position 10 in row and 10 in column.
  7. Waiting for a key to be pressed.
  8. Unloads the PDCurses library and exits.

PrintingSquare. Занятия по C++. ИС Microsoft Visual Studio. Консольное приложение. Расширенные возможности. Библиотека PDCurses. 
Программа делает следующее:
  1. Загружает библиотеку PDCurses.
  2. Создаёт окно стандартного размера терминала (80 столбцов, 25 строк).
  3. Очищает созданное окно.
  4. Строковой переменной присваивается значение "Hello World!!! Printing Square!!! Press Any Key To Exit!!!"
  5. Выполняется цикл с параметром.
     5.1. Начальному значению параметра цикла присвается 0 (нумерация символов строки начинается с 0).
     5.2. Конечному значению параметра цикла присваивается значение на 1 меньше длины строки.
     5.3. Значение параметра цикла сравнивается с конечным значением цикла.
          Если оно больше, цикл завершает работу и продолжает её в противном случае.
     5.4. Выполняется серия цикла.
          5.4.1. В строку 10 и столбец 10 плюс текущее значение параметра цикла выводится символ
          под номером текущего значения параметра цикла.
          За символом строки выводится символ "квадрат".
          5.4.2. Программа делает паузу на 500 милисекунд.
     5.5. Значение параметра цикла увеличивается на 1 (шаг цикла). 
  6. Строковая переменная печатается целиком без символа "квадрат" в позиции 10 строка и 10 столбец.
  7. Ждёт нажатия клавиши.
  8. Выгружает библиотеку PDCurses и завершает работу.
