

#include <iostream>
#include <stack>


class Stack
{
public:
    int last_index;
    int size;
    int* array;

    Stack(int new_size)
    {
        size = new_size;
        array = new int[size];
        last_index = 0;
    }
    ~Stack()
    {
        delete[] array;
    }
    void Show()
    {
        std::cout << last_index;
    }
    void push(int new_elem)
    {
        if (last_index < size)
        {
            array[last_index] = new_elem;
            last_index = last_index + 1;
            Show();
        }
    }
    int pop()
    {
        if (last_index > 0)
        {
            last_index = last_index - 1;
            return array[last_index];
            Show();
        }
    }

};


int main()
{
    Stack s(4);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();

};

//К сожалению мне не хватает знаний чтобы выполнить это задание по всем требованиям.
//Я ознакомился с материалами  о том, что из себя должен представлять циклический буфер.
//В моем понимании это что - то вроде структуры данных Стек, которая работает по принципу "последний вошел, первый вышел".
//Я скорее всего ошибаюсь и представленный мной код лишь попытка показать, хоть какие - то навыки, по работе с памятью,
//по этому могу представить только один класс вашему вниманию и сравнивать конечно не с чем.

