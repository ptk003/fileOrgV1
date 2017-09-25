CXX := g++ -Wall
ACTIVE := main.cpp
OUTPUT := out
SOURCES := AdvancedOutput.o TermInfo.o FSTools.o


main: $(ACTIVE) $(SOURCES)
	$(CXX) $(ACTIVE) $(SOURCES) -o $(OUTPUT)
AdvancedOutput: AdvancedOutput.cpp AdvancedOutput.h
	$(CXX) -c AdvancedOutput.cpp
FSTools: FSTools.cpp FSTools.h
	$(CXX) -c FSTools.cpp
TerminalInfo: TerminalInfo.cpp TerminalInfo.h
	$(CXX) -c TerminalInfo.cpp
clean:
	rm $(OUTPUT) *.o
