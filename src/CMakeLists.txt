find_package                ( Eigen3 3.4 REQUIRED                             )

add_library                ( trajectory_generation trajectory_generation/trajectory_generation.cpp )
target_link_libraries      ( trajectory_generation Eigen3::Eigen  )
target_include_directories ( trajectory_generation PUBLIC ${CMAKE_SOURCE_DIR}/include/trajectory_generation )

add_library                ( kinematic_model kinematic_model/kinematic_model.cpp )
target_link_libraries      ( kinematic_model Eigen3::Eigen  )
target_include_directories ( kinematic_model PUBLIC ${CMAKE_SOURCE_DIR}/include/kinematic_model )

add_library                ( control control/control.cpp )
target_link_libraries      ( control Eigen3::Eigen  kinematic_model )
target_include_directories ( control PUBLIC ${CMAKE_SOURCE_DIR}/include/control )