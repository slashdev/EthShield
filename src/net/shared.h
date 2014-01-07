/**
 * @file shared.h
 * @brief Shared resources, like pointers and values of ethernet related
 * material within packets.
 *
 * \copyright Copyright 2013 /Dev. All rights reserved.
 * \license This project is released under MIT license.
 *
 * @author Ferdi van der Werf
 * @since 1.0
 */

#ifndef NET_SHARED_H
#define NET_SHARED_H

#include "../config.h"

// Do we need shared?
#ifdef NET_NETWORK

// Checksum
// --------------------
#define CHK_IP   0
#define CHK_ICMP 0
#define CHK_UDP  1
#define CHK_TCP  2


// ETH
// --------------------
#define ETH_LEN_HEADER 14

// See The Ethernet, p. 26, chap. 6.2
// See for ethernet frame http://en.wikipedia.org/wiki/Ethernet_frame
#define ETH_PTR_MAC_DST    0x00
#define ETH_PTR_MAC_SRC    0x06
#define ETH_PTR_TYPE_H     0x0C
#define ETH_PTR_TYPE_L     0x0D

// See for EtherTypes http://en.wikipedia.org/wiki/Ethertype
#define ETH_VAL_TYPE_ARP_H 0x08
#define ETH_VAL_TYPE_ARP_L 0x06
#define ETH_VAL_TYPE_IP_H  0x08
#define ETH_VAL_TYPE_IP_L  0x00


// ARP
// --------------------
#define ARP_LEN 42

#define ARP_PTR_HARDWARE_H 0x0E
#define ARP_PTR_HARDWARE_L 0x0F
#define ARP_PTR_PROTOCOL_H 0x10
#define ARP_PTR_PROTOCOL_L 0x11
#define ARP_PTR_SIZE_HW    0x12
#define ARP_PTR_SIZE_PROTO 0x13
#define ARP_PTR_OPER_H     0x14
#define ARP_PTR_OPER_L     0x15
#define ARP_PTR_SEND_HW    0x16
#define ARP_PTR_SEND_PROTO 0x1C
#define ARP_PTR_TARG_HW    0x20
#define ARP_PTR_TARG_PROTO 0x26

#define ARP_VAL_HW_ETHERNET 1

// Protocol type uses same values as ETH_VAL_TYPE_*

#define ARP_VAL_OPER_REQUEST 1
#define ARP_VAL_OPER_REPLY   2


// IP
// --------------------
#define IP_LEN_HEADER 20

#define IP_PTR             0x0E
#define IP_PTR_HEADER_LEN  0x0E
#define IP_PTR_TOS         0x0F
#define IP_PTR_LENGTH_H    0x10
#define IP_PTR_LENGTH_L    0x11
#define IP_PTR_ID_H        0x12
#define IP_PTR_ID_L        0x13
#define IP_PTR_FLAGS       0x14
#define IP_PTR_FRAGMENT_L  0x15
#define IP_PTR_TTL         0x16
#define IP_PTR_PROTOCOL    0x17
#define IP_PTR_CHECKSUM_H  0x18
#define IP_PTR_CHECKSUM_L  0x19
#define IP_PTR_SRC         0x1A
#define IP_PTR_DST         0x1E

// Protocol values
// See RFC 1700, p. 8
#define IP_VAL_PROTO_ICMP  0x01
#define IP_VAL_PROTO_TCP   0x06
#define IP_VAL_PROTO_UDP   0x11


// ICMP
// --------------------
#define ICMP_LEN_HEADER 8

#define ICMP_PTR_TYPE      0x22
#define ICMP_PTR_CODE      0x23
#define ICMP_PTR_CHECKSUM_H 0x24
#define ICMP_PTR_CHECKSUM_L 0x25
#define ICMP_PTR_IDENT_H   0x26
#define ICMP_PTR_IDENT_L   0x27
#define ICMP_PTR_SEQ_H     0x28
#define ICMP_PTR_SEQ_L     0x29
#define ICMP_PTR_DATA      0x2A

#define ICMP_VAL_TYPE_ECHOREPLY   0x00
#define ICMP_VAL_TYPE_ECHOREQUEST 0x08


// UDP
// --------------------
#define UDP_LEN_HEADER 8

#define UDP_PTR_PORT_SRC_H 0x22
#define UDP_PTR_PORT_SRC_L 0x23
#define UDP_PTR_PORT_DST_H 0x24
#define UDP_PTR_PORT_DST_L 0x25
#define UDP_PTR_LENGTH_H   0x26
#define UDP_PTR_LENGTH_L   0x27
#define UDP_PTR_CHECKSUM_H 0x28
#define UDP_PTR_CHECKSUM_L 0x29
#define UDP_PTR_DATA       0x2A

#endif // NET_NETWORK
#endif // NET_SHARED_H
