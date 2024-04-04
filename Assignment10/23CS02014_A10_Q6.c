#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct Control
{
    int opcode;
    int status;
};
union Packet
{
    struct Control control;
    char data[100];
};

struct DataPacket
{
    _Bool isControl;
    union Packet packet;
};

void assignControlPacket(struct DataPacket *dp, int opcode, int status)
{
    dp->isControl = 1;
    dp->packet.control.opcode = opcode;
    dp->packet.control.status = status;
}

void assignDataPacket(struct DataPacket *dp, const char *data)
{
    dp->isControl = 0;
    strncpy(dp->packet.data, data, sizeof(dp->packet.data));
}

void printPacket(const struct DataPacket *dp)
{
    if (dp->isControl)
    {
        printf("Control Packet:\n");
        printf("Opcode: %d\n", dp->packet.control.opcode);
        printf("Status: %d\n", dp->packet.control.status);
    }
    else
    {
        printf("Data Packet:\n");
        printf("Data: %s\n", dp->packet.data);
    }
}

int main()
{
    struct DataPacket packets[2];

    assignControlPacket(&packets[0], 1, 200);
    assignDataPacket(&packets[1], "DATA in DATA PACKET");

    for (int i = 0; i < 2; i++)
    {
        printPacket(&packets[i]);
        printf("\n");
    }

    return 0;
}