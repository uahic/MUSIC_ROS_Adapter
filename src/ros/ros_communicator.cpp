#include "ros_communicator.h"
#include "ros/ros.h"

RosCommunicator::RosCommunicator()
: _handle()
{
}

RosCommunicator::~RosCommunicator()
{
    ros::shutdown();
}

void RosCommunicator::init( Configuration& config, int argc, char** argv )
{
    ros::init(argc, argv, "rosadapter")
    // TODO: check if this is correct
    _rate( 1.0/config.ticktime );

}

void RosCommunicator::run_step()
{
    ros::spinOnce();
}
