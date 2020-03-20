#include <iostream>
#include "get_input.hpp"
#include "random.hpp"
#include "vec_controls.hpp"
#include <cstdlib>
#include <ctime>
#include <vector>

int main()
{
    std::srand(std::time(0));
    int components = 0;
    int min = 0;
    int max = 0;
    bool menu = true;
    std::vector<int> vec;

    while(menu == true)
    {
        std::cout<<"---------------------------------------"<<std::endl;
        std::cout<<"Меню:"<<std::endl;
        std::cout<<"0. Заполнить массив"<<std::endl;
        std::cout<<"1. Добавить элемент"<<std::endl;
        std::cout<<"2. Удалить элемент"<<std::endl;
        std::cout<<"3. Изменить элемент"<<std::endl;
        std::cout<<"4. Отсортировать список"<<std::endl;
        std::cout<<"5. Отобразить:"<<std::endl;
        std::cout<<"6. Выход"<<std::endl;
        std::cout<<"---------------------------------------"<<std::endl;

        switch(get_int())
        {
        case 0:
            std::cout<<"---------------------------------------"<<std::endl;
            std::cout<<"1. Случайными числами в промежутке"<<std::endl;
            std::cout<<"2. Заданием значений от пользователя "<<std::endl;
            std::cout<<"---------------------------------------"<<std::endl;
            switch(get_int())
            {
                case 1:
                    std::srand(std::time(0));
                    random_number(vec);
                    break;
                case 2:
                    enterFromUserCycle(vec);
                    break;
            }
            break;
        case 1:
            enterFromUser(vec);
            break;
        case 2:
            delete_item(vec);
            break;

        case 3:
            change_item(vec);
            break;

        case 4:
            std::cout<<"---------------------------------------"<<std::endl;
            std::cout<<"1. по возрастанию"<<std::endl;
            std::cout<<"2. по убыванию"<<std::endl;
            std::cout<<"---------------------------------------"<<std::endl;
            switch(get_int())
            {

                case 1:
                    sort_ascending(vec);
                    break;
                case 2:
                    sort_descending(vec);
                    break;
            }
            break;
        case 5:
            std::cout<<"---------------------------------------"<<std::endl;
            std::cout<<"1. Длину списка"<<std::endl;
            std::cout<<"2. Конкретный элемент"<<std::endl;
            std::cout<<"3. Весь список"<<std::endl;
            std::cout<<"---------------------------------------"<<std::endl;
            switch(get_int())
            {
                case 1:
                    vector_length(vec);
                    break;
                case 2:
                     itemFromUser(vec);
                     break;
                case 3:
                    for (auto const &element : vec){std::cout<< element<<' ';}
                    std::cout<<std::endl;
                    break;
            }
        case 6:
            menu = false;
            break;


        }
    }

    return 0;
}