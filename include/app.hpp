#pragma once

#include <SFML/Graphics.hpp>
#include "CONSTANTS.hpp"


class App {
    public:
        App();
        ~App();

        void run();
        void handle_events();
        void render();
        void update();

    private:
         std::unique_ptr<sf::RenderWindow> _window;
		 bool _mouse_pressed;
		 int skip_counter;

};