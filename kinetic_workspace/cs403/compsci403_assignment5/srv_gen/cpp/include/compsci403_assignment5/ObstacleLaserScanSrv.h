/* Auto-generated by genmsg_cpp for file /home/rpg711/Documents/CS403/kinetic_workspace/cs403/compsci403_assignment5/srv/ObstacleLaserScanSrv.srv */
#ifndef COMPSCI403_ASSIGNMENT5_SERVICE_OBSTACLELASERSCANSRV_H
#define COMPSCI403_ASSIGNMENT5_SERVICE_OBSTACLELASERSCANSRV_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "sensor_msgs/LaserScan.h"
#include "geometry_msgs/Point32.h"


#include "geometry_msgs/Point32.h"

namespace compsci403_assignment5
{
template <class ContainerAllocator>
struct ObstacleLaserScanSrvRequest_ {
  typedef ObstacleLaserScanSrvRequest_<ContainerAllocator> Type;

  ObstacleLaserScanSrvRequest_()
  : S()
  , R()
  , T()
  {
    R.assign(0.0);
  }

  ObstacleLaserScanSrvRequest_(const ContainerAllocator& _alloc)
  : S(_alloc)
  , R()
  , T(_alloc)
  {
    R.assign(0.0);
  }

  typedef  ::sensor_msgs::LaserScan_<ContainerAllocator>  _S_type;
   ::sensor_msgs::LaserScan_<ContainerAllocator>  S;

  typedef boost::array<float, 9>  _R_type;
  boost::array<float, 9>  R;

  typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _T_type;
   ::geometry_msgs::Point32_<ContainerAllocator>  T;


  typedef boost::shared_ptr< ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct ObstacleLaserScanSrvRequest
typedef  ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<std::allocator<void> > ObstacleLaserScanSrvRequest;

typedef boost::shared_ptr< ::compsci403_assignment5::ObstacleLaserScanSrvRequest> ObstacleLaserScanSrvRequestPtr;
typedef boost::shared_ptr< ::compsci403_assignment5::ObstacleLaserScanSrvRequest const> ObstacleLaserScanSrvRequestConstPtr;



template <class ContainerAllocator>
struct ObstacleLaserScanSrvResponse_ {
  typedef ObstacleLaserScanSrvResponse_<ContainerAllocator> Type;

  ObstacleLaserScanSrvResponse_()
  : S_prime()
  {
  }

  ObstacleLaserScanSrvResponse_(const ContainerAllocator& _alloc)
  : S_prime(_alloc)
  {
  }

  typedef std::vector< ::geometry_msgs::Point32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point32_<ContainerAllocator> >::other >  _S_prime_type;
  std::vector< ::geometry_msgs::Point32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point32_<ContainerAllocator> >::other >  S_prime;


  typedef boost::shared_ptr< ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct ObstacleLaserScanSrvResponse
typedef  ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<std::allocator<void> > ObstacleLaserScanSrvResponse;

typedef boost::shared_ptr< ::compsci403_assignment5::ObstacleLaserScanSrvResponse> ObstacleLaserScanSrvResponsePtr;
typedef boost::shared_ptr< ::compsci403_assignment5::ObstacleLaserScanSrvResponse const> ObstacleLaserScanSrvResponseConstPtr;


struct ObstacleLaserScanSrv
{

typedef ObstacleLaserScanSrvRequest Request;
typedef ObstacleLaserScanSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct ObstacleLaserScanSrv
} // namespace compsci403_assignment5

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0e7eba37680d5cd8cc24717cf0b980d5";
  }

  static const char* value(const  ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0e7eba37680d5cd8ULL;
  static const uint64_t static_value2 = 0xcc24717cf0b980d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment5/ObstacleLaserScanSrvRequest";
  }

  static const char* value(const  ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sensor_msgs/LaserScan S\n\
float32[9] R\n\
geometry_msgs/Point32 T\n\
\n\
================================================================================\n\
MSG: sensor_msgs/LaserScan\n\
# Single scan from a planar laser range-finder\n\
#\n\
# If you have another ranging device with different behavior (e.g. a sonar\n\
# array), please find or create a different message, since applications\n\
# will make fairly laser-specific assumptions about this data\n\
\n\
Header header            # timestamp in the header is the acquisition time of \n\
                         # the first ray in the scan.\n\
                         #\n\
                         # in frame frame_id, angles are measured around \n\
                         # the positive Z axis (counterclockwise, if Z is up)\n\
                         # with zero angle being forward along the x axis\n\
                         \n\
float32 angle_min        # start angle of the scan [rad]\n\
float32 angle_max        # end angle of the scan [rad]\n\
float32 angle_increment  # angular distance between measurements [rad]\n\
\n\
float32 time_increment   # time between measurements [seconds] - if your scanner\n\
                         # is moving, this will be used in interpolating position\n\
                         # of 3d points\n\
float32 scan_time        # time between scans [seconds]\n\
\n\
float32 range_min        # minimum range value [m]\n\
float32 range_max        # maximum range value [m]\n\
\n\
float32[] ranges         # range data [m] (Note: values < range_min or > range_max should be discarded)\n\
float32[] intensities    # intensity data [device-specific units].  If your\n\
                         # device does not provide intensities, please leave\n\
                         # the array empty.\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const  ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b5f9534d0dcb8bb9fb78a876c4d3d5d6";
  }

  static const char* value(const  ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb5f9534d0dcb8bb9ULL;
  static const uint64_t static_value2 = 0xfb78a876c4d3d5d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment5/ObstacleLaserScanSrvResponse";
  }

  static const char* value(const  ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "geometry_msgs/Point32[] S_prime\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const  ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.S);
    stream.next(m.R);
    stream.next(m.T);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
}; // struct ObstacleLaserScanSrvRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.S_prime);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
}; // struct ObstacleLaserScanSrvResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<compsci403_assignment5::ObstacleLaserScanSrv> {
  static const char* value() 
  {
    return "a44379f4c79ce76e70a13a28ae6b48f6";
  }

  static const char* value(const compsci403_assignment5::ObstacleLaserScanSrv&) { return value(); } 
};

template<>
struct DataType<compsci403_assignment5::ObstacleLaserScanSrv> {
  static const char* value() 
  {
    return "compsci403_assignment5/ObstacleLaserScanSrv";
  }

  static const char* value(const compsci403_assignment5::ObstacleLaserScanSrv&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a44379f4c79ce76e70a13a28ae6b48f6";
  }

  static const char* value(const compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment5/ObstacleLaserScanSrv";
  }

  static const char* value(const compsci403_assignment5::ObstacleLaserScanSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a44379f4c79ce76e70a13a28ae6b48f6";
  }

  static const char* value(const compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment5/ObstacleLaserScanSrv";
  }

  static const char* value(const compsci403_assignment5::ObstacleLaserScanSrvResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // COMPSCI403_ASSIGNMENT5_SERVICE_OBSTACLELASERSCANSRV_H

