


#Creating the Map:
	1. roslaunch mybot_gazebo mybot_world.launch
	2. roslaunch mybot_navigation gmapping_demo.launch
	3. roslaunch mybot_description mybot_rviz_gmapping.launch
	4. roslaunch mybot_navigation mybot_teleop.launch
	**Saving the Map**
		rosrun map_server map_saver -f ~/mybot_ws/src/mybot_navigation/maps/test_map
---
#Loading the Map
	1. roslaunch mybot_gazebo mybot_world.launch
	2. roslaunch mybot_navigation amcl_demo.launch
	3. roslaunch mybot_description mybot_rviz_amcl.launch

---

#Creating the Map & Navigate
	1. roslaunch mybot_gazebo mybot_world.launch
	2. roslaunch mybot_navigation gmapping_demo.launch
	3. roslaunch mybot_navigation amcl_demo1.launch
	4. roslaunch mybot_description mybot_rviz_gmapping.launch

---
#Creating the Map & Navigate(mini_jaguar_pkg)

	1. roslaunch mybot_gazebo mini.launch
	2. roslaunch mybot_navigation gmapping_demo.launch
	3. roslaunch mybot_navigation amcl_demo1.launch
	4. roslaunch mini_jaguar_pkg rviz.launch 