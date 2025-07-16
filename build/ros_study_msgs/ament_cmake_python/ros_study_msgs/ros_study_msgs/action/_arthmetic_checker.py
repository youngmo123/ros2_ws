# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_study_msgs:action/ArthmeticChecker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArthmeticChecker_Goal(type):
    """Metaclass of message 'ArthmeticChecker_Goal'."""

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
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arthmetic_checker__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arthmetic_checker__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arthmetic_checker__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__arthmetic_checker__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arthmetic_checker__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArthmeticChecker_Goal(metaclass=Metaclass_ArthmeticChecker_Goal):
    """Message class 'ArthmeticChecker_Goal'."""

    __slots__ = [
        '_goal_sum',
    ]

    _fields_and_field_types = {
        'goal_sum': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_sum = kwargs.get('goal_sum', float())

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
        if self.goal_sum != other.goal_sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_sum(self):
        """Message field 'goal_sum'."""
        return self._goal_sum

    @goal_sum.setter
    def goal_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_sum' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_sum' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_sum = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ArthmeticChecker_Result(type):
    """Metaclass of message 'ArthmeticChecker_Result'."""

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
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arthmetic_checker__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arthmetic_checker__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arthmetic_checker__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__arthmetic_checker__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arthmetic_checker__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArthmeticChecker_Result(metaclass=Metaclass_ArthmeticChecker_Result):
    """Message class 'ArthmeticChecker_Result'."""

    __slots__ = [
        '_all_formula',
        '_total_sum',
    ]

    _fields_and_field_types = {
        'all_formula': 'sequence<string>',
        'total_sum': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.all_formula = kwargs.get('all_formula', [])
        self.total_sum = kwargs.get('total_sum', float())

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
        if self.all_formula != other.all_formula:
            return False
        if self.total_sum != other.total_sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def all_formula(self):
        """Message field 'all_formula'."""
        return self._all_formula

    @all_formula.setter
    def all_formula(self, value):
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
                "The 'all_formula' field must be a set or sequence and each value of type 'str'"
        self._all_formula = value

    @builtins.property
    def total_sum(self):
        """Message field 'total_sum'."""
        return self._total_sum

    @total_sum.setter
    def total_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_sum' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_sum' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_sum = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArthmeticChecker_Feedback(type):
    """Metaclass of message 'ArthmeticChecker_Feedback'."""

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
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arthmetic_checker__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arthmetic_checker__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arthmetic_checker__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__arthmetic_checker__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arthmetic_checker__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArthmeticChecker_Feedback(metaclass=Metaclass_ArthmeticChecker_Feedback):
    """Message class 'ArthmeticChecker_Feedback'."""

    __slots__ = [
        '_formula',
    ]

    _fields_and_field_types = {
        'formula': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.formula = kwargs.get('formula', [])

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
        if self.formula != other.formula:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def formula(self):
        """Message field 'formula'."""
        return self._formula

    @formula.setter
    def formula(self, value):
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
                "The 'formula' field must be a set or sequence and each value of type 'str'"
        self._formula = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArthmeticChecker_SendGoal_Request(type):
    """Metaclass of message 'ArthmeticChecker_SendGoal_Request'."""

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
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arthmetic_checker__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arthmetic_checker__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arthmetic_checker__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__arthmetic_checker__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arthmetic_checker__send_goal__request

            from ros_study_msgs.action import ArthmeticChecker
            if ArthmeticChecker.Goal.__class__._TYPE_SUPPORT is None:
                ArthmeticChecker.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArthmeticChecker_SendGoal_Request(metaclass=Metaclass_ArthmeticChecker_SendGoal_Request):
    """Message class 'ArthmeticChecker_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'ros_study_msgs/ArthmeticChecker_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_study_msgs', 'action'], 'ArthmeticChecker_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_Goal
        self.goal = kwargs.get('goal', ArthmeticChecker_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_Goal
            assert \
                isinstance(value, ArthmeticChecker_Goal), \
                "The 'goal' field must be a sub message of type 'ArthmeticChecker_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArthmeticChecker_SendGoal_Response(type):
    """Metaclass of message 'ArthmeticChecker_SendGoal_Response'."""

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
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arthmetic_checker__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arthmetic_checker__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arthmetic_checker__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__arthmetic_checker__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arthmetic_checker__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArthmeticChecker_SendGoal_Response(metaclass=Metaclass_ArthmeticChecker_SendGoal_Response):
    """Message class 'ArthmeticChecker_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
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


class Metaclass_ArthmeticChecker_SendGoal(type):
    """Metaclass of service 'ArthmeticChecker_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__arthmetic_checker__send_goal

            from ros_study_msgs.action import _arthmetic_checker
            if _arthmetic_checker.Metaclass_ArthmeticChecker_SendGoal_Request._TYPE_SUPPORT is None:
                _arthmetic_checker.Metaclass_ArthmeticChecker_SendGoal_Request.__import_type_support__()
            if _arthmetic_checker.Metaclass_ArthmeticChecker_SendGoal_Response._TYPE_SUPPORT is None:
                _arthmetic_checker.Metaclass_ArthmeticChecker_SendGoal_Response.__import_type_support__()


class ArthmeticChecker_SendGoal(metaclass=Metaclass_ArthmeticChecker_SendGoal):
    from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_SendGoal_Request as Request
    from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArthmeticChecker_GetResult_Request(type):
    """Metaclass of message 'ArthmeticChecker_GetResult_Request'."""

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
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arthmetic_checker__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arthmetic_checker__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arthmetic_checker__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__arthmetic_checker__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arthmetic_checker__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArthmeticChecker_GetResult_Request(metaclass=Metaclass_ArthmeticChecker_GetResult_Request):
    """Message class 'ArthmeticChecker_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArthmeticChecker_GetResult_Response(type):
    """Metaclass of message 'ArthmeticChecker_GetResult_Response'."""

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
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arthmetic_checker__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arthmetic_checker__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arthmetic_checker__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__arthmetic_checker__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arthmetic_checker__get_result__response

            from ros_study_msgs.action import ArthmeticChecker
            if ArthmeticChecker.Result.__class__._TYPE_SUPPORT is None:
                ArthmeticChecker.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArthmeticChecker_GetResult_Response(metaclass=Metaclass_ArthmeticChecker_GetResult_Response):
    """Message class 'ArthmeticChecker_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'ros_study_msgs/ArthmeticChecker_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_study_msgs', 'action'], 'ArthmeticChecker_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_Result
        self.result = kwargs.get('result', ArthmeticChecker_Result())

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
        if self.result != other.result:
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
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_Result
            assert \
                isinstance(value, ArthmeticChecker_Result), \
                "The 'result' field must be a sub message of type 'ArthmeticChecker_Result'"
        self._result = value


class Metaclass_ArthmeticChecker_GetResult(type):
    """Metaclass of service 'ArthmeticChecker_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__arthmetic_checker__get_result

            from ros_study_msgs.action import _arthmetic_checker
            if _arthmetic_checker.Metaclass_ArthmeticChecker_GetResult_Request._TYPE_SUPPORT is None:
                _arthmetic_checker.Metaclass_ArthmeticChecker_GetResult_Request.__import_type_support__()
            if _arthmetic_checker.Metaclass_ArthmeticChecker_GetResult_Response._TYPE_SUPPORT is None:
                _arthmetic_checker.Metaclass_ArthmeticChecker_GetResult_Response.__import_type_support__()


class ArthmeticChecker_GetResult(metaclass=Metaclass_ArthmeticChecker_GetResult):
    from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_GetResult_Request as Request
    from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArthmeticChecker_FeedbackMessage(type):
    """Metaclass of message 'ArthmeticChecker_FeedbackMessage'."""

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
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__arthmetic_checker__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__arthmetic_checker__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__arthmetic_checker__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__arthmetic_checker__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__arthmetic_checker__feedback_message

            from ros_study_msgs.action import ArthmeticChecker
            if ArthmeticChecker.Feedback.__class__._TYPE_SUPPORT is None:
                ArthmeticChecker.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArthmeticChecker_FeedbackMessage(metaclass=Metaclass_ArthmeticChecker_FeedbackMessage):
    """Message class 'ArthmeticChecker_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'ros_study_msgs/ArthmeticChecker_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_study_msgs', 'action'], 'ArthmeticChecker_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_Feedback
        self.feedback = kwargs.get('feedback', ArthmeticChecker_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_Feedback
            assert \
                isinstance(value, ArthmeticChecker_Feedback), \
                "The 'feedback' field must be a sub message of type 'ArthmeticChecker_Feedback'"
        self._feedback = value


class Metaclass_ArthmeticChecker(type):
    """Metaclass of action 'ArthmeticChecker'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros_study_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_study_msgs.action.ArthmeticChecker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__arthmetic_checker

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from ros_study_msgs.action import _arthmetic_checker
            if _arthmetic_checker.Metaclass_ArthmeticChecker_SendGoal._TYPE_SUPPORT is None:
                _arthmetic_checker.Metaclass_ArthmeticChecker_SendGoal.__import_type_support__()
            if _arthmetic_checker.Metaclass_ArthmeticChecker_GetResult._TYPE_SUPPORT is None:
                _arthmetic_checker.Metaclass_ArthmeticChecker_GetResult.__import_type_support__()
            if _arthmetic_checker.Metaclass_ArthmeticChecker_FeedbackMessage._TYPE_SUPPORT is None:
                _arthmetic_checker.Metaclass_ArthmeticChecker_FeedbackMessage.__import_type_support__()


class ArthmeticChecker(metaclass=Metaclass_ArthmeticChecker):

    # The goal message defined in the action definition.
    from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_Goal as Goal
    # The result message defined in the action definition.
    from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_Result as Result
    # The feedback message defined in the action definition.
    from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from ros_study_msgs.action._arthmetic_checker import ArthmeticChecker_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
