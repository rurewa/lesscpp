// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример множества точек в фоне
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <SFML/Graphics.hpp>
using namespace sf; // Пространство имён объектов библиотеки SFML

int main() {
    srand(time(NULL)); // Устанавливает в качестве базы рандома текущее время
    RenderWindow window(VideoMode(1500, 900), L"Titul", Style::Default);
    //Массив точек
    VertexArray mypoint(Points, 10000); // Кол-во точек
    for (int i = 0; i < 10000; ++i) { // Рандом
        mypoint[i].position = Vector2f(rand() % 1500, rand() % 900);
    }

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }
        window.clear(Color::Green);
        window.draw(mypoint); // Точка
        window.display();
    }
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//