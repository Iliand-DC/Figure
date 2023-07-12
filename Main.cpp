#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

void getInfo(Figure* figure){
    std::cout << "Площадь фигуры равна: " << figure->getSquare() << std::endl;
    std::cout << "Периметр фигуры равен: " << figure->getPerimeter() << std::endl;
}

void menu(){
    std::cout << "1. Создать круг и найти длину его окружности и его площадь." << std::endl;
    std::cout << "2. Создать прямоугольник и найти длину его окружности и его площадь." << std::endl;
    std::cout << "3. Выход." << std::endl;
    std::cout << "Выберите действие: ";
}

void SayHello(){
    std::cout << "Приветствую, пожалуйста, введите число из соответствующего списка меню: " << std::endl;
}

int main(){
    int choise;
    Figure* figure;
    SayHello();
    do{
        menu();
        std::cin >> choise;
        switch(choise){
            case 1:
                std::cout << "Введите радиус окружности: ";
                double radius;
                std::cin >> radius;
                figure = new Circle(radius);
                getInfo(figure);
                break;
            case 2:
                std::cout << "Введите длину и ширину прямоугольника: ";
                double height;
                double weight;
                std::cin >> height >> weight;
                figure = new Rectangle(weight, height);
                getInfo(figure);
                break;
            case 3:
                std::cout << "Спасибо, всего доброго." << std::endl;
                break;
            default:
                std::cout << "Попробуйте снова." << std::endl;
        }
    } while (choise != 3);
}
