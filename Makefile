all: local
	$(CXX) -oHelloWorld.exe *.o -L/c/boost_1_49_0/stage/lib -lboost_regex-mgw47-mt-1_49 -static-libgcc -static-libstdc++ 

local: *.cpp
	$(CXX) -c $^ -I/c/boost_1_49_0

clean:
	rm -f *.o HelloWorld.exe
