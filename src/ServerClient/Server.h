
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

#define PORT 7070
using namespace std;
void error(const char *msg)
{
    perror(msg);
    exit(1);
}
class Server
{
    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt;
    int addrlen;
    char buffer[1024];
    char *hello;
    string message{"Hello from server"};
    int MaxQueSize = 3;


public:
    Server()
    {
        int opt = 1;
        addrlen = sizeof(address);
        buffer[1024] = {0};
        hello = "Hello from server";
    }
    void setMsg(const char *str) { message = str; }
    void init()
    {
        //Creating socket file descriptor
        if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
        {
            perror("socket failed");
            exit(EXIT_FAILURE);
        }
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = INADDR_ANY;
        address.sin_port = htons(PORT);

        //attach socket to port 7070
        if (bind(server_fd, (struct sockaddr *)&address,
                 sizeof(address) < 0))
        {
            perror("bind failed");
            exit(EXIT_FAILURE);
        }

        //set the max queue size
        // This listen() call tells the socket to listen to the incoming connections.
        // The listen() function places all incoming connection into a backlog queue
        // until accept() call accepts the connection.
        // Here, we set the maximum size for the backlog queue to 5.
        //listen(sockfd,5);
        if (listen(server_fd, MaxQueSize) < 0)
        {
            perror("listen issue");
            exit(EXIT_FAILURE);
        }
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address,
                                 (socklen_t *)&addrlen)) < 0)
        {
            perror("accept");
            exit(EXIT_FAILURE);
        }
        valread = read(new_socket, buffer, 1024);
        printf("%s\n", buffer);
        send(new_socket, hello, sizeof(hello), 0);
        printf("Hello message sent\n");
    }
};