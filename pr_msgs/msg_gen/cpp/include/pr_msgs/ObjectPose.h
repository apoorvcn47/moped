/* Auto-generated by genmsg_cpp for file /home/ninja/rosbuild_ws/pr_msgs/msg/ObjectPose.msg */
#ifndef PR_MSGS_MESSAGE_OBJECTPOSE_H
#define PR_MSGS_MESSAGE_OBJECTPOSE_H
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

#include "geometry_msgs/Pose.h"
#include "pr_msgs/NameTypeValue.h"
#include "geometry_msgs/Pose.h"

namespace pr_msgs
{
template <class ContainerAllocator>
struct ObjectPose_ {
  typedef ObjectPose_<ContainerAllocator> Type;

  ObjectPose_()
  : name()
  , pose()
  , convex_hull_x()
  , convex_hull_y()
  , mean_quality(0.0)
  , used_points(0)
  , properties()
  , pose_uncertainty_list()
  {
  }

  ObjectPose_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , pose(_alloc)
  , convex_hull_x(_alloc)
  , convex_hull_y(_alloc)
  , mean_quality(0.0)
  , used_points(0)
  , properties(_alloc)
  , pose_uncertainty_list(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
   ::geometry_msgs::Pose_<ContainerAllocator>  pose;

  typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _convex_hull_x_type;
  std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  convex_hull_x;

  typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _convex_hull_y_type;
  std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  convex_hull_y;

  typedef float _mean_quality_type;
  float mean_quality;

  typedef int16_t _used_points_type;
  int16_t used_points;

  typedef std::vector< ::pr_msgs::NameTypeValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pr_msgs::NameTypeValue_<ContainerAllocator> >::other >  _properties_type;
  std::vector< ::pr_msgs::NameTypeValue_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pr_msgs::NameTypeValue_<ContainerAllocator> >::other >  properties;

  typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _pose_uncertainty_list_type;
  std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  pose_uncertainty_list;


  typedef boost::shared_ptr< ::pr_msgs::ObjectPose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr_msgs::ObjectPose_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ObjectPose
typedef  ::pr_msgs::ObjectPose_<std::allocator<void> > ObjectPose;

typedef boost::shared_ptr< ::pr_msgs::ObjectPose> ObjectPosePtr;
typedef boost::shared_ptr< ::pr_msgs::ObjectPose const> ObjectPoseConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::pr_msgs::ObjectPose_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::pr_msgs::ObjectPose_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace pr_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::ObjectPose_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::ObjectPose_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr_msgs::ObjectPose_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2ed0d3dd1a0ec7eac29af61880cd83c3";
  }

  static const char* value(const  ::pr_msgs::ObjectPose_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2ed0d3dd1a0ec7eaULL;
  static const uint64_t static_value2 = 0xc29af61880cd83c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr_msgs::ObjectPose_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/ObjectPose";
  }

  static const char* value(const  ::pr_msgs::ObjectPose_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr_msgs::ObjectPose_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string name\n\
\n\
geometry_msgs/Pose pose\n\
\n\
int16[] convex_hull_x\n\
int16[] convex_hull_y\n\
\n\
float32 mean_quality\n\
int16 used_points\n\
\n\
NameTypeValue[] properties\n\
\n\
geometry_msgs/Pose[] pose_uncertainty_list\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: pr_msgs/NameTypeValue\n\
string name\n\
string type\n\
string value\n\
\n\
";
  }

  static const char* value(const  ::pr_msgs::ObjectPose_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr_msgs::ObjectPose_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.pose);
    stream.next(m.convex_hull_x);
    stream.next(m.convex_hull_y);
    stream.next(m.mean_quality);
    stream.next(m.used_points);
    stream.next(m.properties);
    stream.next(m.pose_uncertainty_list);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ObjectPose_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr_msgs::ObjectPose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::pr_msgs::ObjectPose_<ContainerAllocator> & v) 
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "pose: ";
s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "convex_hull_x[]" << std::endl;
    for (size_t i = 0; i < v.convex_hull_x.size(); ++i)
    {
      s << indent << "  convex_hull_x[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.convex_hull_x[i]);
    }
    s << indent << "convex_hull_y[]" << std::endl;
    for (size_t i = 0; i < v.convex_hull_y.size(); ++i)
    {
      s << indent << "  convex_hull_y[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.convex_hull_y[i]);
    }
    s << indent << "mean_quality: ";
    Printer<float>::stream(s, indent + "  ", v.mean_quality);
    s << indent << "used_points: ";
    Printer<int16_t>::stream(s, indent + "  ", v.used_points);
    s << indent << "properties[]" << std::endl;
    for (size_t i = 0; i < v.properties.size(); ++i)
    {
      s << indent << "  properties[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pr_msgs::NameTypeValue_<ContainerAllocator> >::stream(s, indent + "    ", v.properties[i]);
    }
    s << indent << "pose_uncertainty_list[]" << std::endl;
    for (size_t i = 0; i < v.pose_uncertainty_list.size(); ++i)
    {
      s << indent << "  pose_uncertainty_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.pose_uncertainty_list[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // PR_MSGS_MESSAGE_OBJECTPOSE_H

