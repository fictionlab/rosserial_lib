#ifndef _ROS_SERVICE_SetImuCalibration_h
#define _ROS_SERVICE_SetImuCalibration_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace leo_msgs
{

static const char SETIMUCALIBRATION[] = "leo_msgs/SetImuCalibration";

  class SetImuCalibrationRequest : public ros::Msg
  {
    public:
      typedef double _gyro_bias_x_type;
      _gyro_bias_x_type gyro_bias_x;
      typedef double _gyro_bias_y_type;
      _gyro_bias_y_type gyro_bias_y;
      typedef double _gyro_bias_z_type;
      _gyro_bias_z_type gyro_bias_z;

    SetImuCalibrationRequest():
      gyro_bias_x(0),
      gyro_bias_y(0),
      gyro_bias_z(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_gyro_bias_x;
      u_gyro_bias_x.real = this->gyro_bias_x;
      *(outbuffer + offset + 0) = (u_gyro_bias_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_bias_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_bias_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_bias_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gyro_bias_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gyro_bias_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gyro_bias_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gyro_bias_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gyro_bias_x);
      union {
        double real;
        uint64_t base;
      } u_gyro_bias_y;
      u_gyro_bias_y.real = this->gyro_bias_y;
      *(outbuffer + offset + 0) = (u_gyro_bias_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_bias_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_bias_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_bias_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gyro_bias_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gyro_bias_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gyro_bias_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gyro_bias_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gyro_bias_y);
      union {
        double real;
        uint64_t base;
      } u_gyro_bias_z;
      u_gyro_bias_z.real = this->gyro_bias_z;
      *(outbuffer + offset + 0) = (u_gyro_bias_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_bias_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_bias_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_bias_z.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gyro_bias_z.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gyro_bias_z.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gyro_bias_z.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gyro_bias_z.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gyro_bias_z);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_gyro_bias_x;
      u_gyro_bias_x.base = 0;
      u_gyro_bias_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_bias_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_bias_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_bias_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gyro_bias_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gyro_bias_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gyro_bias_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gyro_bias_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gyro_bias_x = u_gyro_bias_x.real;
      offset += sizeof(this->gyro_bias_x);
      union {
        double real;
        uint64_t base;
      } u_gyro_bias_y;
      u_gyro_bias_y.base = 0;
      u_gyro_bias_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_bias_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_bias_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_bias_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gyro_bias_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gyro_bias_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gyro_bias_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gyro_bias_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gyro_bias_y = u_gyro_bias_y.real;
      offset += sizeof(this->gyro_bias_y);
      union {
        double real;
        uint64_t base;
      } u_gyro_bias_z;
      u_gyro_bias_z.base = 0;
      u_gyro_bias_z.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_bias_z.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_bias_z.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_bias_z.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gyro_bias_z.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gyro_bias_z.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gyro_bias_z.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gyro_bias_z.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gyro_bias_z = u_gyro_bias_z.real;
      offset += sizeof(this->gyro_bias_z);
     return offset;
    }

    virtual const char * getType() override { return SETIMUCALIBRATION; };
    virtual const char * getMD5() override { return "98c719532707e923d1c05a91573cc24a"; };

  };

  class SetImuCalibrationResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    SetImuCalibrationResponse():
      success(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
     return offset;
    }

    virtual const char * getType() override { return SETIMUCALIBRATION; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class SetImuCalibration {
    public:
    typedef SetImuCalibrationRequest Request;
    typedef SetImuCalibrationResponse Response;
  };

}
#endif
