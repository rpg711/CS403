# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from compsci403_assignment5/ObstacleLaserScanSrvRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg
import sensor_msgs.msg

class ObstacleLaserScanSrvRequest(genpy.Message):
  _md5sum = "0e7eba37680d5cd8cc24717cf0b980d5"
  _type = "compsci403_assignment5/ObstacleLaserScanSrvRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """sensor_msgs/LaserScan S
float32[9] R
geometry_msgs/Point32 T

================================================================================
MSG: sensor_msgs/LaserScan
# Single scan from a planar laser range-finder
#
# If you have another ranging device with different behavior (e.g. a sonar
# array), please find or create a different message, since applications
# will make fairly laser-specific assumptions about this data

Header header            # timestamp in the header is the acquisition time of 
                         # the first ray in the scan.
                         #
                         # in frame frame_id, angles are measured around 
                         # the positive Z axis (counterclockwise, if Z is up)
                         # with zero angle being forward along the x axis
                         
float32 angle_min        # start angle of the scan [rad]
float32 angle_max        # end angle of the scan [rad]
float32 angle_increment  # angular distance between measurements [rad]

float32 time_increment   # time between measurements [seconds] - if your scanner
                         # is moving, this will be used in interpolating position
                         # of 3d points
float32 scan_time        # time between scans [seconds]

float32 range_min        # minimum range value [m]
float32 range_max        # maximum range value [m]

float32[] ranges         # range data [m] (Note: values < range_min or > range_max should be discarded)
float32[] intensities    # intensity data [device-specific units].  If your
                         # device does not provide intensities, please leave
                         # the array empty.

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z"""
  __slots__ = ['S','R','T']
  _slot_types = ['sensor_msgs/LaserScan','float32[9]','geometry_msgs/Point32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       S,R,T

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObstacleLaserScanSrvRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.S is None:
        self.S = sensor_msgs.msg.LaserScan()
      if self.R is None:
        self.R = [0.] * 9
      if self.T is None:
        self.T = geometry_msgs.msg.Point32()
    else:
      self.S = sensor_msgs.msg.LaserScan()
      self.R = [0.] * 9
      self.T = geometry_msgs.msg.Point32()

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
      buff.write(_get_struct_3I().pack(_x.S.header.seq, _x.S.header.stamp.secs, _x.S.header.stamp.nsecs))
      _x = self.S.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_7f().pack(_x.S.angle_min, _x.S.angle_max, _x.S.angle_increment, _x.S.time_increment, _x.S.scan_time, _x.S.range_min, _x.S.range_max))
      length = len(self.S.ranges)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.S.ranges))
      length = len(self.S.intensities)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.S.intensities))
      buff.write(_get_struct_9f().pack(*self.R))
      _x = self
      buff.write(_get_struct_3f().pack(_x.T.x, _x.T.y, _x.T.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.S is None:
        self.S = sensor_msgs.msg.LaserScan()
      if self.T is None:
        self.T = geometry_msgs.msg.Point32()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.S.header.seq, _x.S.header.stamp.secs, _x.S.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.S.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.S.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 28
      (_x.S.angle_min, _x.S.angle_max, _x.S.angle_increment, _x.S.time_increment, _x.S.scan_time, _x.S.range_min, _x.S.range_max,) = _get_struct_7f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.S.ranges = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.S.intensities = struct.unpack(pattern, str[start:end])
      start = end
      end += 36
      self.R = _get_struct_9f().unpack(str[start:end])
      _x = self
      start = end
      end += 12
      (_x.T.x, _x.T.y, _x.T.z,) = _get_struct_3f().unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.S.header.seq, _x.S.header.stamp.secs, _x.S.header.stamp.nsecs))
      _x = self.S.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_7f().pack(_x.S.angle_min, _x.S.angle_max, _x.S.angle_increment, _x.S.time_increment, _x.S.scan_time, _x.S.range_min, _x.S.range_max))
      length = len(self.S.ranges)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.S.ranges.tostring())
      length = len(self.S.intensities)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.S.intensities.tostring())
      buff.write(self.R.tostring())
      _x = self
      buff.write(_get_struct_3f().pack(_x.T.x, _x.T.y, _x.T.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.S is None:
        self.S = sensor_msgs.msg.LaserScan()
      if self.T is None:
        self.T = geometry_msgs.msg.Point32()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.S.header.seq, _x.S.header.stamp.secs, _x.S.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.S.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.S.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 28
      (_x.S.angle_min, _x.S.angle_max, _x.S.angle_increment, _x.S.time_increment, _x.S.scan_time, _x.S.range_min, _x.S.range_max,) = _get_struct_7f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.S.ranges = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.S.intensities = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 36
      self.R = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=9)
      _x = self
      start = end
      end += 12
      (_x.T.x, _x.T.y, _x.T.z,) = _get_struct_3f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_7f = None
def _get_struct_7f():
    global _struct_7f
    if _struct_7f is None:
        _struct_7f = struct.Struct("<7f")
    return _struct_7f
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
_struct_9f = None
def _get_struct_9f():
    global _struct_9f
    if _struct_9f is None:
        _struct_9f = struct.Struct("<9f")
    return _struct_9f
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from compsci403_assignment5/ObstacleLaserScanSrvResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class ObstacleLaserScanSrvResponse(genpy.Message):
  _md5sum = "b5f9534d0dcb8bb9fb78a876c4d3d5d6"
  _type = "compsci403_assignment5/ObstacleLaserScanSrvResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Point32[] S_prime


================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z"""
  __slots__ = ['S_prime']
  _slot_types = ['geometry_msgs/Point32[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       S_prime

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObstacleLaserScanSrvResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.S_prime is None:
        self.S_prime = []
    else:
      self.S_prime = []

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
      length = len(self.S_prime)
      buff.write(_struct_I.pack(length))
      for val1 in self.S_prime:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.S_prime is None:
        self.S_prime = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.S_prime = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.S_prime.append(val1)
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
      length = len(self.S_prime)
      buff.write(_struct_I.pack(length))
      for val1 in self.S_prime:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.S_prime is None:
        self.S_prime = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.S_prime = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point32()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
        self.S_prime.append(val1)
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
class ObstacleLaserScanSrv(object):
  _type          = 'compsci403_assignment5/ObstacleLaserScanSrv'
  _md5sum = 'a44379f4c79ce76e70a13a28ae6b48f6'
  _request_class  = ObstacleLaserScanSrvRequest
  _response_class = ObstacleLaserScanSrvResponse
