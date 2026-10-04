#import <QuartzCore/QuartzCore.h>

#include "metal_drawable_size.h"

void vcs_set_metal_layer_drawable_size(void *metal_layer, double width, double height) {
    if (metal_layer == nullptr || width <= 0.0 || height <= 0.0) return;
    CAMetalLayer *layer = (__bridge CAMetalLayer *)metal_layer;
    layer.drawableSize = CGSizeMake(width, height);
}
