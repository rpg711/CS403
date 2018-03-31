/* Auto-generated by genmsg_cpp for file /home/rpg711/kinetic_workspace/cs403/compsci403_assignment4/srv/GetCommandVelSrv.srv */
#ifndef COMPSCI403_ASSIGNMENT4_SERVICE_GETCOMMANDVELSRV_H
#define COMPSCI403_ASSIGNMENT4_SERVICE_GETCOMMANDVELSRV_H
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




namespace compsci403_assignment4
{
template <class ContainerAllocator>
struct GetCommandVelSrvRequest_ {
  typedef GetCommandVelSrvRequest_<ContainerAllocator> Type;

  GetCommandVelSrvRequest_()
  : v_0(0.0)
  , w_0(0.0)
  {
  }

  GetCommandVelSrvRequest_(const ContainerAllocator& _alloc)
  : v_0(0.0)
  , w_0(0.0)
  {
  }

  typedef float _v_0_type;
  float v_0;

  typedef float _w_0_type;
  float w_0;


  typedef boost::shared_ptr< ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct GetCommandVelSrvRequest
typedef  ::compsci403_assignment4::GetCommandVelSrvRequest_<std::allocator<void> > GetCommandVelSrvRequest;

typedef boost::shared_ptr< ::compsci403_assignment4::GetCommandVelSrvRequest> GetCommandVelSrvRequestPtr;
typedef boost::shared_ptr< ::compsci403_assignment4::GetCommandVelSrvRequest const> GetCommandVelSrvRequestConstPtr;



template <class ContainerAllocator>
struct GetCommandVelSrvResponse_ {
  typedef GetCommandVelSrvResponse_<ContainerAllocator> Type;

  GetCommandVelSrvResponse_()
  : C_v(0.0)
  , C_w(0.0)
  {
  }

  GetCommandVelSrvResponse_(const ContainerAllocator& _alloc)
  : C_v(0.0)
  , C_w(0.0)
  {
  }

  typedef float _C_v_type;
  float C_v;

  typedef float _C_w_type;
  float C_w;


  typedef boost::shared_ptr< ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct GetCommandVelSrvResponse
typedef  ::compsci403_assignment4::GetCommandVelSrvResponse_<std::allocator<void> > GetCommandVelSrvResponse;

typedef boost::shared_ptr< ::compsci403_assignment4::GetCommandVelSrvResponse> GetCommandVelSrvResponsePtr;
typedef boost::shared_ptr< ::compsci403_assignment4::GetCommandVelSrvResponse const> GetCommandVelSrvResponseConstPtr;


struct GetCommandVelSrv
{

typedef GetCommandVelSrvRequest Request;
typedef GetCommandVelSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetCommandVelSrv
} // namespace compsci403_assignment4

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0e8712b35c44e3e0a577b85bb0362a6a";
  }

  static const char* value(const  ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0e8712b35c44e3e0ULL;
  static const uint64_t static_value2 = 0xa577b85bb0362a6aULL;
};

template<class ContainerAllocator>
struct DataType< ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment4/GetCommandVelSrvRequest";
  }

  static const char* value(const  ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 v_0\n\
float32 w_0\n\
\n\
";
  }

  static const char* value(const  ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "96c1b624fe7f4c3723bd9088fdf02fd8";
  }

  static const char* value(const  ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x96c1b624fe7f4c37ULL;
  static const uint64_t static_value2 = 0x23bd9088fdf02fd8ULL;
};

template<class ContainerAllocator>
struct DataType< ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment4/GetCommandVelSrvResponse";
  }

  static const char* value(const  ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 C_v\n\
float32 C_w\n\
\n\
\n\
";
  }

  static const char* value(const  ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.v_0);
    stream.next(m.w_0);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
}; // struct GetCommandVelSrvRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.C_v);
    stream.next(m.C_w);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
}; // struct GetCommandVelSrvResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<compsci403_assignment4::GetCommandVelSrv> {
  static const char* value() 
  {
    return "73fef1a96aacf31f2c19a0e67105926e";
  }

  static const char* value(const compsci403_assignment4::GetCommandVelSrv&) { return value(); } 
};

template<>
struct DataType<compsci403_assignment4::GetCommandVelSrv> {
  static const char* value() 
  {
    return "compsci403_assignment4/GetCommandVelSrv";
  }

  static const char* value(const compsci403_assignment4::GetCommandVelSrv&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "73fef1a96aacf31f2c19a0e67105926e";
  }

  static const char* value(const compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment4/GetCommandVelSrv";
  }

  static const char* value(const compsci403_assignment4::GetCommandVelSrvRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "73fef1a96aacf31f2c19a0e67105926e";
  }

  static const char* value(const compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "compsci403_assignment4/GetCommandVelSrv";
  }

  static const char* value(const compsci403_assignment4::GetCommandVelSrvResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // COMPSCI403_ASSIGNMENT4_SERVICE_GETCOMMANDVELSRV_H

