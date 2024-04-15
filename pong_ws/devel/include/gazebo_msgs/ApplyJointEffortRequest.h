// Generated by gencpp from file gazebo_msgs/ApplyJointEffortRequest.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_APPLYJOINTEFFORTREQUEST_H
#define GAZEBO_MSGS_MESSAGE_APPLYJOINTEFFORTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct ApplyJointEffortRequest_
{
  typedef ApplyJointEffortRequest_<ContainerAllocator> Type;

  ApplyJointEffortRequest_()
    : joint_name()
    , effort(0.0)
    , start_time()
    , duration()  {
    }
  ApplyJointEffortRequest_(const ContainerAllocator& _alloc)
    : joint_name(_alloc)
    , effort(0.0)
    , start_time()
    , duration()  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _joint_name_type;
  _joint_name_type joint_name;

   typedef double _effort_type;
  _effort_type effort;

   typedef ros::Time _start_time_type;
  _start_time_type start_time;

   typedef ros::Duration _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ApplyJointEffortRequest_

typedef ::gazebo_msgs::ApplyJointEffortRequest_<std::allocator<void> > ApplyJointEffortRequest;

typedef boost::shared_ptr< ::gazebo_msgs::ApplyJointEffortRequest > ApplyJointEffortRequestPtr;
typedef boost::shared_ptr< ::gazebo_msgs::ApplyJointEffortRequest const> ApplyJointEffortRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator1> & lhs, const ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator2> & rhs)
{
  return lhs.joint_name == rhs.joint_name &&
    lhs.effort == rhs.effort &&
    lhs.start_time == rhs.start_time &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator1> & lhs, const ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c3396ab9af67a509ecd2167a8fe41a2";
  }

  static const char* value(const ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c3396ab9af67a50ULL;
  static const uint64_t static_value2 = 0x9ecd2167a8fe41a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/ApplyJointEffortRequest";
  }

  static const char* value(const ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# set urdf joint effort\n"
"string joint_name           # joint to apply wrench (linear force and torque)\n"
"float64 effort              # effort to apply\n"
"time start_time             # optional wrench application start time (seconds)\n"
"                            # if start_time < current time, start as soon as possible\n"
"duration duration           # optional duration of wrench application time (seconds)\n"
"                            # if duration < 0, apply wrench continuously without end\n"
"                            # if duration = 0, do nothing\n"
"                            # if duration < step size, assume step size and\n"
"                            #               display warning in status_message\n"
;
  }

  static const char* value(const ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_name);
      stream.next(m.effort);
      stream.next(m.start_time);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ApplyJointEffortRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::ApplyJointEffortRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.joint_name);
    s << indent << "effort: ";
    Printer<double>::stream(s, indent + "  ", v.effort);
    s << indent << "start_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.start_time);
    s << indent << "duration: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_APPLYJOINTEFFORTREQUEST_H
