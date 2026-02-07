// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_driver_srvs:srv/ConfigureCamera.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__BUILDER_HPP_
#define CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_driver_srvs/srv/detail/configure_camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_driver_srvs
{

namespace srv
{

namespace builder
{

class Init_ConfigureCamera_Request_fps
{
public:
  explicit Init_ConfigureCamera_Request_fps(::camera_driver_srvs::srv::ConfigureCamera_Request & msg)
  : msg_(msg)
  {}
  ::camera_driver_srvs::srv::ConfigureCamera_Request fps(::camera_driver_srvs::srv::ConfigureCamera_Request::_fps_type arg)
  {
    msg_.fps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_driver_srvs::srv::ConfigureCamera_Request msg_;
};

class Init_ConfigureCamera_Request_height
{
public:
  explicit Init_ConfigureCamera_Request_height(::camera_driver_srvs::srv::ConfigureCamera_Request & msg)
  : msg_(msg)
  {}
  Init_ConfigureCamera_Request_fps height(::camera_driver_srvs::srv::ConfigureCamera_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_ConfigureCamera_Request_fps(msg_);
  }

private:
  ::camera_driver_srvs::srv::ConfigureCamera_Request msg_;
};

class Init_ConfigureCamera_Request_width
{
public:
  Init_ConfigureCamera_Request_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureCamera_Request_height width(::camera_driver_srvs::srv::ConfigureCamera_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ConfigureCamera_Request_height(msg_);
  }

private:
  ::camera_driver_srvs::srv::ConfigureCamera_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_driver_srvs::srv::ConfigureCamera_Request>()
{
  return camera_driver_srvs::srv::builder::Init_ConfigureCamera_Request_width();
}

}  // namespace camera_driver_srvs


namespace camera_driver_srvs
{

namespace srv
{

namespace builder
{

class Init_ConfigureCamera_Response_status
{
public:
  Init_ConfigureCamera_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_driver_srvs::srv::ConfigureCamera_Response status(::camera_driver_srvs::srv::ConfigureCamera_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_driver_srvs::srv::ConfigureCamera_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_driver_srvs::srv::ConfigureCamera_Response>()
{
  return camera_driver_srvs::srv::builder::Init_ConfigureCamera_Response_status();
}

}  // namespace camera_driver_srvs

#endif  // CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__BUILDER_HPP_
