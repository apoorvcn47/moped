/* Auto-generated by genmsg_cpp for file /home/ninja/rosbuild_ws/pr_msgs/msg/oldAppletState.msg */
#ifndef PR_MSGS_MESSAGE_OLDAPPLETSTATE_H
#define PR_MSGS_MESSAGE_OLDAPPLETSTATE_H
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

#include "pr_msgs/Action.h"

namespace pr_msgs
{
template <class ContainerAllocator>
struct oldAppletState_ {
  typedef oldAppletState_<ContainerAllocator> Type;

  oldAppletState_()
  : actions()
  , state(0)
  , last_command_id(0)
  , node_name()
  , info()
  {
  }

  oldAppletState_(const ContainerAllocator& _alloc)
  : actions(_alloc)
  , state(0)
  , last_command_id(0)
  , node_name(_alloc)
  , info(_alloc)
  {
  }

  typedef std::vector< ::pr_msgs::Action_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pr_msgs::Action_<ContainerAllocator> >::other >  _actions_type;
  std::vector< ::pr_msgs::Action_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pr_msgs::Action_<ContainerAllocator> >::other >  actions;

  typedef uint8_t _state_type;
  uint8_t state;

  typedef int32_t _last_command_id_type;
  int32_t last_command_id;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _node_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  node_name;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _info_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  info;

  enum { state_idle = 0 };
  enum { state_busy = 1 };
  enum { state_error = 2 };
  enum { state_dying = 3 };

  typedef boost::shared_ptr< ::pr_msgs::oldAppletState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr_msgs::oldAppletState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct oldAppletState
typedef  ::pr_msgs::oldAppletState_<std::allocator<void> > oldAppletState;

typedef boost::shared_ptr< ::pr_msgs::oldAppletState> oldAppletStatePtr;
typedef boost::shared_ptr< ::pr_msgs::oldAppletState const> oldAppletStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr_msgs::oldAppletState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr_msgs::oldAppletState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::oldAppletState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::oldAppletState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr_msgs::oldAppletState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1fe9abd2f3ee03d21319d51ece2576db";
  }

  static const char* value(const  ::pr_msgs::oldAppletState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1fe9abd2f3ee03d2ULL;
  static const uint64_t static_value2 = 0x1319d51ece2576dbULL;
};

template<class ContainerAllocator>
struct DataType< ::pr_msgs::oldAppletState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/oldAppletState";
  }

  static const char* value(const  ::pr_msgs::oldAppletState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr_msgs::oldAppletState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/Action[] actions  # the actions that this applet is ready \n\
                           #   to perform NOW\n\
\n\
uint8 state                # the applet state (one of the values below)\n\
\n\
int32 last_command_id      # the id number of the last command (good or bad)\n\
\n\
string node_name         # name of the node that is sending this message\n\
\n\
string info                # any additional human-readable information\n\
\n\
uint8 state_idle=0\n\
uint8 state_busy=1\n\
uint8 state_error=2\n\
uint8 state_dying=3\n\
\n\
\n\
================================================================================\n\
MSG: pr_msgs/Action\n\
string name         # name of this action (e.g. pickup_juice_box)\n\
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

  static const char* value(const  ::pr_msgs::oldAppletState_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr_msgs::oldAppletState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.actions);
    stream.next(m.state);
    stream.next(m.last_command_id);
    stream.next(m.node_name);
    stream.next(m.info);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct oldAppletState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr_msgs::oldAppletState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr_msgs::oldAppletState_<ContainerAllocator> & v) 
  {
    s << indent << "actions[]" << std::endl;
    for (size_t i = 0; i < v.actions.size(); ++i)
    {
      s << indent << "  actions[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pr_msgs::Action_<ContainerAllocator> >::stream(s, indent + "    ", v.actions[i]);
    }
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
    s << indent << "last_command_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.last_command_id);
    s << indent << "node_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.node_name);
    s << indent << "info: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.info);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR_MSGS_MESSAGE_OLDAPPLETSTATE_H

