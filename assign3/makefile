TARGET=que3

$(TARGET).out:$(TARGET).o
	gcc $(TARGET).o -o $(TARGET).out

$(TARGET).o: $(TARGET).c
	gcc -c $(TARGET).c
run:
	./$(TARGET).out
clean:
	rm $(TARGET).o $(TARGET).out
