# RPC Lab

This is a starter repo intended to have you focus on the more important parts of rpc calls.

Instead of the `Node` linked list on the prelab, this uses `std::list<std::string>` to make life a little easier. For this lab, one of these std::strings may contain embedded null characters. Your code is expected to work properly.

Start by looking at [network.h](./network.h). There you will see the list of things you have to do:
* Define your network protocol
* Implement sendList and recvList
* Finalize client and server stub functions (declared in [client_library.h](./client_library.h) and [server.h](./server.h), started in [client_library.cpp](./client_library.cpp) and [server.cpp](./server.cpp) files).
* Profit.

[server.cpp](./server.cpp) contains boilerplate code for setting up a listening socket and spawning threads to handle requests.

[client.cpp](./client.cpp) contains an example client that connects to the specified port and calls the client stub.

[client_library.cpp](./client_library.cpp) contains the client stub to implement and can be used by any client.

To compile either, you can run `make client`, `make server` or just `make` to make both.
