#ifndef SRC_CONFIG_H_
#define SRC_CONFIG_H_

#define RAI_TENSORFLOW_BACKEND
#define RAI_TORCH_BACKEND
//#define RAI_ONNXRUNTIME_BACKEND

typedef enum {
  RAI_BACKEND_TENSORFLOW = 0,
  RAI_BACKEND_TORCH,
  RAI_BACKEND_ONNXRUNTIME,
} RAI_Backend;

typedef enum {
  RAI_DEVICE_CPU = 0,
  // TODO: multi GPU
  RAI_DEVICE_GPU,
} RAI_Device;

#define RAI_ENC_VER 200

//#define RAI_COPY_RUN_INPUT
#define RAI_COPY_RUN_OUTPUT
#define RAI_PRINT_BACKEND_ERRORS

// #define RAI_OVERRIDE_AOF_CHECK

#endif /* SRC_CONFIG_H_ */
