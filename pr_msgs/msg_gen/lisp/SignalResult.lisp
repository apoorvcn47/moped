; Auto-generated. Do not edit!


(cl:in-package pr_msgs-msg)


;//! \htmlinclude SignalResult.msg.html

(cl:defclass <SignalResult> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass SignalResult (<SignalResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SignalResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SignalResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pr_msgs-msg:<SignalResult> is deprecated: use pr_msgs-msg:SignalResult instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SignalResult>) ostream)
  "Serializes a message object of type '<SignalResult>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SignalResult>) istream)
  "Deserializes a message object of type '<SignalResult>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SignalResult>)))
  "Returns string type for a message object of type '<SignalResult>"
  "pr_msgs/SignalResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SignalResult)))
  "Returns string type for a message object of type 'SignalResult"
  "pr_msgs/SignalResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SignalResult>)))
  "Returns md5sum for a message object of type '<SignalResult>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SignalResult)))
  "Returns md5sum for a message object of type 'SignalResult"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SignalResult>)))
  "Returns full string definition for message of type '<SignalResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SignalResult)))
  "Returns full string definition for message of type 'SignalResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SignalResult>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SignalResult>))
  "Converts a ROS message object to a list"
  (cl:list 'SignalResult
))
