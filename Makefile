CC=gcc
AR=ar -rcs
OBJECTS_MAIN=main.o
OBJECTS_REC=basicClassofoction.o advancedClassificationRecursion.o
OBJECTS_LOOP=basicClassofoction.o advancedClassificationLoop.o
FLAGS= -Wall -g

all: libclassloops.a libclassloops.so libclassrec.a libclassrec.so mains maindloop maindrec

libclassloops.a: $(OBJECTS_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOP)

libclassrec.a: $(OBJECTS_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_REC)

libclassrec.so: $(OBJECTS_REC)
	$(CC) -shared -o libclassrec.so $(OBJECTS_REC)

libclassloops.so: $(OBJECTS_LOOP)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOP)

mains: $(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm

maindloop: $(OBJECTS_MAIN) libclassloopd.so
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassloops.a -lm

maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a -lm

main.o: main.c NumClass.h
	    $(CC) $(FLAGS) -c main.c

basicClassification.o: basicClassification.c NumClass.h
		$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -lm

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec