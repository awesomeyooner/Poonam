// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_driver_srvs:srv/ConfigureCamera.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__STRUCT_H_
#define CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ConfigureCamera in the package camera_driver_srvs.
typedef struct camera_driver_srvs__srv__ConfigureCamera_Request
{
  int64_t width;
  int64_t height;
  int64_t fps;
} camera_driver_srvs__srv__ConfigureCamera_Request;

// Struct for a sequence of camera_driver_srvs__srv__ConfigureCamera_Request.
typedef struct camera_driver_srvs__srv__ConfigureCamera_Request__Sequence
{
  camera_driver_srvs__srv__ConfigureCamera_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_driver_srvs__srv__ConfigureCamera_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ConfigureCamera in the package camera_driver_srvs.
typedef struct camera_driver_srvs__srv__ConfigureCamera_Response
{
  bool status;
} camera_driver_srvs__srv__ConfigureCamera_Response;

// Struct for a sequence of camera_driver_srvs__srv__ConfigureCamera_Response.
typedef struct camera_driver_srvs__srv__ConfigureCamera_Response__Sequence
{
  camera_driver_srvs__srv__ConfigureCamera_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_driver_srvs__srv__ConfigureCamera_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_DRIVER_SRVS__SRV__DETAIL__CONFIGURE_CAMERA__STRUCT_H_
