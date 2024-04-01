src = $(wildcard *.c)
obj = $(src:.c=.o)

CFLAGS = --std=c11 -g

main: $(obj)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	del -f $(obj) main.exe
