main: main.cpp Animal.cpp Herbivore.cpp Carnivore.cpp Zoo.cpp
	g++ main.cpp Animal.cpp Herbivore.cpp Carnivore.cpp Zoo.cpp -Wall -o run
	./run

animal: testAnimal.cpp Animal.cpp
	g++ testAnimal.cpp Animal.cpp -Wall -o run
	./run

herbivore: testHerbivore.cpp Herbivore.cpp Animal.cpp
	g++ testHerbivore.cpp Herbivore.cpp Animal.cpp -Wall -o run
	./run

carnivore: testCarnivore.cpp Carnivore.cpp Animal.cpp
	g++ testCarnivore.cpp Carnivore.cpp Animal.cpp -Wall -o run
	./run

zoo: testZoo.cpp Zoo.cpp Animal.cpp
	g++ testZoo.cpp Zoo.cpp Animal.cpp -Wall -o run
	./run