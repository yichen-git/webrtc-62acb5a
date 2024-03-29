/*
 *  Copyright (c) 2015 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef API_VIDEO_VIDEO_ROTATION_H_
#define API_VIDEO_VIDEO_ROTATION_H_

namespace webrtc {

// enum for clockwise rotation.
enum VideoRotation {
  kVideoRotation_0 = 0,
  kVideoRotation_90 = 90,
  kVideoRotation_180 = 180,
  kVideoRotation_270 = 270
};

// Yichen
struct ContentRotation {
  uint8_t yaw = 0;
  uint8_t pitch = 0;
  uint8_t roll = 0;
  uint8_t extra = 0;
}; // Yichen */

// Yichen
struct AdaptSize {
  bool adapted = false;
  int width = 0;
  int height = 0;
}; // Yichen */

}  // namespace webrtc

#endif  // API_VIDEO_VIDEO_ROTATION_H_
