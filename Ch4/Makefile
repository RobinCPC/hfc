# comment start with '#'marker
# following are example (no really source code)
#launch.o: launch.c launch.h thruster.h
#	gcc -c launch.c
#thruster.o: thruster.h thruster.c
#	gcc -c thruster.c
#launch: launch.o thruster.o
#	gcc launch.o thruster.o -o launch

# test makefile with previous example: message hider
encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c
message_hider.o: message_hider.c encrypt.h
	gcc -c message_hider.c
message_hider: message_hider.o encrypt.o
	gcc message_hider.o encrypt.o -o message_hider
