#ifndef NETWORK_H
#define NETWORK_H

#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#include <iostream>
#include <list>
#include <string>

/*
 * Need to do four things:
 * 1) Need to definine a network protocol: How to represent a std::list<std::string> in send() and recv() calls.
 *    For fun, allow the std::strings to contain null characters (i.e. they were constructed from a std::string(char_ptr, size) call)
 * 2) Use this to write sendList and recvList.
 * 3) Finish the client and server stub functions that use sendList and recvList
 * 4) Profit.
 */

// Sends any information necessary to reconstruct the list.
void sendList(int sock, std::list<std::string> &l);

// Receives information describing a list and returns a reconstructed list.
std::list<std::string> recvList(int sock);

#endif
