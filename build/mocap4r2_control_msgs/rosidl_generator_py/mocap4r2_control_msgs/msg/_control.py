# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mocap4r2_control_msgs:msg/Control.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Control(type):
    """Metaclass of message 'Control'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'START': 0,
        'ACK_START': 1,
        'STOP': 2,
        'ACK_STOP': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mocap4r2_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mocap4r2_control_msgs.msg.Control')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'START': cls.__constants['START'],
            'ACK_START': cls.__constants['ACK_START'],
            'STOP': cls.__constants['STOP'],
            'ACK_STOP': cls.__constants['ACK_STOP'],
        }

    @property
    def START(self):
        """Message constant 'START'."""
        return Metaclass_Control.__constants['START']

    @property
    def ACK_START(self):
        """Message constant 'ACK_START'."""
        return Metaclass_Control.__constants['ACK_START']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_Control.__constants['STOP']

    @property
    def ACK_STOP(self):
        """Message constant 'ACK_STOP'."""
        return Metaclass_Control.__constants['ACK_STOP']


class Control(metaclass=Metaclass_Control):
    """
    Message class 'Control'.

    Constants:
      START
      ACK_START
      STOP
      ACK_STOP
    """

    __slots__ = [
        '_control_type',
        '_stamp',
        '_mocap4r2_source',
        '_session_id',
        '_mocap4r2_systems',
    ]

    _fields_and_field_types = {
        'control_type': 'int8',
        'stamp': 'builtin_interfaces/Time',
        'mocap4r2_source': 'string',
        'session_id': 'string',
        'mocap4r2_systems': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.control_type = kwargs.get('control_type', int())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.mocap4r2_source = kwargs.get('mocap4r2_source', str())
        self.session_id = kwargs.get('session_id', str())
        self.mocap4r2_systems = kwargs.get('mocap4r2_systems', [])

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
        if self.control_type != other.control_type:
            return False
        if self.stamp != other.stamp:
            return False
        if self.mocap4r2_source != other.mocap4r2_source:
            return False
        if self.session_id != other.session_id:
            return False
        if self.mocap4r2_systems != other.mocap4r2_systems:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def control_type(self):
        """Message field 'control_type'."""
        return self._control_type

    @control_type.setter
    def control_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'control_type' field must be an integer in [-128, 127]"
        self._control_type = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def mocap4r2_source(self):
        """Message field 'mocap4r2_source'."""
        return self._mocap4r2_source

    @mocap4r2_source.setter
    def mocap4r2_source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mocap4r2_source' field must be of type 'str'"
        self._mocap4r2_source = value

    @builtins.property
    def session_id(self):
        """Message field 'session_id'."""
        return self._session_id

    @session_id.setter
    def session_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'session_id' field must be of type 'str'"
        self._session_id = value

    @builtins.property
    def mocap4r2_systems(self):
        """Message field 'mocap4r2_systems'."""
        return self._mocap4r2_systems

    @mocap4r2_systems.setter
    def mocap4r2_systems(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'mocap4r2_systems' field must be a set or sequence and each value of type 'str'"
        self._mocap4r2_systems = value
