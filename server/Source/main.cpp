#include <iostream>
#include <string>
#include "share/application.h"
#include "share/game.h"


int main(int argc, char **argv)
{
	std::string tmp;

	if(argc < 2) {
		std::cout << "Please input port number: ";
		std::getline(std::cin, tmp);
		std::cout << std::endl;
	} else {
		tmp = argv[1];
	}

	enum const_for_port {
		VALID = 0,
		PERMITTED = 1024 
	};

	int port{0};
    
	if(tmp.size() < 4)  //for permitted, not entered and not valid port string
	{
		std::cerr << "Port not entered! Please try again.\n";
		return 1;
	}
	else if((port = std::stoi(tmp)) < PERMITTED)
	{
		std::cerr << "Permitted port entered!"
					" Use a value greater then " << PERMITTED << ".\n";
		return 2;
	}

	EventSelector *Selector = new EventSelector;
	Game *Server = Game::GameStart(Selector, port);
	if(!Server)
		return 1;

	Selector->Run();
	std::cout << "Game over:)\n";
	return 0;     
}
