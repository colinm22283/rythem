all:
	g++ -std=c++17 -I ./header -I ./scripts/header -o ./rythem ./source/*.cpp ./scripts/source/*.cpp -L"lib" -Wall -lSDL2main -lSDL2 -lSDL2_ttf -pthread
	./rythem
compile:
	g++ -std=c++17 -I ./header -I ./scripts/header -o ./rythem ./source/*.cpp ./scripts/source/*.cpp -L"lib" -Wall -lSDL2main -lSDL2 -lSDL2_ttf -pthread
run:
	./rythem
push:
	git add ./header ./source ./scripts/header ./scripts/source ./README.md Makefile
	git commit -a -m "First Commit"
	git push origin main
