// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// Простой пример линий
// V 1.0
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
#include <SFML/Graphics.hpp>
using namespace sf; // Пространство имён объектов библиотеки SFML

int main() {
    srand(time(NULL)); // Устанавливает в качестве базы рандома текущее время
    RenderWindow window(VideoMode(1500, 900), L"Titul", Style::Default);
    VertexArray myLinesStrip(LineStrip, 20);
    for (int i = 0, y = 0; i < 20; i += 2, y += 50) {
        myLinesStrip[i].position = Vector2f(600, 100 + y);
        myLinesStrip[i + 1].position = Vector2f(1200, 100 + y);
    }

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }
        window.clear(Color::Blue);
        window.draw(myLinesStrip); // Точка
        window.display();
    }
    return 0;
}
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//
// END FILE
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=//