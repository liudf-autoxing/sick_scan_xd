#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/NAVPoseData.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_NAVPOSEDATA_H
#define SICK_SCAN_MESSAGE_NAVPOSEDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sick_scan
{
template <class ContainerAllocator>
struct NAVPoseData_
{
  typedef NAVPoseData_<ContainerAllocator> Type;

  NAVPoseData_()
    : header()
    , x(0)
    , y(0)
    , phi(0)
    , opt_pose_data_valid(0)
    , output_mode(0)
    , timestamp(0)
    , mean_dev(0)
    , nav_mode(0)
    , info_state(0)
    , quant_used_reflectors(0)
    , pose_valid(0)
    , pose_x(0.0)
    , pose_y(0.0)
    , pose_yaw(0.0)  {
    }
  NAVPoseData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , x(0)
    , y(0)
    , phi(0)
    , opt_pose_data_valid(0)
    , output_mode(0)
    , timestamp(0)
    , mean_dev(0)
    , nav_mode(0)
    , info_state(0)
    , quant_used_reflectors(0)
    , pose_valid(0)
    , pose_x(0.0)
    , pose_y(0.0)
    , pose_yaw(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;

   typedef uint32_t _phi_type;
  _phi_type phi;

   typedef uint16_t _opt_pose_data_valid_type;
  _opt_pose_data_valid_type opt_pose_data_valid;

   typedef uint8_t _output_mode_type;
  _output_mode_type output_mode;

   typedef uint32_t _timestamp_type;
  _timestamp_type timestamp;

   typedef int32_t _mean_dev_type;
  _mean_dev_type mean_dev;

   typedef uint8_t _nav_mode_type;
  _nav_mode_type nav_mode;

   typedef uint32_t _info_state_type;
  _info_state_type info_state;

   typedef uint8_t _quant_used_reflectors_type;
  _quant_used_reflectors_type quant_used_reflectors;

   typedef int8_t _pose_valid_type;
  _pose_valid_type pose_valid;

   typedef float _pose_x_type;
  _pose_x_type pose_x;

   typedef float _pose_y_type;
  _pose_y_type pose_y;

   typedef float _pose_yaw_type;
  _pose_yaw_type pose_yaw;





  typedef std::shared_ptr< ::sick_scan::NAVPoseData_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::NAVPoseData_<ContainerAllocator> const> ConstPtr;

}; // struct NAVPoseData_

typedef ::sick_scan::NAVPoseData_<std::allocator<void> > NAVPoseData;

typedef std::shared_ptr< ::sick_scan::NAVPoseData > NAVPoseDataPtr;
typedef std::shared_ptr< ::sick_scan::NAVPoseData const> NAVPoseDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::NAVPoseData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::NAVPoseData_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_scan::NAVPoseData_<ContainerAllocator1> & lhs, const ::sick_scan::NAVPoseData_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.phi == rhs.phi &&
    lhs.opt_pose_data_valid == rhs.opt_pose_data_valid &&
    lhs.output_mode == rhs.output_mode &&
    lhs.timestamp == rhs.timestamp &&
    lhs.mean_dev == rhs.mean_dev &&
    lhs.nav_mode == rhs.nav_mode &&
    lhs.info_state == rhs.info_state &&
    lhs.quant_used_reflectors == rhs.quant_used_reflectors &&
    lhs.pose_valid == rhs.pose_valid &&
    lhs.pose_x == rhs.pose_x &&
    lhs.pose_y == rhs.pose_y &&
    lhs.pose_yaw == rhs.pose_yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_scan::NAVPoseData_<ContainerAllocator1> & lhs, const ::sick_scan::NAVPoseData_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_scan

namespace roswrap
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sick_scan::NAVPoseData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::NAVPoseData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::NAVPoseData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::NAVPoseData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::NAVPoseData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::NAVPoseData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::NAVPoseData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "09a85c46d8eba44e26ad07869c2bbc20";
  }

  static const char* value(const ::sick_scan::NAVPoseData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x09a85c46d8eba44eULL;
  static const uint64_t static_value2 = 0x26ad07869c2bbc20ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::NAVPoseData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/NAVPoseData";
  }

  static const char* value(const ::sick_scan::NAVPoseData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::NAVPoseData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ROS message of NAV350PoseData, see sick_nav_scandata_parser.h and NAV-350 telegram listing for details.\n"
"std_msgs/Header header\n"
"\n"
"# pose in lidar coordinates in mm and mdeg\n"
"int32 x\n"
"int32 y\n"
"uint32 phi\n"
"# optional pose data\n"
"uint16 opt_pose_data_valid\n"
"uint8 output_mode\n"
"uint32 timestamp\n"
"int32 mean_dev\n"
"uint8 nav_mode\n"
"uint32 info_state\n"
"uint8 quant_used_reflectors\n"
"\n"
"# pose in ros coordinates\n"
"int8 pose_valid   # pose_x, pose_y and pose_yaw are valid if pose_valid > 0\n"
"float32 pose_x    # x position in ros coordinates in m\n"
"float32 pose_y    # y position in ros coordinates in m\n"
"float32 pose_yaw  # yaw angle in radians\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::sick_scan::NAVPoseData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace roswrap

namespace roswrap
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::NAVPoseData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.phi);
      stream.next(m.opt_pose_data_valid);
      stream.next(m.output_mode);
      stream.next(m.timestamp);
      stream.next(m.mean_dev);
      stream.next(m.nav_mode);
      stream.next(m.info_state);
      stream.next(m.quant_used_reflectors);
      stream.next(m.pose_valid);
      stream.next(m.pose_x);
      stream.next(m.pose_y);
      stream.next(m.pose_yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NAVPoseData_

} // namespace serialization
} // namespace roswrap

namespace roswrap
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::NAVPoseData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_scan::NAVPoseData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "phi: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.phi);
    s << indent << "opt_pose_data_valid: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.opt_pose_data_valid);
    s << indent << "output_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.output_mode);
    s << indent << "timestamp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.timestamp);
    s << indent << "mean_dev: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mean_dev);
    s << indent << "nav_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.nav_mode);
    s << indent << "info_state: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.info_state);
    s << indent << "quant_used_reflectors: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.quant_used_reflectors);
    s << indent << "pose_valid: ";
    Printer<int8_t>::stream(s, indent + "  ", v.pose_valid);
    s << indent << "pose_x: ";
    Printer<float>::stream(s, indent + "  ", v.pose_x);
    s << indent << "pose_y: ";
    Printer<float>::stream(s, indent + "  ", v.pose_y);
    s << indent << "pose_yaw: ";
    Printer<float>::stream(s, indent + "  ", v.pose_yaw);
  }
};

} // namespace message_operations
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_NAVPOSEDATA_H
