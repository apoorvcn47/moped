/* Auto-generated by genmsg_cpp for file /home/ninja/rosbuild_ws/pr_msgs/msg/PixelCoordinateList.msg */
#ifndef PR_MSGS_MESSAGE_PIXELCOORDINATELIST_H
#define PR_MSGS_MESSAGE_PIXELCOORDINATELIST_H
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

#include "std_msgs/Header.h"
#include "pr_msgs/PixelCoordinate.h"

namespace pr_msgs
{
template <class ContainerAllocator>
struct PixelCoordinateList_ {
  typedef PixelCoordinateList_<ContainerAllocator> Type;

  PixelCoordinateList_()
  : header()
  , coordinates()
  , originalTimeStamp()
  {
  }

  PixelCoordinateList_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , coordinates(_alloc)
  , originalTimeStamp()
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::pr_msgs::PixelCoordinate_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pr_msgs::PixelCoordinate_<ContainerAllocator> >::other >  _coordinates_type;
  std::vector< ::pr_msgs::PixelCoordinate_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pr_msgs::PixelCoordinate_<ContainerAllocator> >::other >  coordinates;

  typedef ros::Time _originalTimeStamp_type;
  ros::Time originalTimeStamp;


  typedef boost::shared_ptr< ::pr_msgs::PixelCoordinateList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr_msgs::PixelCoordinateList_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PixelCoordinateList
typedef  ::pr_msgs::PixelCoordinateList_<std::allocator<void> > PixelCoordinateList;

typedef boost::shared_ptr< ::pr_msgs::PixelCoordinateList> PixelCoordinateListPtr;
typedef boost::shared_ptr< ::pr_msgs::PixelCoordinateList const> PixelCoordinateListConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr_msgs::PixelCoordinateList_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr_msgs::PixelCoordinateList_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::PixelCoordinateList_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::PixelCoordinateList_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr_msgs::PixelCoordinateList_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3c9bc0eadac36ef3a77fd4cd41e78c02";
  }

  static const char* value(const  ::pr_msgs::PixelCoordinateList_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3c9bc0eadac36ef3ULL;
  static const uint64_t static_value2 = 0xa77fd4cd41e78c02ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr_msgs::PixelCoordinateList_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/PixelCoordinateList";
  }

  static const char* value(const  ::pr_msgs::PixelCoordinateList_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr_msgs::PixelCoordinateList_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
PixelCoordinate[] coordinates\n\
\n\
time originalTimeStamp\n\
\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: pr_msgs/PixelCoordinate\n\
int16 x\n\
int16 y\n\
\n\
";
  }

  static const char* value(const  ::pr_msgs::PixelCoordinateList_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::pr_msgs::PixelCoordinateList_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::pr_msgs::PixelCoordinateList_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr_msgs::PixelCoordinateList_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.coordinates);
    stream.next(m.originalTimeStamp);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PixelCoordinateList_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr_msgs::PixelCoordinateList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr_msgs::PixelCoordinateList_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "coordinates[]" << std::endl;
    for (size_t i = 0; i < v.coordinates.size(); ++i)
    {
      s << indent << "  coordinates[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pr_msgs::PixelCoordinate_<ContainerAllocator> >::stream(s, indent + "    ", v.coordinates[i]);
    }
    s << indent << "originalTimeStamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.originalTimeStamp);
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR_MSGS_MESSAGE_PIXELCOORDINATELIST_H

