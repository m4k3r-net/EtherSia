
#include "EtherSia.h"


void EtherSia::udp_process_packet(uint16_t len)
{
    uint16_t dest_port = ntohs(UDP_HEADER->dest_port);

    // FIXME: verify the checksum

    if (!is_our_address(IP6_HEADER->dest)) {
        return;
    }

    if (this->udp_callback && dest_port == this->udp_port) {
        this->udp_callback(
            dest_port,
            IP6_HEADER->src,
            (char*)(this->buffer + UDP_HEADER_OFFSET + UDP_HEADER_LEN),
            ntohs(UDP_HEADER->length) - UDP_HEADER_LEN
        );
    }
}

void EtherSia::udp_listen(UdpServerCallback callback, uint16_t port)
{
    // FIXME: allow listening on multiple ports?
    this->udp_callback = callback;
    this->udp_port = port;
}