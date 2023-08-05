## Информация по SFML

### Официальный сайт библиотеки:

<https://www.sfml-dev.org/index.php>

### Установка:

```
epmi -y libSFML2.5 libSFML-devel libSFML2.5-debuginfo
```

### Пример простейшей программы:

```
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
```


### Сборка с помощью gcc:

```
g++ -c main.cpp
```


### Создание окончательного исполняемого файла:

```
g++ main.o -o main.bin -lsfml-graphics -lsfml-window -lsfml-system
```

### Примеры программ

**2D примитивы мультимедийной библиотеки SFML для разработки игр на C++**

<https://habr.com/ru/post/702128/>

**Русская информация по бибилиотеке:**

<https://kychka-pc.ru/>

<https://kychka-pc.ru/category/sfml/page/5>