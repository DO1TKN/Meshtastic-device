/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.1 */

#include "mesh.pb.h"
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

PB_BIND(Position, Position, AUTO)


PB_BIND(Data, Data, AUTO)


PB_BIND(User, User, AUTO)


PB_BIND(WantNodeNum, WantNodeNum, AUTO)


PB_BIND(DenyNodeNum, DenyNodeNum, AUTO)


PB_BIND(SubPacket, SubPacket, AUTO)


PB_BIND(MeshPacket, MeshPacket, AUTO)


PB_BIND(RadioConfig, RadioConfig, 2)


PB_BIND(NodeInfo, NodeInfo, AUTO)


PB_BIND(MyNodeInfo, MyNodeInfo, AUTO)


PB_BIND(DeviceState, DeviceState, 4)


PB_BIND(FromRadio, FromRadio, AUTO)


PB_BIND(ToRadio, ToRadio, AUTO)






#ifndef PB_CONVERT_DOUBLE_FLOAT
/* On some platforms (such as AVR), double is really float.
 * To be able to encode/decode double on these platforms, you need.
 * to define PB_CONVERT_DOUBLE_FLOAT in pb.h or compiler command line.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)
#endif

