#include "network.h"


void sendList(int sock, std::list<std::string> &l) {
    // TODO: Send strings of each node.
    // Remember: send(socket_fd, thing_to_send, size_of_thing, 0)
}

std::list<std::string> recvList(int sock) {
    // TODO: recv and reconstruct the list
    // Do this one character at a time.
    return std::list<std::string>();
}
