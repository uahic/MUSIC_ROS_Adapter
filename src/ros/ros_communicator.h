#ifndef ROS_COMMUNICATOR_H
#define ROS_COMMUNICATOR_H

#include "../communicator.h"
#include "ros_port.h"

class RosCommunicator : public Communicator {
   public:
    RosCommunicator();
    ~RosCommunicator();
    void init(Configuration&, int , char** );
    void run_step();
    void add_port( RosPort& );

   private:
    ros::NodeHandle _handle;
    ros::Rate _rate;
};

#endif /* ROS_COMMUNICATOR_H */
