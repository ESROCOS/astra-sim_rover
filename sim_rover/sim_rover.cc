/* User code: This file will not be overwritten by TASTE. */

#include "sim_rover.h"
#include <fake_rover_lib/fake_rover.hpp>
#include <base_support/Base-commands-Motion2DConvert.hpp>
#include <base_support/Base-samples-RigidBodyStateConvert.hpp>

fake_rover::FakeRover rov;
asn1SccBase_samples_RigidBodyState OUT_rbs;

void sim_rover_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

void sim_rover_PI_motion_cmd(const asn1SccBase_commands_Motion2D *IN_cmd)
{
  base::commands::Motion2D cmd;
  base::samples::RigidBodyState rbs;
  asn1SccBase_commands_Motion2D_fromAsn1(cmd, *IN_cmd);
  
  rov.setMotionCommand(cmd);
  rov.step(-1);

  rbs = rov.getOdometry();

  asn1SccBase_samples_RigidBodyState_toAsn1(OUT_rbs,rbs);
  sim_rover_RI_update_bodystate(&OUT_rbs);	
    /* Write your code here! */
}

