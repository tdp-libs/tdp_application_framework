#ifndef tp_qt_application_framework_LockStatsDisplayFactory_h
#define tp_qt_application_framework_LockStatsDisplayFactory_h

#include "tp_qt_application_framework/AbstractDisplayFactory.h"

namespace tp_qt_application_framework
{

//##################################################################################################
//! Creates a display that shows a table of mutex lock stats.
class TP_QT_APPLICATION_FRAMEWORK_SHARED_EXPORT LockStatsDisplayFactory: public tp_qt_application_framework::AbstractDisplayFactory
{
public:
  //################################################################################################
  LockStatsDisplayFactory();

  //################################################################################################
  ~LockStatsDisplayFactory() override;

  //################################################################################################
  tp_qt_application_framework::AbstractDisplay* produceDisplay() override;
};

}

#endif
