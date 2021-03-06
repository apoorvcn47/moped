/* Auto-generated by genmsg_cpp for file /home/ninja/rosbuild_ws/pr_msgs/msg/MaglevFeedback.msg */
#ifndef PR_MSGS_MESSAGE_MAGLEVFEEDBACK_H
#define PR_MSGS_MESSAGE_MAGLEVFEEDBACK_H
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
struct MaglevFeedback_ {
  typedef MaglevFeedback_<ContainerAllocator> Type;

  MaglevFeedback_()
  : mode(0)
  , value()
  {
  }

  MaglevFeedback_(const ContainerAllocator& _alloc)
  : mode(0)
  , value(_alloc)
  {
  }

  typedef uint8_t _mode_type;
  uint8_t mode;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _value_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  value;

  enum { POSITION = 0 };
  enum { FORCE = 1 };

  typedef boost::shared_ptr< ::pr_msgs::MaglevFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr_msgs::MaglevFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MaglevFeedback
typedef  ::pr_msgs::MaglevFeedback_<std::allocator<void> > MaglevFeedback;

typedef boost::shared_ptr< ::pr_msgs::MaglevFeedback> MaglevFeedbackPtr;
typedef boost::shared_ptr< ::pr_msgs::MaglevFeedback const> MaglevFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr_msgs::MaglevFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr_msgs::MaglevFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::MaglevFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::MaglevFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr_msgs::MaglevFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "def18e2e7b5c4406e703d277c2474767";
  }

  static const char* value(const  ::pr_msgs::MaglevFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xdef18e2e7b5c4406ULL;
  static const uint64_t static_value2 = 0xe703d277c2474767ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr_msgs::MaglevFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/MaglevFeedback";
  }

  static const char* value(const  ::pr_msgs::MaglevFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr_msgs::MaglevFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 mode\n\
float32[] value\n\
uint8 POSITION=0\n\
uint8 FORCE=1\n\
\n\
";
  }

  static const char* value(const  ::pr_msgs::MaglevFeedback_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr_msgs::MaglevFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.mode);
    stream.next(m.value);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MaglevFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr_msgs::MaglevFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr_msgs::MaglevFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "value[]" << std::endl;
    for (size_t i = 0; i < v.value.size(); ++i)
    {
      s << indent << "  value[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.value[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR_MSGS_MESSAGE_MAGLEVFEEDBACK_H

