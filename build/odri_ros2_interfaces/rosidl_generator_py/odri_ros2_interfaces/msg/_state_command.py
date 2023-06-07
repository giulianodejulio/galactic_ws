# generated from rosidl_generator_py/resource/_idl.py.em
# with input from odri_ros2_interfaces:msg/StateCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateCommand(type):
    """Metaclass of message 'StateCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'IDLE': 0,
        'CALIBRATING': 1,
        'ENABLED': 2,
        'RUNNING': 3,
        'OTHER': 4,
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
                'odri_ros2_interfaces.msg.StateCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_command

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'IDLE': cls.__constants['IDLE'],
            'CALIBRATING': cls.__constants['CALIBRATING'],
            'ENABLED': cls.__constants['ENABLED'],
            'RUNNING': cls.__constants['RUNNING'],
            'OTHER': cls.__constants['OTHER'],
        }

    @property
    def IDLE(self):
        """Message constant 'IDLE'."""
        return Metaclass_StateCommand.__constants['IDLE']

    @property
    def CALIBRATING(self):
        """Message constant 'CALIBRATING'."""
        return Metaclass_StateCommand.__constants['CALIBRATING']

    @property
    def ENABLED(self):
        """Message constant 'ENABLED'."""
        return Metaclass_StateCommand.__constants['ENABLED']

    @property
    def RUNNING(self):
        """Message constant 'RUNNING'."""
        return Metaclass_StateCommand.__constants['RUNNING']

    @property
    def OTHER(self):
        """Message constant 'OTHER'."""
        return Metaclass_StateCommand.__constants['OTHER']


class StateCommand(metaclass=Metaclass_StateCommand):
    """
    Message class 'StateCommand'.

    Constants:
      IDLE
      CALIBRATING
      ENABLED
      RUNNING
      OTHER
    """

    __slots__ = [
        '_header',
        '_state_id',
        '_state_name',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'state_id': 'int8',
        'state_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.state_id = kwargs.get('state_id', int())
        self.state_name = kwargs.get('state_name', str())

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
        if self.header != other.header:
            return False
        if self.state_id != other.state_id:
            return False
        if self.state_name != other.state_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def state_id(self):
        """Message field 'state_id'."""
        return self._state_id

    @state_id.setter
    def state_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'state_id' field must be an integer in [-128, 127]"
        self._state_id = value

    @property
    def state_name(self):
        """Message field 'state_name'."""
        return self._state_name

    @state_name.setter
    def state_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state_name' field must be of type 'str'"
        self._state_name = value
