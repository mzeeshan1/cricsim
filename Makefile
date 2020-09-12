CXX=g++
CXXFLAGS= -Wall -g -I source/ -I headers/

cricsim: main.cpp source/Batsman.cpp source/Bowler.o source/Inns.o source/Player.o source/Team.o
	$(CXX) $(CXXFLAGS) -o cricsim main.cpp source/Player.cpp source/Batsman.cpp source/Bowler.cpp source/Team.cpp source/Inns.cpp
clean: 
	-rm -rf cricsim

