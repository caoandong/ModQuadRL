// Generated by gencpp from file rotors_comm/RecordRosbagResponse.msg
// DO NOT EDIT!


#ifndef ROTORS_COMM_MESSAGE_RECORDROSBAGRESPONSE_H
#define ROTORS_COMM_MESSAGE_RECORDROSBAGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rotors_comm
{
template <class ContainerAllocator>
struct RecordRosbagResponse_
{
  typedef RecordRosbagResponse_<ContainerAllocator> Type;

  RecordRosbagResponse_()
    : success(false)  {
    }
  RecordRosbagResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RecordRosbagResponse_

typedef ::rotors_comm::RecordRosbagResponse_<std::allocator<void> > RecordRosbagResponse;

typedef boost::shared_ptr< ::rotors_comm::RecordRosbagResponse > RecordRosbagResponsePtr;
typedef boost::shared_ptr< ::rotors_comm::RecordRosbagResponse const> RecordRosbagResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rotors_comm

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rotors_comm': ['/home/antonio/documents/2019Summer/dronRL/crazyflies_ws/src/CrazyS/rotors_comm/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/kinetic/share/octomap_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::rotors_comm::RecordRosbagResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rotors_comm/RecordRosbagResponse";
  }

  static const char* value(const ::rotors_comm::RecordRosbagResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
\n\
";
  }

  static const char* value(const ::rotors_comm::RecordRosbagResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RecordRosbagResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rotors_comm::RecordRosbagResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rotors_comm::RecordRosbagResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROTORS_COMM_MESSAGE_RECORDROSBAGRESPONSE_H
