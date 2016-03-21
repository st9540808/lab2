main: QuestionA.o main.o
	g++ -o QuestionA main.o QuestionA.o

QuestionA.o: QuestionA.cpp QuestionA.h
	g++ -c QuestionA.cpp

main.o: main.cpp QuestionA.h
	g++ -c main.cpp

clean:
	rm QuestionA *.o
