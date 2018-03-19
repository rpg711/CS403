/* Auto-generated by genmsg_cpp for file /home/rpg711/kinetic_workspace/cs403/compsci403_assignment5/srv/GetTransformationSrv.srv */
#ifndef COMPSCI403_ASSIGNMENT5_SERVICE_GETTRANSFORMATIONSRV_H
#define COMPSCI403_ASSIGNMENT5_SERVICE_GETTRANSFORMATIONSRV_H
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



#include "geometry_msgs/Point32.h"

namespace compsci403_assignment5
{
template <class ContainerAllocator>
struct GetTransformationSrvRequest_ {
  typedef GetTransformationSrvRequest_<ContainerAllocator> Type;

  GetTransformationSrvRequest_()
  {
  }

  GetTransformationSrvRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct GetTransformationSrvRequest
typedef  ::compsci403_assignment5::GetTransformationSrvRequest_<std::allocator<void> > GetTransformationSrvRequest;

typedef boost::shared_ptr< ::compsci403_assignment5::GetTransformationSrvRequest> GetTransformationSrvRequestPtr;
typedef boost::shared_ptr< ::compsci403_assignment5::GetTransformationSrvRequest const> GetTransformationSrvRequestConstPtr;



template <class ContainerAllocator>
struct GetTransformationSrvResponse_ {
  typedef GetTransformationSrvResponse_<ContainerAllocator> Type;

  GetTransformationSrvResponse_()
  : R()
  , T()
  {
    R.assign(0.0);
  }

  GetTransformationSrvResponse_(const ContainerAllocator& _alloc)
  : R()
  , T(_alloc)
  {
    R.assign(0.0);
  }

  typedef boost::array<float, 9>  _R_type;
  boost::array<float, 9>  R;

  typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _T_type;
   ::geometry_msgs::Point32_<ContainerAllocator>  T;


  typedef boost::shared_ptr< ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct GetTransformationSrvResponse
typedef  ::compsci403_assignment5::GetTransformationSrvResponse_<std::allocator<void> > GetTransformationSrvResponse;

typedef boost::shared_ptr< ::compsci403_assignment5::GetTransformationSrvResponse> GetTransformationSrvResponsePtr;
typedef boost::shared_ptr< ::compsci403_assignment5::GetTransformationSrvResponse const> GetTransformationSrvResponseConstPtr;


struct GetTransformationSrv
{

typedef GetTransformationSrvRequest Request;
typedef GetTransformationSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetTransformationSrv
} // namespace compsci403_assignment5

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment5/GetTransformationSrvRequest";
  }

  static const char* value(const  ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "62d96f1a31dbc311ad4b59c90d485f6e";
  }

  static const char* value(const  ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x62d96f1a31dbc311ULL;
  static const uint64_t static_value2 = 0xad4b59c90d485f6eULL;
};

template<class ContainerAllocator>
struct DataType< ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment5/GetTransformationSrvResponse";
  }

  static const char* value(const  ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32[9] R\n\
geometry_msgs/Point32 T\n\
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

  static const char* value(const  ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
}; // struct GetTransformationSrvRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.R);
    stream.next(m.T);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
}; // struct GetTransformationSrvResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<compsci403_assignment5::GetTransformationSrv> {
  static const char* value() 
  {
    return "62d96f1a31dbc311ad4b59c90d485f6e";
  }

  static const char* value(const compsci403_assignment5::GetTransformationSrv&) { return value(); } 
};

template<>
struct DataType<compsci403_assignment5::GetTransformationSrv> {
  static const char* value() 
  {
    return "compsci403_assignment5/GetTransformationSrv";
  }

  static const char* value(const compsci403_assignment5::GetTransformationSrv&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "62d96f1a31dbc311ad4b59c90d485f6e";
  }

  static const char* value(const compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment5/GetTransformationSrv";
  }

  static const char* value(const compsci403_assignment5::GetTransformationSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "62d96f1a31dbc311ad4b59c90d485f6e";
  }

  static const char* value(const compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment5/GetTransformationSrv";
  }

  static const char* value(const compsci403_assignment5::GetTransformationSrvResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // COMPSCI403_ASSIGNMENT5_SERVICE_GETTRANSFORMATIONSRV_H

