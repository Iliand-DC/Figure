TARGET = execute
SRCS = Main.cpp Circle.cpp Rectangle.cpp
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)
	rm -rf $(OBJS)