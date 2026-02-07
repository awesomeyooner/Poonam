// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_driver_srvs:srv/ConfigureCamera.idl
// generated code does not contain a copyright notice
#include "camera_driver_srvs/srv/detail/configure_camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
camera_driver_srvs__srv__ConfigureCamera_Request__init(camera_driver_srvs__srv__ConfigureCamera_Request * msg)
{
  if (!msg) {
    return false;
  }
  // width
  msg->width = -1ll;
  // height
  msg->height = -1ll;
  // fps
  msg->fps = -1ll;
  return true;
}

void
camera_driver_srvs__srv__ConfigureCamera_Request__fini(camera_driver_srvs__srv__ConfigureCamera_Request * msg)
{
  if (!msg) {
    return;
  }
  // width
  // height
  // fps
}

bool
camera_driver_srvs__srv__ConfigureCamera_Request__are_equal(const camera_driver_srvs__srv__ConfigureCamera_Request * lhs, const camera_driver_srvs__srv__ConfigureCamera_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // fps
  if (lhs->fps != rhs->fps) {
    return false;
  }
  return true;
}

bool
camera_driver_srvs__srv__ConfigureCamera_Request__copy(
  const camera_driver_srvs__srv__ConfigureCamera_Request * input,
  camera_driver_srvs__srv__ConfigureCamera_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // fps
  output->fps = input->fps;
  return true;
}

