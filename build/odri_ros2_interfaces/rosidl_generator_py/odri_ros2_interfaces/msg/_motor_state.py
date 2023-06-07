# generated from rosidl_generator_py/resource/_idl.py.em
# with input from odri_ros2_interfaces:msg/MotorState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorState(type):
    """Metaclass of message 'MotorState'."""

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
            module = import_type_support('odri_ros2_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'odri_ros2_interfaces.msg.MotorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorState(metaclass=Metaclass_MotorState):
    """Message class 'MotorState'."""

    __slots__ = [
        '_position',
        '_velocity',
        '_torque',
        '_is_enabled',
        '_has_index_been_detected',
        '_index_toogle_bit',
    ]

    _fields_and_field_types = {
        'position': 'double',
        'velocity': 'double',
        'torque': 'double',
        'is_enabled': 'boolean',
        'has_index_been_detected': 'boolean',
        'index_toogle_bit': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.position = kwargs.get('position', float())
        self.velocity = kwargs.get('velocity', float())
        self.torque = kwargs.get('torque', float())
        self.is_enabled = kwargs.get('is_enabled', bool())
        self.has_index_been_detected = kwargs.get('has_index_been_detected', bool())
        self.index_toogle_bit = kwargs.get('index_toogle_bit', bool())

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
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.torque != other.torque:
            return False
        if self.is_enabled != other.is_enabled:
            return False
        if self.has_index_been_detected != other.has_index_been_detected:
            return False
        if self.index_toogle_bit != other.index_toogle_bit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
        self._position = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
        self._velocity = value

    @property
    def torque(self):
        """Message field 'torque'."""
        return self._torque

    @torque.setter
    def torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque' field must be of type 'float'"
        self._torque = value

    @property
    def is_enabled(self):
        """Message field 'is_enabled'."""
        return self._is_enabled

    @is_enabled.setter
    def is_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_enabled' field must be of type 'bool'"
        self._is_enabled = value

    @property
    def has_index_been_detected(self):
        """Message field 'has_index_been_detected'."""
        return self._has_index_been_detected

    @has_index_been_detected.setter
    def has_index_been_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_index_been_detected' field must be of type 'bool'"
        self._has_index_been_detected = value

    @property
    def index_toogle_bit(self):
        """Message field 'index_toogle_bit'."""
        return self._index_toogle_bit

    @index_toogle_bit.setter
    def index_toogle_bit(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'index_toogle_bit' field must be of type 'bool'"
        self._index_toogle_bit = value
