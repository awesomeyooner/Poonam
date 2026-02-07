// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_driver_srvs:srv/ReconfigureDefaults.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_DRIVER_SRVS__SRV__DETAIL__RECONFIGURE_DEFAULTS__STRUCT_HPP_
#define CAMERA_DRIVER_SRVS__SRV__DETAIL__RECONFIGURE_DEFAULTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_driver_srvs__srv__ReconfigureDefaults_Request __attribute__((deprecated))
#else
# define DEPRECATED__camera_driver_srvs__srv__ReconfigureDefaults_Request __declspec(deprecated)
#endif

namespace camera_driver_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReconfigureDefaults_Request_
{
  using Type = ReconfigureDefaults_Request_<ContainerAllocator>;

  explicit ReconfigureDefaults_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ReconfigureDefaults_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_driver_srvs__srv__ReconfigureDefaults_Request
    std::shared_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_driver_srvs__srv__ReconfigureDefaults_Request
    std::shared_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReconfigureDefaults_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReconfigureDefaults_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReconfigureDefaults_Request_

// alias to use template instance with default allocator
using ReconfigureDefaults_Request =
  camera_driver_srvs::srv::ReconfigureDefaults_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_driver_srvs


#ifndef _WIN32
# define DEPRECATED__camera_driver_srvs__srv__ReconfigureDefaults_Response __attribute__((deprecated))
#else
# define DEPRECATED__camera_driver_srvs__srv__ReconfigureDefaults_Response __declspec(deprecated)
#endif

namespace camera_driver_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReconfigureDefaults_Response_
{
  using Type = ReconfigureDefaults_Response_<ContainerAllocator>;

  explicit ReconfigureDefaults_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit ReconfigureDefaults_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_driver_srvs__srv__ReconfigureDefaults_Response
    std::shared_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_driver_srvs__srv__ReconfigureDefaults_Response
    std::shared_ptr<camera_driver_srvs::srv::ReconfigureDefaults_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReconfigureDefaults_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReconfigureDefaults_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReconfigureDefaults_Response_

// alias to use template instance with default allocator
using ReconfigureDefaults_Response =
  camera_driver_srvs::srv::ReconfigureDefaults_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_driver_srvs

namespace camera_driver_srvs
{

namespace srv
{

struct ReconfigureDefaults
{
  using Request = camera_driver_srvs::srv::ReconfigureDefaults_Request;
  using Response = camera_driver_srvs::srv::ReconfigureDefaults_Response;
};

}  // namespace srv

}  // namespace camera_driver_srvs

#endif  // CAMERA_DRIVER_SRVS__SRV__DETAIL__RECONFIGURE_DEFAULTS__STRUCT_HPP_
