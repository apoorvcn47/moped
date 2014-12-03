/* Auto-generated by genmsg_cpp for file /home/ninja/rosbuild_ws/pr_msgs/srv/AskUser.srv */
#ifndef PR_MSGS_SERVICE_ASKUSER_H
#define PR_MSGS_SERVICE_ASKUSER_H
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




namespace pr_msgs
{
template <class ContainerAllocator>
struct AskUserRequest_ {
  typedef AskUserRequest_<ContainerAllocator> Type;

  AskUserRequest_()
  : question()
  , choices()
  {
  }

  AskUserRequest_(const ContainerAllocator& _alloc)
  : question(_alloc)
  , choices(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _question_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  question;

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _choices_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  choices;


  typedef boost::shared_ptr< ::pr_msgs::AskUserRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr_msgs::AskUserRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AskUserRequest
typedef  ::pr_msgs::AskUserRequest_<std::allocator<void> > AskUserRequest;

typedef boost::shared_ptr< ::pr_msgs::AskUserRequest> AskUserRequestPtr;
typedef boost::shared_ptr< ::pr_msgs::AskUserRequest const> AskUserRequestConstPtr;



template <class ContainerAllocator>
struct AskUserResponse_ {
  typedef AskUserResponse_<ContainerAllocator> Type;

  AskUserResponse_()
  : answer()
  {
  }

  AskUserResponse_(const ContainerAllocator& _alloc)
  : answer(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _answer_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  answer;


  typedef boost::shared_ptr< ::pr_msgs::AskUserResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr_msgs::AskUserResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AskUserResponse
typedef  ::pr_msgs::AskUserResponse_<std::allocator<void> > AskUserResponse;

typedef boost::shared_ptr< ::pr_msgs::AskUserResponse> AskUserResponsePtr;
typedef boost::shared_ptr< ::pr_msgs::AskUserResponse const> AskUserResponseConstPtr;


struct AskUser
{

typedef AskUserRequest Request;
typedef AskUserResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct AskUser
} // namespace pr_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::AskUserRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::AskUserRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr_msgs::AskUserRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f61eea8673771901fbfa61baf3597523";
  }

  static const char* value(const  ::pr_msgs::AskUserRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf61eea8673771901ULL;
  static const uint64_t static_value2 = 0xfbfa61baf3597523ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr_msgs::AskUserRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/AskUserRequest";
  }

  static const char* value(const  ::pr_msgs::AskUserRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr_msgs::AskUserRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string question\n\
string[] choices\n\
\n\
";
  }

  static const char* value(const  ::pr_msgs::AskUserRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::AskUserResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::pr_msgs::AskUserResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::pr_msgs::AskUserResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d7e708f879c94bb931716d8f4f130f30";
  }

  static const char* value(const  ::pr_msgs::AskUserResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd7e708f879c94bb9ULL;
  static const uint64_t static_value2 = 0x31716d8f4f130f30ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr_msgs::AskUserResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/AskUserResponse";
  }

  static const char* value(const  ::pr_msgs::AskUserResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::pr_msgs::AskUserResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string answer\n\
\n\
";
  }

  static const char* value(const  ::pr_msgs::AskUserResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr_msgs::AskUserRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.question);
    stream.next(m.choices);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AskUserRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::pr_msgs::AskUserResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.answer);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AskUserResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<pr_msgs::AskUser> {
  static const char* value() 
  {
    return "61358f4df54523fed10b2c62d42335a6";
  }

  static const char* value(const pr_msgs::AskUser&) { return value(); } 
};

template<>
struct DataType<pr_msgs::AskUser> {
  static const char* value() 
  {
    return "pr_msgs/AskUser";
  }

  static const char* value(const pr_msgs::AskUser&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<pr_msgs::AskUserRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "61358f4df54523fed10b2c62d42335a6";
  }

  static const char* value(const pr_msgs::AskUserRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<pr_msgs::AskUserRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/AskUser";
  }

  static const char* value(const pr_msgs::AskUserRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<pr_msgs::AskUserResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "61358f4df54523fed10b2c62d42335a6";
  }

  static const char* value(const pr_msgs::AskUserResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<pr_msgs::AskUserResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "pr_msgs/AskUser";
  }

  static const char* value(const pr_msgs::AskUserResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // PR_MSGS_SERVICE_ASKUSER_H
