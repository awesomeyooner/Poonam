// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_driver_srvs:srv/ConfigureCamera.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__TRAITS_HPP_
#define CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_driver_srvs/srv/detail/configure_camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_driver_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureCamera_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: fps
  {
    out << "fps: ";
    rosidl_generator_traits::value_to_yaml(msg.fps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigureCamera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: fps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fps: ";
    rosidl_generator_traits::value_to_yaml(msg.fps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureCamera_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_driver_srvs

namespace rosidl_generator_traits
{

[[deprecated("use camera_driver_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_driver_srvs::srv::ConfigureCamera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_driver_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_driver_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_driver_srvs::srv::ConfigureCamera_Request & msg)
{
  return camera_driver_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_driver_srvs::srv::ConfigureCamera_Request>()
{
  return "camera_driver_srvs::srv::ConfigureCamera_Request";
}

template<>
inline const char * name<camera_driver_srvs::srv::ConfigureCamera_Request>()
{
  return "camera_driver_srvs/srv/ConfigureCamera_Request";
}

template<>
struct has_fixed_size<camera_driver_srvs::srv::ConfigureCamera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_driver_srvs::srv::ConfigureCamera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_driver_srvs::srv::ConfigureCamera_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace camera_driver_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ConfigureCamera_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigureCamera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigureCamera_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_driver_srvs

namespace rosidl_generator_traits
{

[[deprecated("use camera_driver_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_driver_srvs::srv::ConfigureCamera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_driver_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_driver_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_driver_srvs::srv::ConfigureCamera_Response & msg)
{
  return camera_driver_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_driver_srvs::srv::ConfigureCamera_Response>()
{
  return "camera_driver_srvs::srv::ConfigureCamera_Response";
}

template<>
inline const char * name<camera_driver_srvs::srv::ConfigureCamera_Response>()
{
  return "camera_driver_srvs/srv/ConfigureCamera_Response";
}

template<>
struct has_fixed_size<camera_driver_srvs::srv::ConfigureCamera_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_driver_srvs::srv::ConfigureCamera_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_driver_srvs::srv::ConfigureCamera_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<camera_driver_srvs::srv::ConfigureCamera>()
{
  return "camera_driver_srvs::srv::ConfigureCamera";
}

template<>
inline const char * name<camera_driver_srvs::srv::ConfigureCamera>()
{
  return "camera_driver_srvs/srv/ConfigureCamera";
}

template<>
struct has_fixed_size<camera_driver_srvs::srv::ConfigureCamera>
  : std::integral_constant<
    bool,
    has_fixed_size<camera_driver_srvs::srv::ConfigureCamera_Request>::value &&
    has_fixed_size<camera_driver_srvs::srv::ConfigureCamera_Response>::value
  >
{
};

template<>
struct has_bounded_size<camera_driver_srvs::srv::ConfigureCamera>
  : std::integral_constant<
    bool,
    has_bounded_size<camera_driver_srvs::srv::ConfigureCamera_Request>::value &&
    has_bounded_size<camera_driver_srvs::srv::ConfigureCamera_Response>::value
  >
{
};

template<>
struct is_service<camera_driver_srvs::srv::ConfigureCamera>
  : std::true_type
{
};

template<>
struct is_service_request<camera_driver_srvs::srv::ConfigureCamera_Request>
  : std::true_type
{
};

template<>
struct is_service_response<camera_driver_srvs::srv::ConfigureCamera_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__TRAITS_HPP_
