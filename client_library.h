#ifndef CLIENT_LIBRARY_H
#define CLIENT_LIBRARY_H

#include <stdexcept>

#include "network.h"

void printList(std::list<std::string> &l);

// RPC which returns a list with char c appended to each string in the
// input list.
std::list<std::string> client_append(int port, std::list<std::string> &l, char c);

#endif
