#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    int widthWindow = 200;
    int heightWindow = 200;

    RenderWindow window(VideoMode(widthWindow, heightWindow), "For graphics");
    RectangleShape Yline(Vector2f(heightWindow, 1.f));
    Yline.setFillColor(Color::Green);
    Yline.setPosition(widthWindow / 2, heightWindow);
    Yline.rotate(-90.f);

    RectangleShape Xline(Vector2f(widthWindow, 1.f));
    Xline.setFillColor(Color::Red);
    Xline.setPosition(0, heightWindow / 2);

    RectangleShape line(Vector2f(1000, 3.f));
    line.setFillColor(Color::Blue);

    CircleShape point(5.f);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(Yline);
        window.draw(Xline);
        window.draw(&point, 1, Points);
        window.display();
    }

    return 0;
}