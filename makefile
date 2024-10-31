run : bin/programa
	./bin/programa


bin/programa : src/main.cpp include/*.hpp 
	g++ src/main.cpp -I include -o bin/programa



runTest : bin/test
	./bin/test


bin/test : src/test.cpp include/*.hpp 
	g++ src/test.cpp -I include -o bin/test -std=c++2a -lftxui-component -lftxui-dom -lftxui-screen