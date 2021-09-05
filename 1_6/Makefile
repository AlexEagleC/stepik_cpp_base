CXX=g++
CXXFLAGS=-Wall
CLEAN=rm -f
TARGET=hello_world
OBJECT_FILES=*.o
SOURCE_FILES=hello_world.cpp
$(TARGET): $(OBJECT_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^
$(OBJECT_FILES): $(SOURCE_FILES)
	$(CXX) $(CXXFLAGS) -c $^
clean:
	$(CLEAN) *.o $(TARGET)
