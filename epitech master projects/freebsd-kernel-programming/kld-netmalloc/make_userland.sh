gcc -g -lpthread -I. host.c elem.c server.c main.c socket.c die.c buffer.c user/userlib.c -std=c99 -DMASTER -o master && gcc -g -I. host.c elem.c server.c main.c socket.c die.c buffer.c user/userlib.c -std=c99 -DSLAVE -o slave 