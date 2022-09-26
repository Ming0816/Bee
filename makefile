objects = bee.o

main: $(objects)
	@gcc -pg -o main $(objects)

%.o:%.c
	@gcc -pg -c $<

.PHONY:clean
clean:
	@rm *.o
	@rm main
