# CMake generated Testfile for 
# Source directory: /home/rosuser/ros2_ws/src/lbr_fri_ros2_stack/lbr_description
# Build directory: /home/rosuser/ros2_ws/build/lbr_description
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[test_urdf]=] "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/rosuser/ros2_ws/build/lbr_description/test_results/lbr_description/test_urdf.xunit.xml" "--package-name" "lbr_description" "--output-file" "/home/rosuser/ros2_ws/build/lbr_description/ament_cmake_pytest/test_urdf.txt" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/home/rosuser/ros2_ws/src/lbr_fri_ros2_stack/lbr_description/test/test_urdf.py" "-o" "cache_dir=/home/rosuser/ros2_ws/build/lbr_description/ament_cmake_pytest/test_urdf/.cache" "--junit-xml=/home/rosuser/ros2_ws/build/lbr_description/test_results/lbr_description/test_urdf.xunit.xml" "--junit-prefix=lbr_description")
set_tests_properties([=[test_urdf]=] PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/home/rosuser/ros2_ws/build/lbr_description" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;169;ament_add_test;/home/rosuser/ros2_ws/src/lbr_fri_ros2_stack/lbr_description/CMakeLists.txt;21;ament_add_pytest_test;/home/rosuser/ros2_ws/src/lbr_fri_ros2_stack/lbr_description/CMakeLists.txt;0;")
