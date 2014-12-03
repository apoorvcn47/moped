/* Auto-generated by genmsg_cpp for file /home/ninja/rosbuild_ws/pr_msgs/msg/RailsState.msg */
#ifndef PR_MSGS_MESSAGE_RAILSSTATE_H
#define PR_MSGS_MESSAGE_RAILSSTATE_H
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


namespace pr_msgs
{
template <class ContainerAllocator>
struct RailsState_ {
  typedef RailsState_<ContainerAllocator> Type;

  RailsState_()
  : goal_station_name()
  , goal_station_distance(0.0)
  , prev_station_name()
  , prev_station_distance(0.0)
  , closest_station_name()
  , closest_station_distance(0.0)
  {
  }

  RailsState_(const ContainerAllocator& _alloc)
  : goal_station_name(_alloc)
  , goal_station_distance(0.0)
  , prev_station_name(_alloc)
  , prev_station_distance(0.0)
  , closest_station_name(_alloc)
  , closest_station_distance(0.0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _goal_station_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  goal_station_name;

  typedef double _goal_station_distance_type;
  double goal_station_distance;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _prev_station_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  prev_station_name;

  typedef double _prev_station_distance_type;
  double prev_station_distance;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _closest_station_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  closest_station_name;

  typedef double _closest_station_distance_type;
  double closest_station_distance;


  typedef boost::shared_ptr< ::pr_msgs::RailsState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr_msgs::RailsState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RailsState
typedef  ::pr_msgs::RailsState_<std::allocator<void> > RailsState;

typedef boost::shared_ptr< ::pr_msgs::RailsState> RailsStatePtr;
typedef boost::shared_ptr< ::pr_msgs::RailsState const> RailsStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr_msgs::RailsState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr_msgs::RailsState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::RailsState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::RailsState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr_msgs::RailsState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ce17ce4ba137fd794491e233128e6635";
  }

  static const char* value(const  ::pr_msgs::RailsState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xce17ce4ba137fd79ULL;
  static const uint64_t static_value2 = 0x4491e233128e6635ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr_msgs::RailsState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/RailsState";
  }

  static const char* value(const  ::pr_msgs::RailsState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr_msgs::RailsState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string goal_station_name\n\
float64 goal_station_distance\n\
string prev_station_name\n\
float64 prev_station_distance\n\
string closest_station_name\n\
float64 closest_station_distance\n\
\n\
";
  }

  static const char* value(const  ::pr_msgs::RailsState_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr_msgs::RailsState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.goal_station_name);
    stream.next(m.goal_station_distance);
    stream.next(m.prev_station_name);
    stream.next(m.prev_station_distance);
    stream.next(m.closest_station_name);
    stream.next(m.closest_station_distance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RailsState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr_msgs::RailsState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr_msgs::RailsState_<ContainerAllocator> & v) 
  {
    s << indent << "goal_station_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.goal_station_name);
    s << indent << "goal_station_distance: ";
    Printer<double>::stream(s, indent + "  ", v.goal_station_distance);
    s << indent << "prev_station_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.prev_station_name);
    s << indent << "prev_station_distance: ";
    Printer<double>::stream(s, indent + "  ", v.prev_station_distance);
    s << indent << "closest_station_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.closest_station_name);
    s << indent << "closest_station_distance: ";
    Printer<double>::stream(s, indent + "  ", v.closest_station_distance);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR_MSGS_MESSAGE_RAILSSTATE_H

