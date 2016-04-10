#ifndef COMMUNICATOR_H
#define COMMUNICATOR_H

#include "configuration.h"
#include "port.h"

class Communicator {
   public:
    virtual ~Communicator() = 0;
    virtual void init(Configuration&, int, char**) = 0;
    virtual void run_step() = 0;
    virtual void add_port( Port& ) = 0;
};
#endif /* COMMUNICATOR_H */
