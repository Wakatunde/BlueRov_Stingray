# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stingray_msg:msg/StingrayControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StingrayControl(type):
    """Metaclass of message 'StingrayControl'."""

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
            module = import_type_support('stingray_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'stingray_msg.msg.StingrayControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stingray_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stingray_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stingray_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stingray_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stingray_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StingrayControl(metaclass=Metaclass_StingrayControl):
    """Message class 'StingrayControl'."""

    __slots__ = [
        '_forward_backward',
        '_left_right',
        '_increase_altitude',
        '_decrease_altitude',
        '_horizontal_rotation',
        '_vertical_rotation',
        '_light_step',
        '_light_brighter',
        '_light_dimmer',
        '_manual_mode_toggle',
        '_althold_mode_toggle',
        '_camera_angle',
        '_stabilize',
        '_arm',
        '_dissarm',
        '_acro',
    ]

    _fields_and_field_types = {
        'forward_backward': 'float',
        'left_right': 'float',
        'increase_altitude': 'float',
        'decrease_altitude': 'float',
        'horizontal_rotation': 'float',
        'vertical_rotation': 'float',
        'light_step': 'int32',
        'light_brighter': 'int8',
        'light_dimmer': 'int8',
        'manual_mode_toggle': 'int8',
        'althold_mode_toggle': 'int8',
        'camera_angle': 'int32',
        'stabilize': 'int8',
        'arm': 'int8',
        'dissarm': 'int8',
        'acro': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.forward_backward = kwargs.get('forward_backward', float())
        self.left_right = kwargs.get('left_right', float())
        self.increase_altitude = kwargs.get('increase_altitude', float())
        self.decrease_altitude = kwargs.get('decrease_altitude', float())
        self.horizontal_rotation = kwargs.get('horizontal_rotation', float())
        self.vertical_rotation = kwargs.get('vertical_rotation', float())
        self.light_step = kwargs.get('light_step', int())
        self.light_brighter = kwargs.get('light_brighter', int())
        self.light_dimmer = kwargs.get('light_dimmer', int())
        self.manual_mode_toggle = kwargs.get('manual_mode_toggle', int())
        self.althold_mode_toggle = kwargs.get('althold_mode_toggle', int())
        self.camera_angle = kwargs.get('camera_angle', int())
        self.stabilize = kwargs.get('stabilize', int())
        self.arm = kwargs.get('arm', int())
        self.dissarm = kwargs.get('dissarm', int())
        self.acro = kwargs.get('acro', int())

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
        if self.forward_backward != other.forward_backward:
            return False
        if self.left_right != other.left_right:
            return False
        if self.increase_altitude != other.increase_altitude:
            return False
        if self.decrease_altitude != other.decrease_altitude:
            return False
        if self.horizontal_rotation != other.horizontal_rotation:
            return False
        if self.vertical_rotation != other.vertical_rotation:
            return False
        if self.light_step != other.light_step:
            return False
        if self.light_brighter != other.light_brighter:
            return False
        if self.light_dimmer != other.light_dimmer:
            return False
        if self.manual_mode_toggle != other.manual_mode_toggle:
            return False
        if self.althold_mode_toggle != other.althold_mode_toggle:
            return False
        if self.camera_angle != other.camera_angle:
            return False
        if self.stabilize != other.stabilize:
            return False
        if self.arm != other.arm:
            return False
        if self.dissarm != other.dissarm:
            return False
        if self.acro != other.acro:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def forward_backward(self):
        """Message field 'forward_backward'."""
        return self._forward_backward

    @forward_backward.setter
    def forward_backward(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forward_backward' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'forward_backward' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._forward_backward = value

    @builtins.property
    def left_right(self):
        """Message field 'left_right'."""
        return self._left_right

    @left_right.setter
    def left_right(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_right' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_right' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_right = value

    @builtins.property
    def increase_altitude(self):
        """Message field 'increase_altitude'."""
        return self._increase_altitude

    @increase_altitude.setter
    def increase_altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'increase_altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'increase_altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._increase_altitude = value

    @builtins.property
    def decrease_altitude(self):
        """Message field 'decrease_altitude'."""
        return self._decrease_altitude

    @decrease_altitude.setter
    def decrease_altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'decrease_altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'decrease_altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._decrease_altitude = value

    @builtins.property
    def horizontal_rotation(self):
        """Message field 'horizontal_rotation'."""
        return self._horizontal_rotation

    @horizontal_rotation.setter
    def horizontal_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'horizontal_rotation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'horizontal_rotation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._horizontal_rotation = value

    @builtins.property
    def vertical_rotation(self):
        """Message field 'vertical_rotation'."""
        return self._vertical_rotation

    @vertical_rotation.setter
    def vertical_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vertical_rotation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vertical_rotation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vertical_rotation = value

    @builtins.property
    def light_step(self):
        """Message field 'light_step'."""
        return self._light_step

    @light_step.setter
    def light_step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_step' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'light_step' field must be an integer in [-2147483648, 2147483647]"
        self._light_step = value

    @builtins.property
    def light_brighter(self):
        """Message field 'light_brighter'."""
        return self._light_brighter

    @light_brighter.setter
    def light_brighter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_brighter' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'light_brighter' field must be an integer in [-128, 127]"
        self._light_brighter = value

    @builtins.property
    def light_dimmer(self):
        """Message field 'light_dimmer'."""
        return self._light_dimmer

    @light_dimmer.setter
    def light_dimmer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'light_dimmer' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'light_dimmer' field must be an integer in [-128, 127]"
        self._light_dimmer = value

    @builtins.property
    def manual_mode_toggle(self):
        """Message field 'manual_mode_toggle'."""
        return self._manual_mode_toggle

    @manual_mode_toggle.setter
    def manual_mode_toggle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'manual_mode_toggle' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'manual_mode_toggle' field must be an integer in [-128, 127]"
        self._manual_mode_toggle = value

    @builtins.property
    def althold_mode_toggle(self):
        """Message field 'althold_mode_toggle'."""
        return self._althold_mode_toggle

    @althold_mode_toggle.setter
    def althold_mode_toggle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'althold_mode_toggle' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'althold_mode_toggle' field must be an integer in [-128, 127]"
        self._althold_mode_toggle = value

    @builtins.property
    def camera_angle(self):
        """Message field 'camera_angle'."""
        return self._camera_angle

    @camera_angle.setter
    def camera_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_angle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'camera_angle' field must be an integer in [-2147483648, 2147483647]"
        self._camera_angle = value

    @builtins.property
    def stabilize(self):
        """Message field 'stabilize'."""
        return self._stabilize

    @stabilize.setter
    def stabilize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stabilize' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'stabilize' field must be an integer in [-128, 127]"
        self._stabilize = value

    @builtins.property
    def arm(self):
        """Message field 'arm'."""
        return self._arm

    @arm.setter
    def arm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arm' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arm' field must be an integer in [-128, 127]"
        self._arm = value

    @builtins.property
    def dissarm(self):
        """Message field 'dissarm'."""
        return self._dissarm

    @dissarm.setter
    def dissarm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dissarm' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'dissarm' field must be an integer in [-128, 127]"
        self._dissarm = value

    @builtins.property
    def acro(self):
        """Message field 'acro'."""
        return self._acro

    @acro.setter
    def acro(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acro' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'acro' field must be an integer in [-128, 127]"
        self._acro = value
