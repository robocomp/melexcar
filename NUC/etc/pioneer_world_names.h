//////////////////////////////////////////
// Node and edges names for Pioneer world
//////////////////////////////////////////

#ifndef DSR_NAMES_H
#define DSR_NAMES_H

#include <string>

// NODES
const std::string robot_name = "robot";
const std :: string waypoints_name = "waypoints";
const std::string robot_body_name = "body";
const std::string robot_mind_name = "mind"; 
const std::string world_name = "world"; 
const std::string floor_name = "floor";
const std::string wide_angle_camera_name = "wide_angle_camera";
const std::string three_frontal_camera_name = "three_frontal_camera";
const std::string breakpoints_laser_name = "breakpoints_laser_name";
const std::string right_camera_name = "right_camera";
const std::string left_camera_name = "left_camera";
const std::string two_back_camera_name = "back_camera";
const std::string three_frontal_camera_compressed_name = "three_frontal_camera_compressed";
const std::string wide_angle_camera_compressed_name = "wide_angle_camera_compressed";
const std::string right_camera_compressed_name = "right_camera_compressed";
const std::string left_camera_compressed_name = "left_camera_compressed";
const std::string two_back_camera_compressed_name = "two_back_camera_compressed";
const std::string laser_front_name = "laser_front";
const std::string laser_left_name = "laser_left";
const std::string laser_right_name = "laser_right";
const std::string laser_back_name = "laser_back";
const std::string gps_name = "gps";
//const std::string laser_social_name = "laser_social"; 
const std::string battery_name = "battery"; 
const std::string odometry_name = "odometry";
const std::string wifi_name = "wifi";
const std::string Ultra_left_front = "Ultra_left_front"; 
const std::string Ultra_rigth_front = "Ultra_rigth_front";
const std::string Ultra_left_side = "Ultra_left_side";
const std::string Ultra_rigth_side = "Ultra_rigth_side";
const std::string Ultra_left_center = "Ultra_left_center";
const std::string Ultra_right_center = "Ultra_right_center";
const std::string Ultra_left_back = "Ultra_left_back";
const std::string Ultra_right_back = "Ultra_right_back";
const std::string current_grid_name = "current_grid"; 
const std::string current_intention_name = "current_intention"; 
const std::string current_path_name = "current_path";
const std::string task_name = "task";



//NODE TYPES
const std::string omnirobot_type_name = "omnirobot";
const std::string wayp_type_name = "wayp";

const std::string differentialrobot_type_name = "differentialrobot";
const std::string path_to_target_type_name = "path_to_target";
const std::string intention_type_name = "intention";
const std::string personal_space_type_name = "personal_space";
const std::string affordance_space_type_name = "affordance_space";
const std::string laser_type_name = "laser";
const std::string laser_social_type_name = "laser_social";
const std::string rgbd_type_name = "rgbd";
const std::string grid_type_name = "grid";
const std::string left_hand_type_name = "left_hand";
const std::string pan_tilt_type_name = "pan_tilt";
const std::string glass_type_name = "glass";
const std::string cup_type_name = "cup";
const std::string plant_type_name = "plant";
const std::string microwave_type_name = "microwave";
const std::string social_grid_type_name = "social_grid";
const std::string room_type_name = "room";
const std::string person_type_name = "person";
const std::string vase_type_name = "vase";
const std::string refrigerator_type_name = "refrigerator";
const std::string oven_type_name = "oven";
const std::string apple_type_name = "apple";

// EDGES TYPES
const std::string think_type = "thinks";
const std::string has_type = "has";
const std::string in_type_name = "in";
const std::string attention_action_type_name = "attention_action";
const std::string goto_action_type_name = "goto_action";
const std::string RT_type_name = "RT";

#endif
