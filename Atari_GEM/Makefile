# Makefile for ToDoList - Atari ST version
# Version: 0.1
#Written by: Johan Tibbelin (johan@dataochljud.se)

CXX = m68k-atari-mint-g++ # gcc for atari-mint
CXXFLAGS =  -Wall -pedantic -O2 -std=c++17 -D_DEBUG_ -D__ATARI_ST__ 
src = $(wildcard *.cpp)
obj = $(src:.cpp=.o)

LDFLAGS = -lgem  

TODOLIST.ACC: $(obj)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) olcST.prg
