// Generated by gencpp from file beginner_package/AddTwoIntsRequest.msg
// DO NOT EDIT!


#ifndef BEGINNER_PACKAGE_MESSAGE_ADDTWOINTSREQUEST_H
#define BEGINNER_PACKAGE_MESSAGE_ADDTWOINTSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_package
{
template <class ContainerAllocator>
struct AddTwoIntsRequest_
{
  typedef AddTwoIntsRequest_<ContainerAllocator> Type;

  AddTwoIntsRequest_()
    : x(0)
    , y(0)
    , n(0)  {
    }
  AddTwoIntsRequest_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)
    , n(0)  {
  (void)_alloc;
    }



   typedef int16_t _x_type;
  _x_type x;

   typedef int16_t _y_type;
  _y_type y;

   typedef int16_t _n_type;
  _n_type n;




  typedef boost::shared_ptr< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddTwoIntsRequest_

typedef ::beginner_package::AddTwoIntsRequest_<std::allocator<void> > AddTwoIntsRequest;

typedef boost::shared_ptr< ::beginner_package::AddTwoIntsRequest > AddTwoIntsRequestPtr;
typedef boost::shared_ptr< ::beginner_package::AddTwoIntsRequest const> AddTwoIntsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace beginner_package

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'beginner_package': ['/home/pi/catkin_ws/src/beginner_package/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d252aebe4e41a031c3ddd94cf9110bc";
  }

  static const char* value(const ::beginner_package::AddTwoIntsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d252aebe4e41a03ULL;
  static const uint64_t static_value2 = 0x1c3ddd94cf9110bcULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_package/AddTwoIntsRequest";
  }

  static const char* value(const ::beginner_package::AddTwoIntsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 x\n\
int16 y\n\
int16 n\n\
";
  }

  static const char* value(const ::beginner_package::AddTwoIntsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.n);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddTwoIntsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_package::AddTwoIntsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_package::AddTwoIntsRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int16_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int16_t>::stream(s, indent + "  ", v.y);
    s << indent << "n: ";
    Printer<int16_t>::stream(s, indent + "  ", v.n);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_PACKAGE_MESSAGE_ADDTWOINTSREQUEST_H