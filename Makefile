hello: hello.o
	ld -o hello hello.o

hello.o: hello.asm syscall.inc syscall_proto.inc
	fasm hello.asm

syscall_proto.inc: syscall.py
	./syscall.py > syscall_proto.inc
