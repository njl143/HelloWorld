CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		HelloWorld.o

LIBS =

TARGET =	HelloWorld.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS) -static-libgcc -static-libstdc++

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
