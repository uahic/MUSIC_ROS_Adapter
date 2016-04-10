#ifndef CONFIGURATION_H
#define CONFIGURATION_H 

struct Configuration
{
    Configuration()
        : ticktime( 0.01 )
    {
    }

    double ticktime;
};
#endif /* CONFIGURATION_H */
