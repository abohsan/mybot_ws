

# Jaguar module with arm manipulator 

This package is a Gazebo ROS plugin for the Intel D435 realsense camera.
 
# Acknowledgement

this repository  [Mybot_ws](https://github.com/richardw05/mybot_ws) along with [the website](https://moorerobots.com/) 

This is a continuation of work done by [SyrianSpock](https://github.com/SyrianSpock) for a Gazebo ROS plugin with RS200 camera.

This package includes the work developed by Intel Corporation with the ROS model of the [D435](https://github.com/intel-ros/realsense) camera.


# Creating the Map:

	1. roslaunch mybot_gazebo mybot_world.launch
	2. roslaunch mybot_navigation gmapping_demo.launch
	3. roslaunch mybot_description mybot_rviz_gmapping.launch
	4. roslaunch mybot_navigation mybot_teleop.launch

	**Saving the Map**

		rosrun map_server map_saver -f ~/mybot_ws/src/mybot_navigation/maps/test_map
---
# Loading the Map

	1. roslaunch mybot_gazebo mybot_world.launch
	2. roslaunch mybot_navigation amcl_demo.launch
	3. roslaunch mybot_description mybot_rviz_amcl.launch

---

# Creating the Map & Navigate

	1. roslaunch mybot_gazebo mybot_world.launch
	2. roslaunch mybot_navigation gmapping_demo.launch
	3. roslaunch mybot_navigation amcl_demo1.launch
	4. roslaunch mybot_description mybot_rviz_gmapping.launch

---
# Creating the Map & Navigate(mini_jaguar_pkg)

	1. roslaunch mybot_gazebo mini.launch
	2. roslaunch mybot_navigation gmapping_demo.launch
	3. roslaunch mybot_navigation amcl_demo1.launch
	4. roslaunch mini_jaguar_pkg rviz.launch 

		**Or **
		
		roslaunch mini_jaguar_pkg all_mini.launch