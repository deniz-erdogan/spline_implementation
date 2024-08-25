#include "app.hpp"

/***
 * @brief Constructor
 */
 App::App() : _window(std::make_unique<sf::RenderWindow>(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Spline Visualization"))
 {
     _window->setActive(true);
     _window->setFramerateLimit(30);


 }

    /***
    * @brief Destructor
    */
    App::~App()
    {
        _window->close();
    }



	void App::render()
	{
		_window->clear();

	    // TODO: Render objects


		_window->display();
	}



	void App::run()
	{

		// TODO: add the while loop here

		handle_collision();
		render();
		handle_events();


	}



	void App::handle_events()
	{
		sf::Event event;
		while (_window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				_window->close();
			}

			if (event.type == sf::Event::KeyPressed)
			{

				if (event.key.code == sf::Keyboard::Escape)
				{
					_window->close();
				}
			}

		}
	}

