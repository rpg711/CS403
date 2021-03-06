# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from compsci403_assignment2/Get3DPointFromDepthSrvRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Get3DPointFromDepthSrvRequest(genpy.Message):
  _md5sum = "e19d45c84759bd9a2b24a15e4f917079"
  _type = "compsci403_assignment2/Get3DPointFromDepthSrvRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 x
int32 y
float32 depth
float32 fx
float32 fy
float32 px
float32 py
"""
  __slots__ = ['x','y','depth','fx','fy','px','py']
  _slot_types = ['int32','int32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       x,y,depth,fx,fy,px,py

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Get3DPointFromDepthSrvRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.x is None:
        self.x = 0
      if self.y is None:
        self.y = 0
      if self.depth is None:
        self.depth = 0.
      if self.fx is None:
        self.fx = 0.
      if self.fy is None:
        self.fy = 0.
      if self.px is None:
        self.px = 0.
      if self.py is None:
        self.py = 0.
    else:
      self.x = 0
      self.y = 0
      self.depth = 0.
      self.fx = 0.
      self.fy = 0.
      self.px = 0.
      self.py = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2i5f().pack(_x.x, _x.y, _x.depth, _x.fx, _x.fy, _x.px, _x.py))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 28
      (_x.x, _x.y, _x.depth, _x.fx, _x.fy, _x.px, _x.py,) = _get_struct_2i5f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2i5f().pack(_x.x, _x.y, _x.depth, _x.fx, _x.fy, _x.px, _x.py))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 28
      (_x.x, _x.y, _x.depth, _x.fx, _x.fy, _x.px, _x.py,) = _get_struct_2i5f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2i5f = None
def _get_struct_2i5f():
    global _struct_2i5f
    if _struct_2i5f is None:
        _struct_2i5f = struct.Struct("<2i5f")
    return _struct_2i5f
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from compsci403_assignment2/Get3DPointFromDepthSrvResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Get3DPointFromDepthSrvResponse(genpy.Message):
  _md5sum = "a1dfb8f61d81d8e9fe291bc0d86a2f48"
  _type = "compsci403_assignment2/Get3DPointFromDepthSrvResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 X
float32 Y
float32 Z

"""
  __slots__ = ['X','Y','Z']
  _slot_types = ['float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       X,Y,Z

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Get3DPointFromDepthSrvResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.X is None:
        self.X = 0.
      if self.Y is None:
        self.Y = 0.
      if self.Z is None:
        self.Z = 0.
    else:
      self.X = 0.
      self.Y = 0.
      self.Z = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3f().pack(_x.X, _x.Y, _x.Z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.X, _x.Y, _x.Z,) = _get_struct_3f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3f().pack(_x.X, _x.Y, _x.Z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 12
      (_x.X, _x.Y, _x.Z,) = _get_struct_3f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
class Get3DPointFromDepthSrv(object):
  _type          = 'compsci403_assignment2/Get3DPointFromDepthSrv'
  _md5sum = 'fa92684c4d3e22b7bf75527d69a8eb73'
  _request_class  = Get3DPointFromDepthSrvRequest
  _response_class = Get3DPointFromDepthSrvResponse
