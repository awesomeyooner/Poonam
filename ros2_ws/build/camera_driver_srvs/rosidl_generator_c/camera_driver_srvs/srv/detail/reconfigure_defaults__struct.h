// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_driver_srvs:srv/ReconfigureDefaults.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_DRIVER_SRVS__SRV__DETAIL__RECONFIGURE_DEFAULTS__STRUCT_H_
#define CAMERA_DRIVER_SRVS__SRV__DETAIL__RECONFIGURE_DEFAULTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ReconfigureDefaults in the package camera_driver_srvs.
typedef struct camera_driver_srvs__srv__ReconfigureDefaults_Request
{
  uint8_t structure_needs_at_least_one_member;
} camera_driver_srvs__srv__ReconfigureDefaults_Request;

// Struct for a sequence of camera_driver_srvs__srv__ReconfigureDefaults_Request.
typedef struct camera_driver_srvs__srv__ReconfigureDefaults_Request__Sequence
{
  camera_driver_srvs__srv__ReconfigureDefaults_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_driver_srvs__srv__ReconfigureDefaults_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ReconfigureDefaults in the package camera_driver_srvs.
typedef struct camera_driver_srvs__srv__ReconfigureDefaults_Response
{
  bool status;
} camera_driver_srvs__srv__ReconfigureDefaults_Response;

// Struct for a sequence of camera_driver_srvs__srv__ReconfigureDefaults_Response.
typedef struct camera_driver_srvs__srv__ReconfigureDefaults_Response__Sequence
{
  camera_driver_srvs__srv__ReconfigureDefaults_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_driver_srvs__srv__ReconfigureDefaults_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_DRIVER_SRVS__SRV__DETAIL__RECONFIGURE_DEFAULTS__STRUCT_H_
