/* Auto-generated by genmsg_cpp for file /home/ninja/rosbuild_ws/pr_msgs/msg/Action.msg */
#ifndef PR_MSGS_MESSAGE_ACTION_H
#define PR_MSGS_MESSAGE_ACTION_H
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
struct Action_ {
  typedef Action_<ContainerAllocator> Type;

  Action_()
  : name()
  , target_name()
  , prep_duration(0)
  , execution_duration(0)
  {
  }

  Action_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , target_name(_alloc)
  , prep_duration(0)
  , execution_duration(0)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _target_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  target_name;

  typedef int32_t _prep_duration_type;
  int32_t prep_duration;

  typedef int32_t _execution_duration_type;
  int32_t execution_duration;


  typedef boost::shared_ptr< ::pr_msgs::Action_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr_msgs::Action_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Action
typedef  ::pr_msgs::Action_<std::allocator<void> > Action;

typedef boost::shared_ptr< ::pr_msgs::Action> ActionPtr;
typedef boost::shared_ptr< ::pr_msgs::Action const> ActionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr_msgs::Action_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr_msgs::Action_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::Action_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::Action_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr_msgs::Action_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6ddf77916fbb7875e9cbd82630d8ea35";
  }

  static const char* value(const  ::pr_msgs::Action_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6ddf77916fbb7875ULL;
  static const uint64_t static_value2 = 0xe9cbd82630d8ea35ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr_msgs::Action_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/Action";
  }

  static const char* value(const  ::pr_msgs::Action_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr_msgs::Action_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string name         # name of this action (e.g. pickup_juice_box)\n\
\n\
string target_name  # distinguishes the target of this action from others\n\
                    #  (could be a global object id, world coordinates, etc)\n\
\n\
int32 prep_duration   # how long to expect before any movement commences\n\
\n\
int32 execution_duration  # how long to expect the movement to take\n\
\n\
";
  }

  static const char* value(const  ::pr_msgs::Action_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr_msgs::Action_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.target_name);
    stream.next(m.prep_duration);
    stream.next(m.execution_duration);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Action_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr_msgs::Action_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr_msgs::Action_<ContainerAllocator> & v) 
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "target_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.target_name);
    s << indent << "prep_duration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.prep_duration);
    s << indent << "execution_duration: ";
    Printer<int32_t>::stream(s, indent + "  ", v.execution_duration);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR_MSGS_MESSAGE_ACTION_H

