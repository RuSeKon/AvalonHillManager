CXX = g++
CXXFLAGS = -Wall -g
OBJMODULES = Game.o Player.o EventSelector.o \
			 Errproc.o Request.o

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

server : main.cpp $(OBJMODULES)
	$(CXX) $(CXXFLAGS) $^ -o $@

ifneq (clean, $(MAKECMDGOALS))
-include deps.mk
endif

deps.mk: $(OBJMODULES:.o=.cpp)
	$(CXX) -MM $^ > $@

clean :
	rm -f *.o server deps.mk

run_tst :
	./Server 4878
