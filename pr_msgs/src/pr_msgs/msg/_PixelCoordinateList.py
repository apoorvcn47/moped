"""autogenerated by genpy from pr_msgs/PixelCoordinateList.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import pr_msgs.msg
import genpy
import std_msgs.msg

class PixelCoordinateList(genpy.Message):
  _md5sum = "3c9bc0eadac36ef3a77fd4cd41e78c02"
  _type = "pr_msgs/PixelCoordinateList"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header

PixelCoordinate[] coordinates

time originalTimeStamp


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

================================================================================
MSG: pr_msgs/PixelCoordinate
int16 x
int16 y

"""
  __slots__ = ['header','coordinates','originalTimeStamp']
  _slot_types = ['std_msgs/Header','pr_msgs/PixelCoordinate[]','time']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,coordinates,originalTimeStamp

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(PixelCoordinateList, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.coordinates is None:
        self.coordinates = []
      if self.originalTimeStamp is None:
        self.originalTimeStamp = genpy.Time()
    else:
      self.header = std_msgs.msg.Header()
      self.coordinates = []
      self.originalTimeStamp = genpy.Time()

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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.coordinates)
      buff.write(_struct_I.pack(length))
      for val1 in self.coordinates:
        _x = val1
        buff.write(_struct_2h.pack(_x.x, _x.y))
      _x = self
      buff.write(_struct_2I.pack(_x.originalTimeStamp.secs, _x.originalTimeStamp.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.coordinates is None:
        self.coordinates = None
      if self.originalTimeStamp is None:
        self.originalTimeStamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.coordinates = []
      for i in range(0, length):
        val1 = pr_msgs.msg.PixelCoordinate()
        _x = val1
        start = end
        end += 4
        (_x.x, _x.y,) = _struct_2h.unpack(str[start:end])
        self.coordinates.append(val1)
      _x = self
      start = end
      end += 8
      (_x.originalTimeStamp.secs, _x.originalTimeStamp.nsecs,) = _struct_2I.unpack(str[start:end])
      self.originalTimeStamp.canon()
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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.coordinates)
      buff.write(_struct_I.pack(length))
      for val1 in self.coordinates:
        _x = val1
        buff.write(_struct_2h.pack(_x.x, _x.y))
      _x = self
      buff.write(_struct_2I.pack(_x.originalTimeStamp.secs, _x.originalTimeStamp.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(_x))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(_x))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.coordinates is None:
        self.coordinates = None
      if self.originalTimeStamp is None:
        self.originalTimeStamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.coordinates = []
      for i in range(0, length):
        val1 = pr_msgs.msg.PixelCoordinate()
        _x = val1
        start = end
        end += 4
        (_x.x, _x.y,) = _struct_2h.unpack(str[start:end])
        self.coordinates.append(val1)
      _x = self
      start = end
      end += 8
      (_x.originalTimeStamp.secs, _x.originalTimeStamp.nsecs,) = _struct_2I.unpack(str[start:end])
      self.originalTimeStamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_2h = struct.Struct("<2h")
_struct_2I = struct.Struct("<2I")
