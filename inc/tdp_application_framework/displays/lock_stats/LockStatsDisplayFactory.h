#ifndef tdp_application_framework_LockStatsDisplayFactory_h
#define tdp_application_framework_LockStatsDisplayFactory_h

#include "tdp_application_framework/AbstractDisplayFactory.h"

namespace tdp_application_framework
{

//##################################################################################################
//! Creates a display that shows a table of mutex lock stats.
class TDP_APPLICATION_FRAMEWORK_SHARED_EXPORT LockStatsDisplayFactory: public tdp_application_framework::AbstractDisplayFactory
{
public:
  //################################################################################################
  LockStatsDisplayFactory();

  //################################################################################################
  ~LockStatsDisplayFactory() override;

  //################################################################################################
  tdp_application_framework::AbstractDisplay* produceDisplay() override;
};

}

#endif