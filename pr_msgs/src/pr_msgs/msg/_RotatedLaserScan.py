"""autogenerated by genpy from pr_msgs/RotatedLaserScan.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg
import sensor_msgs.msg

class RotatedLaserScan(genpy.Message):
  _md5sum = "3c54b452087e2e0b6fb2114d826dfdb4"
  _type = "pr_msgs/RotatedLaserScan"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 angle
float64 velocity
sensor_msgs/LaserScan laser_scan

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
# * stamp.secs: seconds (stamp_secs) since epoch
# * stamp.nsecs: nanoseconds since stamp_secs
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

"""
  __slots__ = ['angle','velocity','laser_scan']
  _slot_types = ['float64','float64','sensor_msgs/LaserScan']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       angle,velocity,laser_scan

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RotatedLaserScan, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.angle is None:
        self.angle = 0.
      if self.velocity is None:
        self.velocity = 0.
      if self.laser_scan is None:
        self.laser_scan = sensor_msgs.msg.LaserScan()
    else:
      self.angle = 0.
      self.velocity = 0.
      self.laser_scan = sensor_msgs.msg.LaserScan()

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
      buff.write(_struct_2d3I.pack(_x.angle, _x.velocity, _x.laser_scan.header.seq, _x.laser_scan.header.stamp.secs, _x.laser_scan.header.stamp.nsecs))
      _x = self.laser_scan.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7f.pack(_x.laser_scan.angle_min, _x.laser_scan.angle_max, _x.laser_scan.angle_increment, _x.laser_scan.time_increment, _x.laser_scan.scan_time, _x.laser_scan.range_min, _x.laser_scan.range_max))
      length = len(self.laser_scan.ranges)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.laser_scan.ranges))
      length = len(self.laser_scan.intensities)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.laser_scan.intensities))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.laser_scan is None:
        self.laser_scan = sensor_msgs.msg.LaserScan()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.angle, _x.velocity, _x.laser_scan.header.seq, _x.laser_scan.header.stamp.secs, _x.laser_scan.header.stamp.nsecs,) = _struct_2d3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.laser_scan.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.laser_scan.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 28
      (_x.laser_scan.angle_min, _x.laser_scan.angle_max, _x.laser_scan.angle_increment, _x.laser_scan.time_increment, _x.laser_scan.scan_time, _x.laser_scan.range_min, _x.laser_scan.range_max,) = _struct_7f.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.laser_scan.ranges = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.laser_scan.intensities = struct.unpack(pattern, str[start:end])
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
      buff.write(_struct_2d3I.pack(_x.angle, _x.velocity, _x.laser_scan.header.seq, _x.laser_scan.header.stamp.secs, _x.laser_scan.header.stamp.nsecs))
      _x = self.laser_scan.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_7f.pack(_x.laser_scan.angle_min, _x.laser_scan.angle_max, _x.laser_scan.angle_increment, _x.laser_scan.time_increment, _x.laser_scan.scan_time, _x.laser_scan.range_min, _x.laser_scan.range_max))
      length = len(self.laser_scan.ranges)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.laser_scan.ranges.tostring())
      length = len(self.laser_scan.intensities)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.laser_scan.intensities.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.laser_scan is None:
        self.laser_scan = sensor_msgs.msg.LaserScan()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.angle, _x.velocity, _x.laser_scan.header.seq, _x.laser_scan.header.stamp.secs, _x.laser_scan.header.stamp.nsecs,) = _struct_2d3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.laser_scan.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.laser_scan.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 28
      (_x.laser_scan.angle_min, _x.laser_scan.angle_max, _x.laser_scan.angle_increment, _x.laser_scan.time_increment, _x.laser_scan.scan_time, _x.laser_scan.range_min, _x.laser_scan.range_max,) = _struct_7f.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.laser_scan.ranges = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.laser_scan.intensities = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_7f = struct.Struct("<7f")
_struct_2d3I = struct.Struct("<2d3I")
