find_package                ( Eigen3 3.4 REQUIRED                             )

add_executable(example_eigen ${CMAKE_SOURCE_DIR}/apps/example_eigen/example_eigen.cpp)
target_link_libraries(example_eigen PUBLIC Eigen3::Eigen )

add_executable(trajectory_test ${CMAKE_SOURCE_DIR}/apps/trajectory_test/trajectory_test.cpp)
target_link_libraries(trajectory_test PUBLIC trajectory_generation )

add_executable(kinematic_test ${CMAKE_SOURCE_DIR}/apps/kinematic_test/kinematic_test.cpp)
target_link_libraries(kinematic_test PUBLIC kinematic_model )

add_executable(control_test ${CMAKE_SOURCE_DIR}/apps/control/control_test.cpp)
target_link_libraries(control_test PUBLIC control trajectory_generation )