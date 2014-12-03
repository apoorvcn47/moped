% Compile files

% Copyright: Carnegie Mellon University & Intel Corporation
% Author: Alvaro Collet (acollet@cs.cmu.edu)

mex rodrigues.cpp -I/opt/ros/hydro/include/opencv -I/opt/ros/hydro/include  -L/opt/ros/hydro/lib -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_gpu -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_nonfree -lopencv_objdetect -lopencv_photo -lopencv_stitching -lopencv_ts -lopencv_video -lopencv_videostab 
mex quat2rot.cpp 
mex meanshift/meanShift1.c
movefile meanShift1.* meanshift
mex imundistort.cpp matlab_cv.cpp cvundistort.cpp -I/opt/ros/hydro/include/opencv -I/opt/ros/hydro/include  -L/opt/ros/hydro/lib -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_gpu -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_nonfree -lopencv_objdetect -lopencv_photo -lopencv_stitching -lopencv_ts -lopencv_video -lopencv_videostab 
