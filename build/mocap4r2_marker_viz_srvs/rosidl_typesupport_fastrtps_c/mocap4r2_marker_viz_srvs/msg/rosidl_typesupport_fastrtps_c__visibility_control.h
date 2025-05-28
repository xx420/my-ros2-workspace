// generated from
// rosidl_typesupport_fastrtps_c/resource/rosidl_typesupport_fastrtps_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef MOCAP4R2_MARKER_VIZ_SRVS__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
#define MOCAP4R2_MARKER_VIZ_SRVS__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_mocap4r2_marker_viz_srvs __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_mocap4r2_marker_viz_srvs __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_C_BUILDING_DLL_mocap4r2_marker_viz_srvs
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_mocap4r2_marker_viz_srvs
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_EXPORT_mocap4r2_marker_viz_srvs __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mocap4r2_marker_viz_srvs
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mocap4r2_marker_viz_srvs
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // MOCAP4R2_MARKER_VIZ_SRVS__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C__VISIBILITY_CONTROL_H_
