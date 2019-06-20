#include <iostream>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
using namespace std;

int main() {
	sf::RenderWindow window(sf::VideoMode(500, 500), "Random Shape");

	int circleDensity = 200;
	sf::CircleShape circleAr[circleDensity];

	int randX, randY;
	bool drawShape = false;

	for (int i = 0; i < circleDensity; i++) {
		circleAr[i].setRadius(1.0f);
	}

	while (window.isOpen()) {

		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			if (event.type == sf::Event::MouseButtonPressed) {
				drawShape = true;
			}
		}

		if (drawShape) {
			window.clear(sf::Color::Black);

			for (int i = 0; i < circleDensity; i++) {
				randX = (rand() % 500);
				randY = (rand() % 500);
				circleAr[i].setPosition((float)randX, (float)randY);
				window.draw(circleAr[i]);
			}

			window.display();
			drawShape = false;
		}


	}
}
