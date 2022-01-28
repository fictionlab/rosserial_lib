#pragma once

#include "ros/node_handle.h"

#if defined(ROS_PLATFORM_STM32CUBE)

#include "STM32CubeHardware.h"

namespace ros {
typedef NodeHandle_<STM32CubeHardware> NodeHandle;
}

#elif defined(ROS_PLATFORM_HFRAMEWORK)

#include "hFrameworkHardware.h"

namespace ros {
typedef NodeHandle_<hFrameworkHardware> NodeHandle;
}

#endif
