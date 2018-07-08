# build svm executable when user executes "make"

sedona:
	$(CC) -D__UNIX__=1 $(LDFLAGS) *.c -O2 -o svm

# remove object files and executable when user executes "make clean"
clean:
	rm svm
