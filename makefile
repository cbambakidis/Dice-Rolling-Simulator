SRC_FILES := $(wildcard *.cpp)
OBJ_FILES := $(patsubstt %.cpp,%.o,$(SRC_FILES))
HEADER_FILES := $(wildcard *.h)
LDFLAGs := -g -ggdb
CPPFLAGS := -g -ggdb

project1.exe: $(OBJ_FILES)
	g++ $(LDFLAGS) -o $@ $*

%o: %.cpp $(HEADER_FILES)
	g++ $(CPPFLAGS) -c -o $@ $<