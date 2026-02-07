// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_driver_srvs:srv/ReconfigureDefaults.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_DRIVER_SRVS__SRV__DETAIL__RECONFIGURE_DEFAULTS__BUILDER_HPP_
#define CAMERA_DRIVER_SRVS__SRV__DETAIL__RECONFIGURE_DEFAULTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_driver_srvs/srv/detail/reconfigure_defaults__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_driver_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_driver_srvs::srv::ReconfigureDefaults_Request>()
{
  return ::camera_driver_srvs::srv::ReconfigureDefaults_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace camera_driver_srvs


namespace camera_driver_srvs
{

namespace srv
{

namespace builder
{

class Init_ReconfigureDefaults_Response_status
{
public:
  Init_ReconfigureDefaults_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_driver_srvs::srv::ReconfigureDefaults_Response status(::camera_driver_srvs::srv::ReconfigureDefaults_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_driver_srvs::srv::ReconfigureDefaults_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_driver_srvs::srv::ReconfigureDefaults_Response>()
{
  return camera_driver_srvs::srv::builder::Init_ReconfigureDefaults_Response_status();
}

}  // namespace camera_driver_srvs

#endif  // CAMERA_DRIVER_SRVS__SRV__DETAIL__RECONFIGURE_DEFAULTS__BUILDER_HPP_
