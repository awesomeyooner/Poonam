// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_driver_srvs:srv/ConfigureCamera.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__STRUCT_HPP_
#define CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_driver_srvs__srv__ConfigureCamera_Request __attribute__((deprecated))
#else
# define DEPRECATED__camera_driver_srvs__srv__ConfigureCamera_Request __declspec(deprecated)
#endif

namespace camera_driver_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureCamera_Request_
{
  using Type = ConfigureCamera_Request_<ContainerAllocator>;

  explicit ConfigureCamera_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->width = -1ll;
      this->height = -1ll;
      this->fps = -1ll;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->width = 0ll;
      this->height = 0ll;
      this->fps = 0ll;
    }
  }

  explicit ConfigureCamera_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->width = -1ll;
      this->height = -1ll;
      this->fps = -1ll;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->width = 0ll;
      this->height = 0ll;
      this->fps = 0ll;
    }
  }

  // field types and members
  using _width_type =
    int64_t;
  _width_type width;
  using _height_type =
    int64_t;
  _height_type height;
  using _fps_type =
    int64_t;
  _fps_type fps;

  // setters for named parameter idiom
  Type & set__width(
    const int64_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int64_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__fps(
    const int64_t & _arg)
  {
    this->fps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_driver_srvs__srv__ConfigureCamera_Request
    std::shared_ptr<camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_driver_srvs__srv__ConfigureCamera_Request
    std::shared_ptr<camera_driver_srvs::srv::ConfigureCamera_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureCamera_Request_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->fps != other.fps) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureCamera_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureCamera_Request_

// alias to use template instance with default allocator
using ConfigureCamera_Request =
  camera_driver_srvs::srv::ConfigureCamera_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_driver_srvs


#ifndef _WIN32
# define DEPRECATED__camera_driver_srvs__srv__ConfigureCamera_Response __attribute__((deprecated))
#else
# define DEPRECATED__camera_driver_srvs__srv__ConfigureCamera_Response __declspec(deprecated)
#endif

namespace camera_driver_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConfigureCamera_Response_
{
  using Type = ConfigureCamera_Response_<ContainerAllocator>;

  explicit ConfigureCamera_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit ConfigureCamera_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_driver_srvs__srv__ConfigureCamera_Response
    std::shared_ptr<camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_driver_srvs__srv__ConfigureCamera_Response
    std::shared_ptr<camera_driver_srvs::srv::ConfigureCamera_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigureCamera_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigureCamera_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigureCamera_Response_

// alias to use template instance with default allocator
using ConfigureCamera_Response =
  camera_driver_srvs::srv::ConfigureCamera_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_driver_srvs

namespace camera_driver_srvs
{

namespace srv
{

struct ConfigureCamera
{
  using Request = camera_driver_srvs::srv::ConfigureCamera_Request;
  using Response = camera_driver_srvs::srv::ConfigureCamera_Response;
};

}  // namespace srv

}  // namespace camera_driver_srvs

#endif  // CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__STRUCT_HPP_
