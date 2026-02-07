# generated from rosidl_generator_py/resource/_idl.py.em
# with input from camera_driver_srvs:srv/ConfigureCamera.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConfigureCamera_Request(type):
    """Metaclass of message 'ConfigureCamera_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('camera_driver_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'camera_driver_srvs.srv.ConfigureCamera_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__configure_camera__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__configure_camera__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__configure_camera__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__configure_camera__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__configure_camera__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WIDTH__DEFAULT': -1,
            'HEIGHT__DEFAULT': -1,
            'FPS__DEFAULT': -1,
        }

    @property
    def WIDTH__DEFAULT(cls):
        """Return default value for message field 'width'."""
        return -1

    @property
    def HEIGHT__DEFAULT(cls):
        """Return default value for message field 'height'."""
        return -1

    @property
    def FPS__DEFAULT(cls):
        """Return default value for message field 'fps'."""
        return -1


class ConfigureCamera_Request(metaclass=Metaclass_ConfigureCamera_Request):
    """Message class 'ConfigureCamera_Request'."""

    __slots__ = [
        '_width',
        '_height',
        '_fps',
    ]

    _fields_and_field_types = {
        'width': 'int64',
        'height': 'int64',
        'fps': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.width = kwargs.get(
            'width', ConfigureCamera_Request.WIDTH__DEFAULT)
        self.height = kwargs.get(
            'height', ConfigureCamera_Request.HEIGHT__DEFAULT)
        self.fps = kwargs.get(
            'fps', ConfigureCamera_Request.FPS__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.fps != other.fps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'width' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'height' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._height = value

    @builtins.property
    def fps(self):
        """Message field 'fps'."""
        return self._fps

    @fps.setter
    def fps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fps' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'fps' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._fps = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ConfigureCamera_Response(type):
    """Metaclass of message 'ConfigureCamera_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('camera_driver_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'camera_driver_srvs.srv.ConfigureCamera_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__configure_camera__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__configure_camera__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__configure_camera__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__configure_camera__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__configure_camera__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConfigureCamera_Response(metaclass=Metaclass_ConfigureCamera_Response):
    """Message class 'ConfigureCamera_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value


class Metaclass_ConfigureCamera(type):
    """Metaclass of service 'ConfigureCamera'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('camera_driver_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'camera_driver_srvs.srv.ConfigureCamera')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__configure_camera

            from camera_driver_srvs.srv import _configure_camera
            if _configure_camera.Metaclass_ConfigureCamera_Request._TYPE_SUPPORT is None:
                _configure_camera.Metaclass_ConfigureCamera_Request.__import_type_support__()
            if _configure_camera.Metaclass_ConfigureCamera_Response._TYPE_SUPPORT is None:
                _configure_camera.Metaclass_ConfigureCamera_Response.__import_type_support__()


class ConfigureCamera(metaclass=Metaclass_ConfigureCamera):
    from camera_driver_srvs.srv._configure_camera import ConfigureCamera_Request as Request
    from camera_driver_srvs.srv._configure_camera import ConfigureCamera_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