camera_driver_srvs__srv__ConfigureCamera_Request *
camera_driver_srvs__srv__ConfigureCamera_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_driver_srvs__srv__ConfigureCamera_Request * msg = (camera_driver_srvs__srv__ConfigureCamera_Request *)allocator.allocate(sizeof(camera_driver_srvs__srv__ConfigureCamera_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_driver_srvs__srv__ConfigureCamera_Request));
  bool success = camera_driver_srvs__srv__ConfigureCamera_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_driver_srvs__srv__ConfigureCamera_Request__destroy(camera_driver_srvs__srv__ConfigureCamera_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_driver_srvs__srv__ConfigureCamera_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_driver_srvs__srv__ConfigureCamera_Request__Sequence__init(camera_driver_srvs__srv__ConfigureCamera_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_driver_srvs__srv__ConfigureCamera_Request * data = NULL;

  if (size) {
    data = (camera_driver_srvs__srv__ConfigureCamera_Request *)allocator.zero_allocate(size, sizeof(camera_driver_srvs__srv__ConfigureCamera_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_driver_srvs__srv__ConfigureCamera_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_driver_srvs__srv__ConfigureCamera_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
camera_driver_srvs__srv__ConfigureCamera_Request__Sequence__fini(camera_driver_srvs__srv__ConfigureCamera_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_driver_srvs__srv__ConfigureCamera_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

camera_driver_srvs__srv__ConfigureCamera_Request__Sequence *
camera_driver_srvs__srv__ConfigureCamera_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_driver_srvs__srv__ConfigureCamera_Request__Sequence * array = (camera_driver_srvs__srv__ConfigureCamera_Request__Sequence *)allocator.allocate(sizeof(camera_driver_srvs__srv__ConfigureCamera_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_driver_srvs__srv__ConfigureCamera_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_driver_srvs__srv__ConfigureCamera_Request__Sequence__destroy(camera_driver_srvs__srv__ConfigureCamera_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_driver_srvs__srv__ConfigureCamera_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_driver_srvs__srv__ConfigureCamera_Request__Sequence__are_equal(const camera_driver_srvs__srv__ConfigureCamera_Request__Sequence * lhs, const camera_driver_srvs__srv__ConfigureCamera_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_driver_srvs__srv__ConfigureCamera_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_driver_srvs__srv__ConfigureCamera_Request__Sequence__copy(
  const camera_driver_srvs__srv__ConfigureCamera_Request__Sequence * input,
  camera_driver_srvs__srv__ConfigureCamera_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_driver_srvs__srv__ConfigureCamera_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_driver_srvs__srv__ConfigureCamera_Request * data =
      (camera_driver_srvs__srv__ConfigureCamera_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_driver_srvs__srv__ConfigureCamera_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_driver_srvs__srv__ConfigureCamera_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_driver_srvs__srv__ConfigureCamera_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
camera_driver_srvs__srv__ConfigureCamera_Response__init(camera_driver_srvs__srv__ConfigureCamera_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
camera_driver_srvs__srv__ConfigureCamera_Response__fini(camera_driver_srvs__srv__ConfigureCamera_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
camera_driver_srvs__srv__ConfigureCamera_Response__are_equal(const camera_driver_srvs__srv__ConfigureCamera_Response * lhs, const camera_driver_srvs__srv__ConfigureCamera_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
camera_driver_srvs__srv__ConfigureCamera_Response__copy(
  const camera_driver_srvs__srv__ConfigureCamera_Response * input,
  camera_driver_srvs__srv__ConfigureCamera_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

camera_driver_srvs__srv__ConfigureCamera_Response *
camera_driver_srvs__srv__ConfigureCamera_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_driver_srvs__srv__ConfigureCamera_Response * msg = (camera_driver_srvs__srv__ConfigureCamera_Response *)allocator.allocate(sizeof(camera_driver_srvs__srv__ConfigureCamera_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_driver_srvs__srv__ConfigureCamera_Response));
  bool success = camera_driver_srvs__srv__ConfigureCamera_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_driver_srvs__srv__ConfigureCamera_Response__destroy(camera_driver_srvs__srv__ConfigureCamera_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_driver_srvs__srv__ConfigureCamera_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_driver_srvs__srv__ConfigureCamera_Response__Sequence__init(camera_driver_srvs__srv__ConfigureCamera_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_driver_srvs__srv__ConfigureCamera_Response * data = NULL;

  if (size) {
    data = (camera_driver_srvs__srv__ConfigureCamera_Response *)allocator.zero_allocate(size, sizeof(camera_driver_srvs__srv__ConfigureCamera_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_driver_srvs__srv__ConfigureCamera_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_driver_srvs__srv__ConfigureCamera_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
camera_driver_srvs__srv__ConfigureCamera_Response__Sequence__fini(camera_driver_srvs__srv__ConfigureCamera_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_driver_srvs__srv__ConfigureCamera_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

camera_driver_srvs__srv__ConfigureCamera_Response__Sequence *
camera_driver_srvs__srv__ConfigureCamera_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_driver_srvs__srv__ConfigureCamera_Response__Sequence * array = (camera_driver_srvs__srv__ConfigureCamera_Response__Sequence *)allocator.allocate(sizeof(camera_driver_srvs__srv__ConfigureCamera_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_driver_srvs__srv__ConfigureCamera_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_driver_srvs__srv__ConfigureCamera_Response__Sequence__destroy(camera_driver_srvs__srv__ConfigureCamera_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_driver_srvs__srv__ConfigureCamera_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_driver_srvs__srv__ConfigureCamera_Response__Sequence__are_equal(const camera_driver_srvs__srv__ConfigureCamera_Response__Sequence * lhs, const camera_driver_srvs__srv__ConfigureCamera_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_driver_srvs__srv__ConfigureCamera_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_driver_srvs__srv__ConfigureCamera_Response__Sequence__copy(
  const camera_driver_srvs__srv__ConfigureCamera_Response__Sequence * input,
  camera_driver_srvs__srv__ConfigureCamera_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_driver_srvs__srv__ConfigureCamera_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_driver_srvs__srv__ConfigureCamera_Response * data =
      (camera_driver_srvs__srv__ConfigureCamera_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_driver_srvs__srv__ConfigureCamera_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_driver_srvs__srv__ConfigureCamera_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_driver_srvs__srv__ConfigureCamera_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
