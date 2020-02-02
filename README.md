# C++
![C++](https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/ISO_C%2B%2B_Logo.svg/306px-ISO_C%2B%2B_Logo.svg.png)
## C++ course

 
- ### Lessons 

|Lesson|Date|Discription|
|:---:|:---:|-----------|
|lesson 1| **06.10.19**|основы|
|lesson 2| **13.10.19**|cout,cin|
|lesson 3| **20.10.19**|types|
|lesson 4| **27.10.19**|first functions|
|lesson 5| **04.11.19**|more functions|
|lesson 6| **11.11.19**|more advanced functions|
|lesson 7| **18.11.19**|switch,if|
|lesson 8| **25.11.19**|def,size|
|lesson 9| **02.12.19**|логические елементы |
  
- ### Tests
  - test 1 **27.11.19**
  >*по началу запуски были неудачными.*
  >*не везде были поставлины точка с запятой.*
  >*надо быть более ***ВНИМАТЕЛЬНЫМ***.*
  - test 2 **29.12.19**
  >**ВНИМАНИЕ** програма имеет ограничение **4444** при вводе болшего числа програма выдает **ОШИБКУ**
  - test 3 **29.12.19**
  >работа с мвссивами
  >  - задать массивы
  >  - найти среднее арифметическое
  > - заменить числа масива
    
### Основной шаблон
```c++
#include <iostream>
//using namespace std;

int main()
{
    // cout << "hello,world!\n"
    std::cout <<"Hello,world!\n";
    return 0;
}
``` 
    
# Логические елементы
|елемент|код|
|:---:|:---:|
|and| **&&** |
|or | **\|\|** |
|not| **!=** |
# Terminal commands
| Command | Description |
|   :---:   |  --------   |
| cd ..  |  переход в директорию выше |
| cd (название)/| переходит в заданую директорию|
| mkdir| создание директории (**mkdir lesoon**) |
|touch|  создание файла (**touch test.cpp**) |
|ls|выводит список всех файлов|
|rm | удаление файла (**rm test.cpp**)|
|make| **make test**,компилирует файл|
|./  | **./test** запускает программу|

# Git config
| Command | Description|
|:---:|-------|
|git init| инициализирование гита |
|git config --global user.name "FIRST_NAME LAST_NAME"|Установите ваше имя пользователя|
|git config --global user.email "OUR_NAME@example.com"|Установите адрес электронной почты|
|git remote add origin https://github.com/Valerasan/cpp1901 | указывает путь для репозитория |

# Git commands
| Command | Description |
| --- | ----------- |
| git add | Команда **git add** добавляет содержимое рабочей директории в индекс для последующего коммита. |
| git status | Команда **git status** показывает состояния файлов в рабочей директории и индексе: какие файлы изменены, но не добавлены в индекс; какие ожидают коммита в индексе. Вдобавок к этому выводятся подсказки о том, как изменить состояние файлов.|
|  git commit   |    Команда **git commit** берёт все данные, добавленные в индекс с помощью **git add**, и сохраняет их слепок во внутренней базе данных, а затем сдвигает указатель текущей ветки на этот слепок.   |
|git reset | Команда **git reset**, как можно догадаться из названия, используется в основном для отмены изменений. |
|git rm|Команда **git rm** используется в Git для удаления файлов из индекса и рабочей директории.|
|git mv|Команда **git mv** — это всего лишь удобный способ переместить файл, а затем выполнить **git add** для нового файла и **git rm** для старого.|
|git push|Команда **git push** используется для установления связи с удалённым репозиторием, вычисления локальных изменений отсутствующих в нём, и собственно их передачи в вышеупомянутый репозиторий. Этой команде нужно право на запись в репозиторий, поэтому она использует аутентификацию.|


### Source link
 - Basic Syntax:
   <https://www.markdownguide.org/basic-syntax/>
 - Git commands:
   <https://proglib.io/p/git-cheatsheet>
