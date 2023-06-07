# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hidro_ros2_utils:srv/TransitionCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TransitionCommand_Request(type):
    """Metaclass of message 'TransitionCommand_Request'."""

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
            module = import_type_support('hidro_ros2_utils')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hidro_ros2_utils.srv.TransitionCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__transition_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__transition_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__transition_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__transition_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__transition_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TransitionCommand_Request(metaclass=Metaclass_TransitionCommand_Request):
    """Message class 'TransitionCommand_Request'."""

    __slots__ = [
        '_command',
    ]

    _fields_and_field_types = {
        'command': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())

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
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TransitionCommand_Response(type):
    """Metaclass of message 'TransitionCommand_Response'."""

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
            module = import_type_support('hidro_ros2_utils')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hidro_ros2_utils.srv.TransitionCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__transition_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__transition_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__transition_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__transition_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__transition_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TransitionCommand_Response(metaclass=Metaclass_TransitionCommand_Response):
    """Message class 'TransitionCommand_Response'."""

    __slots__ = [
        '_accepted',
        '_result',
        '_message',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'result': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        self.result = kwargs.get('result', bool())
        self.message = kwargs.get('message', str())

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
        if self.accepted != other.accepted:
            return False
        if self.result != other.result:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'result' field must be of type 'bool'"
        self._result = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_TransitionCommand(type):
    """Metaclass of service 'TransitionCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hidro_ros2_utils')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hidro_ros2_utils.srv.TransitionCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__transition_command

            from hidro_ros2_utils.srv import _transition_command
            if _transition_command.Metaclass_TransitionCommand_Request._TYPE_SUPPORT is None:
                _transition_command.Metaclass_TransitionCommand_Request.__import_type_support__()
            if _transition_command.Metaclass_TransitionCommand_Response._TYPE_SUPPORT is None:
                _transition_command.Metaclass_TransitionCommand_Response.__import_type_support__()


class TransitionCommand(metaclass=Metaclass_TransitionCommand):
    from hidro_ros2_utils.srv._transition_command import TransitionCommand_Request as Request
    from hidro_ros2_utils.srv._transition_command import TransitionCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
