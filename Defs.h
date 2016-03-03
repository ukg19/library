typedef enum
{
        Socket_Configured = 10,
        Socket_Not_Configured = 11,
        Socket_Opening = 12,
        Socket_Attempting  = 13,
        Socket_Connecting = 14,
        Socket_Connected = 15,
        Socket_Dropped = 16,
        Socket_Closing  = 17,
        Socket_Closed = 18
}SOCKET_STATES;

typedef enum
{
        Configured = 30,
        Not_Configured = 31,
        Attempting  = 32,
        Connecting = 33,
        Connected = 34,
        Connection_Dropped = 35,
        Connecttion_Closing  = 36,
        Connection_Closed = 37,
        Waiting_for_retry = 38
}MANAGER_STATES;

typedef struct message
{
        int length;
        int command;
        char *ptr;
        int buf_length;
}COMM_MESSAGE;
