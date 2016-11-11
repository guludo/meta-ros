SRC_URI = "git://github.com/mavlink/mavros.git;protocol=https;branch=${ROSDISTRO}-devel"
SRCREV = "${AUTOREV}"

S = "${WORKDIR}/git/${ROS_SPN}"

inherit catkin
