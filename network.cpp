#include "network.h"


void sendList(int sock, std::list<std::string> &l) {
    // TODO: Send strings of each node.
    // Remember: send(socket_fd, thing_to_send, size_of_thing, 0)
}

std::list<std::string> recvList(int sock) {
    // TODO: recv and reconstruct the list
    // Remember: recv(socket_fd, pointer_to_thing, max_bytes_to_recv, 0 or MSG_WAITALL)
    return std::list<std::string>();
}
