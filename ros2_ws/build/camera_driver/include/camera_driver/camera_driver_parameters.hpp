// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace camera_driver {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::string camera_name = "";
        std::string camera_frame_id = "camera_rig";
        std::string camera_path = "unused";
        int64_t camera_index = 0;
        double publish_rate = 60.0;
        bool publish_as_gray = false;
        bool publish_compressed = true;
        bool publish_camera_info = true;
        std::vector<int64_t> resolution = {-1, -1};
        std::vector<double> distortion_coeffs = {0.0, 0.0, 0.0, 0.0, 0.0};
        std::vector<double> intrinsics = {0.0, 0.0, 0.0, 0.0};
        int64_t image_fps = -1;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        int64_t camera_index = 0;
        double publish_rate = 60.0;
        bool publish_as_gray = false;
        bool publish_compressed = true;
        bool publish_camera_info = true;
        int64_t image_fps = -1;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("camera_driver"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "") {
      logger_ = std::move(logger);
      prefix_ = prefix;
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    bool try_get_params(Params & params_in) const {
      if (mutex_.try_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
        }
        mutex_.unlock();
        return true;
      }
      return false;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.camera_index = params.camera_index;
      output.publish_rate = params.publish_rate;
      output.publish_as_gray = params.publish_as_gray;
      output.publish_compressed = params.publish_compressed;
      output.publish_camera_info = params.publish_camera_info;
      output.image_fps = params.image_fps;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "camera_name")) {
            updated_params.camera_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "camera_frame_id")) {
            updated_params.camera_frame_id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "camera_path")) {
            updated_params.camera_path = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "camera_index")) {
            updated_params.camera_index = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_rate")) {
            updated_params.publish_rate = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_as_gray")) {
            updated_params.publish_as_gray = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_compressed")) {
            updated_params.publish_compressed = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_camera_info")) {
            updated_params.publish_camera_info = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "resolution")) {
            updated_params.resolution = param.as_integer_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "distortion_coeffs")) {
            updated_params.distortion_coeffs = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "intrinsics")) {
            updated_params.intrinsics = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "image_fps")) {
            updated_params.image_fps = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "camera_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the camera, if you want to use namespace then leave this blank";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.camera_name);
          parameters_interface_->declare_parameter(prefix_ + "camera_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "camera_frame_id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "frame_id to use for CameraInfo";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.camera_frame_id);
          parameters_interface_->declare_parameter(prefix_ + "camera_frame_id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "camera_path")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "path of the camera to use, example: /dev/v4l/by-path/pci-0000:00:14.0-usb-0:2:1.0-video-index0";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.camera_path);
          parameters_interface_->declare_parameter(prefix_ + "camera_path", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "camera_index")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "index of the camera to use, V4L2 backend";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.camera_index);
          parameters_interface_->declare_parameter(prefix_ + "camera_index", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "How fast the timer updates in Hz";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_rate);
          parameters_interface_->declare_parameter(prefix_ + "publish_rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_as_gray")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Whether or not to grayscale the camera feed";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_as_gray);
          parameters_interface_->declare_parameter(prefix_ + "publish_as_gray", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_compressed")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Whether or not to publish the compressed frame";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_compressed);
          parameters_interface_->declare_parameter(prefix_ + "publish_compressed", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_camera_info")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Whether or not to publish the camera info";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_camera_info);
          parameters_interface_->declare_parameter(prefix_ + "publish_camera_info", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "resolution")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Resolution of the camera";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.resolution);
          parameters_interface_->declare_parameter(prefix_ + "resolution", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "distortion_coeffs")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Distortion Coefficients, 5: k1, k2, p1, p2, k3";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.distortion_coeffs);
          parameters_interface_->declare_parameter(prefix_ + "distortion_coeffs", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "intrinsics")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Instrinsics, 4, fx, fy, cx, cy";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.intrinsics);
          parameters_interface_->declare_parameter(prefix_ + "intrinsics", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "image_fps")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "FPS of the camera to set";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.image_fps);
          parameters_interface_->declare_parameter(prefix_ + "image_fps", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "camera_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.camera_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "camera_frame_id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.camera_frame_id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "camera_path");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.camera_path = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "camera_index");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.camera_index = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "publish_rate");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_rate = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "publish_as_gray");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_as_gray = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "publish_compressed");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_compressed = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "publish_camera_info");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_camera_info = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "resolution");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.resolution = param.as_integer_array();
      param = parameters_interface_->get_parameter(prefix_ + "distortion_coeffs");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.distortion_coeffs = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "intrinsics");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.intrinsics = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "image_fps");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.image_fps = param.as_int();


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = std::move(updated_params);
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;

      // rclcpp::Logger cannot be default-constructed
      // so we must provide a initialization here even though
      // every one of our constructors initializes logger_
      rclcpp::Logger logger_ = rclcpp::get_logger("camera_driver");
      std::mutex mutable mutex_;
  };

} // namespace camera_driver
