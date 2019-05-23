# ======================================================================
#  FILE:  $URL$
# ======================================================================
#  PROJECT:             :  astra-sim_rover
#  VERSION              :  @VERION@
#  LANGUAGE             :  CMake script
#  AUTHOR               :  @AUTHOR@
#  COPYRIGHT            :  @COPYRIGHT@
#  COMPILER             :  cmake version 3.0.2
#  CREATED              :  @CREATED@
#  CLASS                :  -
#  LAST MODIFIED        :  @LASTMODIFIED@
#  GENERATED FROM MODEL :  -
#  ORIGINAL MODEL AUTHOR:  -
# ----------------------------------------------------------------------
#  @DESCRIPTION@
# ----------------------------------------------------------------------
#  HISTORY
#  $History$
# ======================================================================

cmake_minimum_required(VERSION 3.2)

project(astra-sim_rover)

include($ENV{ESROCOS_CMAKE})

#required function call to set up esrocos
esrocos_init()

########### FOR INTEGRATION PROJECTS ##############

#uncomment if you want to add dependencies for the build process (only required in integration projects)
#esrocos_add_dependency(PARTITION <Name Of Partition>
#                       MODULES   <PKG-Config findable module>[,secondmodule,thirdmodule...])

########### FOR COMPONENT PROJECTS ################

#uncomment if you want to export a function
esrocos_export_function("sim_rover" "share/taste_components/astra/")

#uncomment to export PKG-CONFIG-file
esrocos_export_pkgconfig( VERSION 1.0
                          DESCRIPTION "component to wrap the fake_rover_lib"
                          REQUIRES "fake_rover_lib eigen3 base_support"
                          LIBS ""
                          STATIC_LIBS "" 
                          C_FLAGS ""
                        ) 
