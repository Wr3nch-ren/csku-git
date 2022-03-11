run: clean main
	./main.out

main: Person.o Student.o Teacher.o main.o
	g++ Person.o Student.o Teacher.o main.o -o main.out

Teacher.o:
	g++ -c Teacher.cpp -o Teacher.o

Student.o:
	g++ -c Student.cpp -o Student.o

Person.o:
	g++ -c Person.cpp -o Person.o

main.o:
	g++ -c main.cpp -o main.o

clean:
	rm -f *.o main.out
