# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mocap4r2_control_msgs:msg/MocapInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MocapInfo(type):
    """Metaclass of message 'MocapInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROS2': 0,
        'ROS1': 1,
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
                'mocap4r2_control_msgs.msg.MocapInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mocap_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mocap_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mocap_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mocap_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mocap_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROS2': cls.__constants['ROS2'],
            'ROS1': cls.__constants['ROS1'],
        }

    @property
    def ROS2(self):
        """Message constant 'ROS2'."""
        return Metaclass_MocapInfo.__constants['ROS2']

    @property
    def ROS1(self):
        """Message constant 'ROS1'."""
        return Metaclass_MocapInfo.__constants['ROS1']


class MocapInfo(metaclass=Metaclass_MocapInfo):
    """
    Message class 'MocapInfo'.

    Constants:
      ROS2
      ROS1
    """

    __slots__ = [
        '_mocap4r2_source',
        '_ros_version_source',
        '_topics',
    ]

    _fields_and_field_types = {
        'mocap4r2_source': 'string',
        'ros_version_source': 'int8',
        'topics': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mocap4r2_source = kwargs.get('mocap4r2_source', str())
        self.ros_version_source = kwargs.get('ros_version_source', int())
        self.topics = kwargs.get('topics', [])

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
        if self.mocap4r2_source != other.mocap4r2_source:
            return False
        if self.ros_version_source != other.ros_version_source:
            return False
        if self.topics != other.topics:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def ros_version_source(self):
        """Message field 'ros_version_source'."""
        return self._ros_version_source

    @ros_version_source.setter
    def ros_version_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ros_version_source' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'ros_version_source' field must be an integer in [-128, 127]"
        self._ros_version_source = value

    @builtins.property
    def topics(self):
        """Message field 'topics'."""
        return self._topics

    @topics.setter
    def topics(self, value):
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
                "The 'topics' field must be a set or sequence and each value of type 'str'"
        self._topics = value
