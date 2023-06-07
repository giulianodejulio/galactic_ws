# generated from rosidl_generator_py/resource/_idl.py.em
# with input from odri_ros2_interfaces:msg/MotorCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorCommand(type):
    """Metaclass of message 'MotorCommand'."""

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
                'odri_ros2_interfaces.msg.MotorCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorCommand(metaclass=Metaclass_MotorCommand):
    """Message class 'MotorCommand'."""

    __slots__ = [
        '_position_ref',
        '_velocity_ref',
        '_torque_ref',
        '_kp',
        '_kd',
        '_i_sat',
    ]

    _fields_and_field_types = {
        'position_ref': 'double',
        'velocity_ref': 'double',
        'torque_ref': 'double',
        'kp': 'double',
        'kd': 'double',
        'i_sat': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.position_ref = kwargs.get('position_ref', float())
        self.velocity_ref = kwargs.get('velocity_ref', float())
        self.torque_ref = kwargs.get('torque_ref', float())
        self.kp = kwargs.get('kp', float())
        self.kd = kwargs.get('kd', float())
        self.i_sat = kwargs.get('i_sat', float())

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
        if self.position_ref != other.position_ref:
            return False
        if self.velocity_ref != other.velocity_ref:
            return False
        if self.torque_ref != other.torque_ref:
            return False
        if self.kp != other.kp:
            return False
        if self.kd != other.kd:
            return False
        if self.i_sat != other.i_sat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def position_ref(self):
        """Message field 'position_ref'."""
        return self._position_ref

    @position_ref.setter
    def position_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_ref' field must be of type 'float'"
        self._position_ref = value

    @property
    def velocity_ref(self):
        """Message field 'velocity_ref'."""
        return self._velocity_ref

    @velocity_ref.setter
    def velocity_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_ref' field must be of type 'float'"
        self._velocity_ref = value

    @property
    def torque_ref(self):
        """Message field 'torque_ref'."""
        return self._torque_ref

    @torque_ref.setter
    def torque_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'torque_ref' field must be of type 'float'"
        self._torque_ref = value

    @property
    def kp(self):
        """Message field 'kp'."""
        return self._kp

    @kp.setter
    def kp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kp' field must be of type 'float'"
        self._kp = value

    @property
    def kd(self):
        """Message field 'kd'."""
        return self._kd

    @kd.setter
    def kd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kd' field must be of type 'float'"
        self._kd = value

    @property
    def i_sat(self):
        """Message field 'i_sat'."""
        return self._i_sat

    @i_sat.setter
    def i_sat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'i_sat' field must be of type 'float'"
        self._i_sat = value
