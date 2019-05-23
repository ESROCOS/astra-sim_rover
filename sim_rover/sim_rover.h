/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_sim_rover__
#define __USER_CODE_H_sim_rover__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void sim_rover_startup();

void sim_rover_PI_motion_cmd(const asn1SccBase_commands_Motion2D *);

extern void sim_rover_RI_update_bodystate(const asn1SccBase_samples_RigidBodyState *);

#ifdef __cplusplus
}
#endif


#endif
