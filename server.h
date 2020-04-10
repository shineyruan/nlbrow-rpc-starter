#ifndef SERVER_H
#define SERVER_H

#include "network.h"

// Receives a list from a client and appends the requested character to the
// end of each string in the list before sending it back.
void server_append(int sock);

void append(char c, std::list<std::string>&);

#endif
