// Copyright 2017 The Lynx Authors. All rights reserved.

#ifndef LYNX_RENDER_SWITCH_H_
#define LYNX_RENDER_SWITCH_H_

#include "render/render_object.h"

namespace lynx {
class ExtendedView : public RenderObject {
 public:
  ExtendedView(const char* tag_name,
               RenderObjectType type,
               uint64_t id,
               RenderTreeHost* host);
  virtual ~ExtendedView() {}

 protected:
  virtual base::Size OnMeasure(int width_descriptor,
                               int height_descriptor) override;
};
}  // namespace lynx

#endif  // LYNX_RENDER_SWITCH_H_
